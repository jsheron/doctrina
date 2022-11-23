#include <stdio.h> 
/* Description 
 * -------------------------------------------------------------------------
 * European countries use a 13-digit code, known as 
 * a European Article Number (EAN). Instead of the 12-digit
 * Universal Product Code (UPC) found in North America. Each
 * EAN ends with a check digit, just as UPC code. 
 *
 * Rules 
 * -------------
 * 1] Add the SEcound, FOurth, SIxth, EIghth, TEnth, and TWelfth digits.
 * 2] Add the FIrst, THird, FIFth, SEVenth, NInth, and ELeventh digits.
 * 3] Multiply the first sum by 3 and add it to the second sum. 
 * 4] Subtract 1 from the total. 
 * 5] Compute the remainder when the adjusted total is divided by 10. 
 * 6] Subtract the reamainder from 9. 
 * -------------
 *
 *     For example, consider Gulluoglu Turkish Delight Pistachio & Coconut, 
 * which has an EAN of 8691484260008. 
 *
 *     The fisrt sum is 6 + 1 + 8 + 2 + 0 + 0 = 17, and the secound sum
 * is 8 + 9 + 4 + 4 + 6 + 0 = 31. Multiply the first sum by 3 and 
 * adding the second yields 82. 
 *
 *     Subtracting 1 gives 81. The remainder upon dividing by 10 is 1. When 
 * the remainder is subtracted from 9, the result is 8, which matches the 
 * the last digit of the original code. Your job is modify the upc.c program
 * of section 4.1 so that it calculates the check digit for an EAN. The 
 * user will enter the first 12 digits of the EAN as a single number: 
 *
 * Enter the first 12 digits of an EAN: 869148426000
 * Check digit: 8
 * -------------------------------------------------------------------------
 */

int main(void) {

	int SE = 0,FO = 0,SI = 0,EI = 0,TE = 0,TW = 0; 
	int FI = 0,TH = 0,FIF = 0,SEV = 0,NI = 0,EL = 0; 

	printf("Enter the first 12 digits of an EAN:\n");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &FI, &SE, &TH, &FO, &FIF, &SI, &SEV, &EI, &NI, &TE, &EL, &TW);

	int FSUM =  SE  + FO + SI + EI + TE + TW;
	int SSUM =  FI + TH + FIF + SEV + NI + EL; 
	int MUL  =  (( FSUM * 3 ) + SSUM ) - 1; 
	int MOD  =  MUL % 10; 
	int FIN  =  9 - MOD; 
	
	printf("EAN Check digit: %d\n", FIN);
	return 0;
}





