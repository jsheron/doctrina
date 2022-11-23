/* Write a program that asks the user to enter the numbers 
 * from 1 to 16 (in any order) and then displays the 
 * numbers in a 4 by 4 arrangement, followed by the sums 
 * of the rows, columns, and diagonals:
 *
 * Rule for Magic square: 
 *
 * n = order of square; ie 4x4,2x2, 3x3 or n = length of column or row.
 * constant: m = n(n^2 + 1)/2  
 *
 * The first number in sequence is stored at position (n/2,n-1). The next 
 * number in sequence is stored at position (x-1,y+1).
 *
 * Three conditions hold:
 * 1] The position of each subsequent number pair from intial, decrements 
 *    the row number(x) from the previous number by 1. 
 *    The column number(y) is incremented from the previous number by 1. 
 *
 *    ie next number (x-1,y+1)
 *
 *    At any time, if the calculated row position becomes -1, 
 *    it will wrap around to n-1. 
 *
 *    Similarly, if the calculated column position becomes n, 
 *    it will wrap around to 0. 
 *
 * 2] If the magic square already contains a number at the calculated postion, 
 *    calculated position column position will be decremented by 2, and the 
 *    calculated row will be incremented by 1.
 *
 *    if (x,y) is taken; then ( y = y - 2; x = x + 1 )
 *
 * 3] If the calculated row position is -1 & calculated column position is n, the new
 *    position would be: (0, n-2).
 *---------------------------------------------------
 *
 * Expected output: 
 *
 * Enter the numbers from 1 to 16 in any order: 
 * 16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1
 *
 * OUPUT
 *  
 * 16  3  2 13 
 *  5 10 11  8
 *  9  6  7 12
 *  4 15 14  1
*/
#include <stdio.h>

int main(void){
	int n = 4,l = 30; 
	int sqre[n][n];
 
	/* Calculate constant of order n */ 
	int m = n * ( n * n + 1) / 2; 

	/*Start of square */ 
		printf("Enter the numbers from 1 to 16 in any order: \n");
		for(int x = 0; x < n; x++){
	 	  for(int y = 0; y < n; y++){
	     	     scanf("%d", &sqre[x][y]);
			}
		}

		int i = 0,z = 0; 
			for(int x = 0, y = 0; x < n; x++)
			   i += sqre[x][y];
			for(int x = 0, y = n - 1; x < n; x++, y--)
		 	    z += sqre[x][y];     
		
/*
		 	for(int x = 0; x < n; x++){
				int row = 0; 
				int col = 0; 
			for(int y = 0; y < n; y++){
	        		row += sqre[x][y];
				col += sqre[x][y];
			}
		}
*/
	   
	if(i == z){
            printf("\n 4x4 Magic square\n-\033[%db\n",l);
             for(int x = 0; x < n; x++){
                for(int y = 0; y < n; y++){
                   printf("%4d",sqre[x][y]); 
			}
		   printf("\n");
		}
	     	   printf("\n-\033[%db\nMagic square to the order of %d with a constant of %d\nRow sums:%d\nColumn sums:%d\nDiagonal sums:%d\n",l, n, m, i, i, z); 
		}
	else{	
 		   printf("The seqeunce of numbers do not equat to the constant %d of a 4x4 magic square try a different sequence\n", m);
		   return 1;
		}

	
	return 0;
}
