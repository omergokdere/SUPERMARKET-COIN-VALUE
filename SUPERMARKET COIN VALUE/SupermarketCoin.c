/*
 * Determines the value of a collection of coins.
 */
#include <stdio.h>

int main(void)
{
	char first, middle, last;     /* input - 3 initials              */
	int birkurus, beskurus;       /* input - count of each coin type */
	int onkurus, yirmibeskurus;   /* input - count of each coin type */
	int ellikurus,TL;             /* input - count of each coin type */
	int change;                   /* output - change amount          */
	int totalTL;                  /* output - TL amount              */
	int totalKurus;               /* total kurus                     */
	
	    /* Get and display the costumer's initials. */
	printf("Type in your 3 initials and press return -> ");
	scanf("%c%c%c", &first, &middle, &last);
	printf("\n%c%c%c, please enter your coin information.\n", first, middle, last);

	    /* Get the count of each kind of coin. */
	printf("Number of 1 TL coins      -> ");
	scanf("%d", &TL);
	printf("Number of ellikurus -> ");
	scanf("%d", &ellikurus);
	printf("Number of yirmibesbeskurus -> ");
	scanf("%d", &yirmibeskurus);
	printf("Number of onkurus       -> ");
	scanf("%d", &onkurus);
	printf("Number of beskurus      -> ");
	scanf("%d", &beskurus);
	printf("Number of birkurus      -> ");
	scanf("%d", &birkurus);
	
		/* Compute the total value in kurus. */
	totalKurus = 100 * TL+ 50 * ellikurus + 25 * yirmibeskurus +10 * onkurus + 5 * beskurus + birkurus;

	    /* Find the value in TL and change. */
	totalTL = totalKurus / 100;
	change = totalKurus % 100;

	    /*Display the credit slip with value in TL and change */
	printf("\n\n%c%c%c Coin Credit\nTL: %d\nChange: %d Kurus\n", first, middle, last, totalTL, change);
	
	return 0;
}