
/*
 *  Předmět: Algoritmy (IAL) - FIT VUT v Brně
 *  Základní testy pro příklad c206.c (Dvousměrně vázaný lineární seznam)
 *  Vytvořil: Martin Tuček, září 2005
 *  Úprava: Kamil Jeřábek, září 2019
 */

#include "c206.h"
                                                         /* pracovní proměnné */
tDLList TEMPLIST;
int ElemValue=1;
int MaxListLength = 100;                     /* Handles wrongly linked lists. */


/*******************************************************************************
 * Pomocné funkce usnadňující testování vlastní implementace.
 ******************************************************************************/

void print_elements_of_list(tDLList TL)	{

	tDLList TempList=TL;
	int CurrListLength = 0;
	printf("-----------------");
	while ((TempList.First!=NULL) && (CurrListLength<MaxListLength))	{
		printf("\n \t%d",TempList.First->data);
		if ((TempList.First==TL.Act) && (TL.Act!=NULL))
			printf("\t <= toto je aktivní prvek ");
		TempList.First=TempList.First->rptr;
		CurrListLength++;
	}
    if (CurrListLength>=MaxListLength)
        printf("\nList exceeded maximum length!");
    printf("\n-----------------\n");
}

int test_DLInitList()	{
	solved=TRUE;
	DLInitList(&TEMPLIST);
	if (!solved)	{
		printf("Operace InitList nebyla implementována!\n");
		return(FALSE);
	}
	else	{
		print_elements_of_list(TEMPLIST);
		return(TRUE);
	}
}

int test_DLDisposeList()	{
	solved=TRUE;
	DLDisposeList(&TEMPLIST);
	if (!solved)	{
		printf("Operace DLDisposeList nebyla implementována!\n");
		return(FALSE);
	}
	else	{
		print_elements_of_list(TEMPLIST);
		return(TRUE);
	}
}

int test_DLInsertFirst()	{
	solved=TRUE;
	DLInsertFirst(&TEMPLIST,ElemValue);
	if (!solved)	{
		printf("Operace DLInsertFirst nebyla implementována!\n");
		return(FALSE);
	}
	else	{
		print_elements_of_list(TEMPLIST);
		return(TRUE);
	}
}

int test_DLInsertLast()	{
	solved=TRUE;
	DLInsertLast(&TEMPLIST,ElemValue);
	if (!solved)	{
		printf("Operace DLInsertLast nebyla implementována!\n");
		return(FALSE);
	}
	else	{
		print_elements_of_list(TEMPLIST);
		return(TRUE);
	}
}

int test_DLFirst()	{
	solved=TRUE;
	DLFirst(&TEMPLIST);
	if (!solved)	{
		printf("Operace DLFirst nebyla implementována!\n");
		return(FALSE);
	}
	else	{
		print_elements_of_list(TEMPLIST);
		return(TRUE);
	}
}

int test_DLLast()	{
	solved=TRUE;
	DLLast(&TEMPLIST);
	if (!solved)	{
		printf("Operace DLLast nebyla implementována!\n");
		return(FALSE);
	}
	else	{
		print_elements_of_list(TEMPLIST);
		return(TRUE);
	}
}

int test_DLCopyFirst()	{
	solved=TRUE;
    int temp;
    DLCopyFirst(&TEMPLIST,&temp);
	if (!solved)	{
		printf("Operace DLCopyFirst nebyla implementována!\n");
		return(FALSE);
	}
	else {
		if (errflg)	{
			printf("Operace DLCopyFirst volala funkci DLError.\n");
			errflg=FALSE;
			return(FALSE);
		}
		else	{
			printf("Operace DLCopyFirst vrací obsah %d.\n",temp);
			return(TRUE);
		}
	}
}

int test_DLCopyLast()	{
	solved=TRUE;
    int temp;
    DLCopyLast(&TEMPLIST,&temp);
	if (!solved)	{
		printf("Operace DLCopyLast nebyla implementována!\n");
		return(FALSE);
	}
	else {
		if (errflg)	{
			printf("Operace DLCopyLast volala funkci DLError.\n");
			errflg=FALSE;
			return(FALSE);
		}
		else	{
			printf("Operace DLCopyLast vrací obsah %d.\n",temp);
			return(TRUE);
		}
	}
}

