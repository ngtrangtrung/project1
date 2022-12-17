/*******************************************************************************
 *
 * Description: Lab2-Bai 4
 *
 *
 * Last Changed By:  $Author: TrungNT $
 * Revision:         $Revision: 1.0 $
 * Last Changed:     $Date: 2/9/2021 $
 *
 ******************************************************************************/


#include <stdint.h>
#include <stdio.h>
//------------------------global variables-----------------------------------
//	static unsigned int global; /* Uninitialized variable stored in bss*/

	static unsigned int global = 100; /* Initialized static variable stored in DS*/

//
int main(void)
{
	printf("Value of local variable %i \n", global);
	printf("Value of local variable %i \n", global);
	printf("Value of local variable %i \n", global);
	printf("Value of local variable %i \n", global);

	printf("Address of local variable: %p \n",&global);


    /* Loop forever */
	for(;;);
}