int test_DLDeleteFirst ()	{
	solved=TRUE;
	DLDeleteFirst(&TEMPLIST);
	if (!solved)	{
		printf("Operace DLDeleteFirst nebyla implementována!\n");
		return(FALSE);
	}
	else	{
		print_elements_of_list(TEMPLIST);
		return(TRUE);
	}
}

int test_DLDeleteLast ()	{
	solved=TRUE;
	DLDeleteLast(&TEMPLIST);
	if (!solved)	{
		printf("Operace DLDeleteLast nebyla implementována!\n");
		return(FALSE);
	}
	else	{
		print_elements_of_list(TEMPLIST);
		return(TRUE);
	}
}

int test_DLPostDelete()	{
	solved=TRUE;
	DLPostDelete(&TEMPLIST);
	if (!solved)	{
		printf("Operace DLPostDelete nebyla implementována!\n");
		return(FALSE);
	}
	else	{
		print_elements_of_list(TEMPLIST);
		return(TRUE);
	}
}

int test_DLPreDelete()	{
	solved=TRUE;
	DLPreDelete(&TEMPLIST);
	if (!solved)	{
		printf("Operace DLPreDelete nebyla implementována!\n");
		return(FALSE);
	}
	else	{
		print_elements_of_list(TEMPLIST);
		return(TRUE);
	}
}

int test_DLPostInsert()	{
	solved=TRUE;
	DLPostInsert(&TEMPLIST,ElemValue);
	if (!solved)	{
		printf("Operace DLPostInsert nebyla implementována!\n");
		return(FALSE);
	}
	else	{
		print_elements_of_list(TEMPLIST);
		return(TRUE);
	}
}

int test_DLPreInsert()	{
	solved=TRUE;
	DLPreInsert(&TEMPLIST,ElemValue);
	if (!solved)	{
		printf("Operace DLPreInsert nebyla implementována!\n");
		return(FALSE);
	}
	else	{
		print_elements_of_list(TEMPLIST);
		return(TRUE);
	}
}

int test_DLCopy()	{
	solved=TRUE;
	int temp;
  DLCopy(&TEMPLIST,&temp);

	if (!solved)	{
		printf("Operace DLCopy nebyla implementována!\n");
		return(FALSE);
	}
	else {
		if (errflg)	{
			printf("Operace DLCopy volala funkci DLError.\n");
			errflg=FALSE;
			return(FALSE);
		}
		else	{
			printf("Operace DLCopy vrací obsah %d.\n",temp);
			return(TRUE);
		}
	}
}

int test_DLActualize()	{
	solved=TRUE;
	DLActualize(&TEMPLIST,ElemValue);
	if (!solved)	{
		printf("Operace DLActualize nebyla implementována!\n");
		return(FALSE);
	}
	else	{
		print_elements_of_list(TEMPLIST);
		return(TRUE);
	}
}

int test_DLSucc()	{
	solved=TRUE;
	DLSucc(&TEMPLIST);
	if (!solved)	{
		printf("Operace DLSucc nebyla implementována!\n");
		return(FALSE);
	}
	else	{
		print_elements_of_list(TEMPLIST);
		return(TRUE);
	}
}

int test_DLPred()	{
	solved=TRUE;
	DLPred(&TEMPLIST);
	if (!solved)	{
		printf("Operace DLPred nebyla implementována!\n");
		return(FALSE);
	}
	else	{
		print_elements_of_list(TEMPLIST);
		return(TRUE);
	}
}

int test_DLActive()	{
	solved=TRUE;
	int tmp=DLActive(&TEMPLIST);
	if (!solved)	{
		printf("Operace DLActive nebyla implementována!\n");
		return(FALSE);
	}
	else	{
		if (tmp)
			printf("Operace DLActive vrací hodnotu true.\n");
		else
			printf("Operace DLActive vrací hodnotu false.\n");
		return(TRUE);
	}
}

/*******************************************************************************
 * ZÁKLADNÍ TESTY
 * --------------
 * Za jejich úspěšné projítí získá student první část bodů za příklad.
 * Při hodnocení však budou použity rozšířené testy, které se zaměří
 * i na okrajové situace. Doporučujeme proto, aby si každý student
 * zkusitl tyto základní testy rozšířit o další zajímavé situace.
 *
 ******************************************************************************/

int main(int argc, char *argv[])	{

    printf("Dvousměrně vázaný lineární seznam\n");
    printf("=================================\n");

    printf("\n[TEST01]\n");
    printf("Inicializace seznamu\n");
    printf("~~~~~~~~~~~~~~~~~~~~\n");
    test_DLInitList();

    printf("\n[TEST02]\n");
    printf("Zavoláme 2x operaci DLInsertFirst a 2x operaci DLInsertLast.\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    ElemValue=1;
    test_DLInsertFirst();
    ElemValue=2;
    test_DLInsertFirst();
    ElemValue=3;
    test_DLInsertLast();
    ElemValue=4;
    test_DLInsertLast();

    printf("\n[TEST03]\n");
    printf("Otestujeme funkci DLFirst při neaktivním seznamu a funkci DLActive.\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    test_DLFirst();
    test_DLActive();

    printf("\n[TEST04]\n");
    printf("Otestujeme funkci DLLast.\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    test_DLLast();
    test_DLActive();

    printf("\n[TEST05]\n");
    printf("Test funkce DLCopy při aktivitě na posledním prvku\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    test_DLCopy();

    printf("\n[TEST06]\n");
    printf("Test funkce DLPred -- voláme 3x, aktivita zůstane na prvním prvku.\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    test_DLPred();
    test_DLPred();
    test_DLPred();
    test_DLActive();

    printf("\n[TEST07]\n");
    printf("Aktualizujeme obsah aktivního prvku.\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    ElemValue=5;
    test_DLActualize();
    test_DLActive();
    test_DLCopy();

    printf("\n[TEST08]\n");
    printf("Test funkce DLSucc -- voláme 3x, aktivita zůstane na posledním prvku.\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    test_DLSucc();
    test_DLSucc();
    test_DLSucc();
    test_DLActive();

    printf("\n[TEST09]\n");
    printf("Provedeme ještě jednou DLSucc - aktivita se ztratí.\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    test_DLSucc();
    test_DLActive();

    printf("\n[TEST10]\n");
    printf("Nastavíme aktivitu na začátek a pak ji zrušíme operací DLPred.\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    test_DLFirst();
    test_DLPred();
    test_DLActive();

    printf("\n[TEST11]\n");
    printf("Pokus o DLCopy při neaktivním seznamu => ošetřená chyba.\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    test_DLCopy();

    printf("\n[TEST12]\n");
    printf("Použití operace DLCopyFirst při neaktivním seznamu\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    test_DLCopyFirst();

    printf("\n[TEST13]\n");
    printf("Použití operace DLCopyLast při neaktivním seznamu\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    test_DLCopyLast();

    printf("\n[TEST14]\n");
    printf("Použití operace DLDeleteFirst při neaktivním seznamu\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    test_DLDeleteFirst();
    test_DLActive();

    printf("\n[TEST15]\n");
    printf("Použití operace DLDeleteLast při neaktivním seznamu\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    test_DLDeleteLast();
      test_DLActive();

    printf("\n[TEST16]\n");
    printf("Zkusíme DLPostDelete při aktivitě na posledním prvku.\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    test_DLLast();
    test_DLPostDelete();
    test_DLActive();

    printf("\n[TEST17]\n");
    printf("Operace DLPreDelete nyní smaže první prvek.\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    test_DLPreDelete();
    test_DLActive();

    printf("\n[TEST18]\n");
    printf("Seznam nakonec zrušíme.\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~\n");
    test_DLDisposeList();
    test_DLActive();

    printf("\n----------------------- konec příkladu c206 -------------------------\n");

    printf("\n\nVlastni testy - insertfirst\n");
    test_DLInitList();
    test_DLActive();

    printf("Vlozime 1 na zacatek\n");
    ElemValue = 1;
    test_DLInsertFirst();

    printf("Vlozime 2 na zacatek\n");
    ElemValue = 2;
    test_DLInsertFirst();

    printf("Vlozime 3 na zacatek\n");
    ElemValue = 3;
    test_DLInsertFirst();

    printf("Vlozime 4 na zacatek\n");
    ElemValue = 4;
    test_DLInsertFirst();

    printf("Zrusime seznam \n");
    test_DLDisposeList();
    test_DLActive();


    printf("\n\nVlastni testy - insertlast\n");
    test_DLInitList();
    test_DLActive();

    printf("Vlozime 1 na konec\n");
    ElemValue = 1;
    test_DLInsertLast();

    printf("Vlozime 2 na konec\n");
    ElemValue = 2;
    test_DLInsertLast();

    printf("Vlozime 3 na konec\n");
    ElemValue = 3;
    test_DLInsertLast();

    printf("Vlozime 4 na konec\n");
    ElemValue = 4;
    test_DLInsertLast();

    printf("Zrusime seznam \n");
    test_DLDisposeList();
    test_DLActive();


    printf("\n\nVlastni testy - last/first\n");
    test_DLInitList();

    printf("Vlozime 1 na konec\n");
    ElemValue = 1;
    test_DLInsertLast();
    printf("Aktivni je prvni\n");
    test_DLFirst();
    printf("Aktivni je posledni\n");
    test_DLLast();

    printf("Vlozime 2 na zacatek\n");
    ElemValue = 2;
    test_DLInsertFirst();
    printf("Aktivni je prvni\n");
    test_DLFirst();
    printf("Aktivni je posledni\n");
    test_DLLast();

    printf("Vlozime 0 na konec\n");
    ElemValue = 0;
    test_DLInsertLast();
    printf("Aktivni je prvni\n");
    test_DLFirst();
    printf("Aktivni je posledni\n");
    test_DLLast();

    printf("Vlozime 3 na zacatek\n");
    ElemValue = 3;
    test_DLInsertFirst();
    printf("Aktivni je prvni\n");
    test_DLFirst();
    printf("Aktivni je posledni\n");
    test_DLLast();

    printf("Zrusime seznam \n");
    test_DLDisposeList();
    test_DLActive();
    test_DLFirst();
    test_DLLast();
    test_DLActive();


    printf("\n\nVlastni testy - copy last/first\n");
    test_DLInitList();

    printf("Kopie prvniho - chyba");
    test_DLCopyFirst();
    printf("Kopie posledniho - chyba");
    test_DLCopyLast();

    printf("Vlozime 100 na konec\n");
    ElemValue = 100;
    test_DLInsertLast();
    test_DLCopyFirst();
    test_DLCopyLast();

    printf("Vlozime -100 na zacatek\n");
    ElemValue = -100;
    test_DLInsertFirst();
    test_DLCopyFirst();
    test_DLCopyLast();

    printf("Vlozime 200 na konec\n");
    ElemValue = 200;
    test_DLInsertLast();
    test_DLCopyFirst();
    test_DLCopyLast();

    printf("Vlozime -200 na zacatek\n");
    ElemValue = -200;
    test_DLInsertFirst();
    test_DLCopyFirst();
    test_DLCopyLast();

    printf("Zrusime seznam \n");
    test_DLDisposeList();
    printf("Kopie prvniho - chyba");
    test_DLCopyFirst();
    printf("Kopie posledniho - chyba");
    test_DLCopyLast();


    printf("\n\nVlastni testy - delete last/first\n");
    test_DLInitList();

    printf("Vlozime 123456\n");
    ElemValue = 1;
    test_DLInsertFirst();
    ElemValue = 2;
    test_DLInsertFirst();
    ElemValue = 3;
    test_DLInsertFirst();
    ElemValue = 4;
    test_DLInsertFirst();
    ElemValue = 5;
    test_DLInsertFirst();
    ElemValue = 6;
    test_DLInsertFirst();

    printf("Smaze 2 prvni\n");
    test_DLDeleteFirst();
    test_DLDeleteFirst();

    printf("Smaze 2 posledni\n");
    test_DLLast();
    test_DLDeleteLast();
    test_DLDeleteLast();

    printf("Smaze 1 prvni\n");
    test_DLFirst();
    test_DLDeleteFirst();

    printf("Smaze 1 posledni\n");
    test_DLLast();
    test_DLDeleteLast();

    printf("Smaze prvni a posledni nedeje se nic, seznam je prazdny\n");
    test_DLDeleteLast();
    test_DLDeleteFirst();

    printf("Zrusime seznam \n");
    test_DLDisposeList();


    printf("\n\nVlastni testy - pred/succ/actualize/copy\n");
    test_DLInitList();

    printf("posune aktivitu na predchozi - nedela nic\n");
    test_DLPred();
    printf("posune aktivitu na nasledujici - nedela nic\n");
    test_DLSucc();
    printf("zapise hodnotu 10 - nedela nic\n");
    ElemValue = 10;
    test_DLActualize();
    printf("cte z aktivniho prvku - chyba\n");
    test_DLCopy();

    printf("Vlozime 123456\n");
    ElemValue = 1;
    test_DLInsertFirst();
    ElemValue = 2;
    test_DLInsertFirst();
    ElemValue = 3;
    test_DLInsertFirst();
    ElemValue = 4;
    test_DLInsertFirst();
    ElemValue = 5;
    test_DLInsertFirst();
    ElemValue = 6;
    test_DLInsertFirst();

    printf("presuneme aktivit pres cely seznam pomoci succ - dopredu\n");
    test_DLFirst();
    test_DLSucc();
    test_DLSucc();
    test_DLSucc();
    test_DLSucc();
    test_DLSucc();
    printf("Zrusi se aktivita\n");
    test_DLSucc();

    printf("presuneme aktivit pres cely seznam pomoci pred - dozadu\n");
    test_DLLast();
    test_DLPred();
    test_DLPred();
    test_DLPred();
    test_DLPred();
    test_DLPred();
    printf("Zrusi se aktivita\n");
    test_DLPred();

    printf("dame aktivitu na 1, vlozime hodnotu 10 a zkontrolujeme zda copy vrati 10\n");
    test_DLFirst();
    ElemValue = 10;
    test_DLActualize();
    test_DLCopy();

    printf("dame aktivitu na 4, vlozime hodnotu -10 a zkontrolujeme zda copy vrati -10\n");
    test_DLSucc();
    test_DLSucc();
    ElemValue = -10;
    test_DLActualize();
    test_DLCopy();

    printf("dame aktivitu na 6, vlozime hodnotu 0 a zkontrolujeme zda copy vrati 0\n");
    test_DLLast();
    ElemValue = 0;
    test_DLActualize();
    test_DLCopy();

    printf("Zrusime seznam \n");
    test_DLDisposeList();

    printf("po zruseni seznamu dame aktivitu na posledni a zkusime vratit hodnotu - chyba\n");
    test_DLLast();
    test_DLCopy();

    printf("po zruseni seznamu dame aktivitu na prvni a zkusime vratit hodnotu - chyba\n");
    test_DLFirst();
    test_DLCopy();


    printf("\n\nVlastni testy - post delete\n");
    test_DLInitList();

    printf("smazeme nasledujici prvek - nic se nedeje\n");
    test_DLPostDelete();

    printf("Vlozime 123456\n");
    ElemValue = 1;
    test_DLInsertFirst();
    ElemValue = 2;
    test_DLInsertFirst();
    ElemValue = 3;
    test_DLInsertFirst();
    ElemValue = 4;
    test_DLInsertFirst();
    ElemValue = 5;
    test_DLInsertFirst();
    ElemValue = 6;
    test_DLInsertFirst();

    printf("dame aktivitu na 6 a smazeme vsechno od 5 do 1 vzdy zkusime presunout aktivitu na posledni a zpet\n");
    test_DLFirst();
    test_DLPostDelete();
    test_DLLast();
    test_DLFirst();
    test_DLPostDelete();
    test_DLLast();
    test_DLFirst();
    test_DLPostDelete();
    test_DLLast();
    test_DLFirst();
    test_DLPostDelete();
    test_DLLast();
    test_DLFirst();
    test_DLPostDelete();
    test_DLLast();
    test_DLFirst();
    printf("zustala jenom 6 - nic se nedeje\n");
    test_DLPostDelete();
    test_DLLast();
    test_DLFirst();

    printf("Zrusime seznam \n");
    test_DLDisposeList();


    printf("\n\nVlastni testy - pred delete\n");
    test_DLInitList();

    printf("smazeme nasledujici prvek - nic se nedeje\n");
    test_DLPreDelete();

    printf("Vlozime 123456\n");
    ElemValue = 1;
    test_DLInsertFirst();
    ElemValue = 2;
    test_DLInsertFirst();
    ElemValue = 3;
    test_DLInsertFirst();
    ElemValue = 4;
    test_DLInsertFirst();
    ElemValue = 5;
    test_DLInsertFirst();
    ElemValue = 6;
    test_DLInsertFirst();

    printf("dame aktivitu na 1 a smazeme vsechno od 2 do 6 vzdy zkusime presunout aktivitu na posledni a zpet\n");
    test_DLLast();
    test_DLPreDelete();
    test_DLFirst();
    test_DLLast();
    test_DLPreDelete();
    test_DLFirst();
    test_DLLast();
    test_DLPreDelete();
    test_DLFirst();
    test_DLLast();
    test_DLPreDelete();
    test_DLFirst();
    test_DLLast();
    test_DLPreDelete();
    test_DLFirst();
    test_DLLast();
    printf("zustala jenom 1 - nic se nedeje\n");
    test_DLPreDelete();
    test_DLFirst();
    test_DLLast();

    printf("Zrusime seznam \n");
    test_DLDisposeList();


    printf("\n\nVlastni testy - post insert\n");
    test_DLInitList();

    printf("zkusime vlozit do aktivniho seznamu - nic se nedeje\n");
    ElemValue = 1;
    test_DLPostInsert();

    printf("vlozime prvni prvek 1 a dame na nej aktivitu\n");
    ElemValue = 1;
    test_DLInsertFirst();
    test_DLFirst();

    printf("za aktivni prvek pridame 4,3,2 a vzdy zkusime zda je spravne nastaven konec a zacatek prehozenim aktivity\n");
    ElemValue = 4;
    test_DLPostInsert();
    test_DLLast();
    test_DLFirst();
    ElemValue = 3;
    test_DLPostInsert();
    test_DLLast();
    test_DLFirst();
    ElemValue = 2;
    test_DLPostInsert();
    test_DLLast();
    test_DLFirst();

    printf("Zrusime seznam \n");
    test_DLDisposeList();

    printf("\n\nVlastni testy - pre insert\n");
    test_DLInitList();

    printf("zkusime vlozit do aktivniho seznamu - nic se nedeje\n");
    ElemValue = 1;
    test_DLPreInsert();

    printf("vlozime posledni prvek 4 a dame na nej aktivitu\n");
    ElemValue = 4;
    test_DLInsertLast();
    test_DLLast();

    printf("za aktivni prvek pridame 1,2,3 a vzdy zkusime zda je spravne nastaven konec a zacatek prehozenim aktivity\n");
    ElemValue = 1;
    test_DLPreInsert();
    test_DLFirst();
    test_DLLast();
    ElemValue = 2;
    test_DLPreInsert();
    test_DLFirst();
    test_DLLast();
    ElemValue = 3;
    test_DLPreInsert();
    test_DLFirst();
    test_DLLast();

    printf("Zrusime seznam \n");
    test_DLDisposeList();

    return(0);
}
