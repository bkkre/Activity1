// PracticalWeek2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
///* The following are function declarations. They _declare_ that the functions
//exist but they do not _define_ what the functions actually do (the definitions
//appear after the main function). By declaring these functions here, they may be
//called in the main before they are defined.
//Note: function1 expects an int type, whereas function2 expects a pointer to an int
//*/
//void function1(int);
//void function2(int*);
//int main() {
//	int number = 10;
//
//	/* C1. display the contents of number to the screen */
//	printf("Value of number is: %d\n",number);
//
//	/* C2. display the address of variable number to the screen */
//	int* numPtr = NULL;
//	numPtr = &number;
//	printf("Address of number is: %p\n", numPtr);
//
//	/* C3. call function1 */
//	function1(number);
//
//	/* C4. display the contents of number to the screen */
//	printf("Value of number is: %d\n", number);
//
//	/* C5. call function2 */
//	function2(&number);
//
//	/* C6. display the contents of number to the screen */
//	printf("Value of number after function calls: %d\n", number);
//
//	return 0;
//}
//void function1(int number)
//{
//	/* C7. increment number by one */
//	number += 1;
//
//	/* C8. display the contents of number to the screen (should be 11) */
//	printf("Value of number is: %d\n", number);
//
//	/* C9. display the address of number to the screen */
//	printf("Address of number is: %p\n", &number);
//}
//void function2(int* numberPtr)
//{
//	/* C10. display the address of number to the screen (should be the same
//address as you displayed first in main) */
//	printf("Address of number in function2 at the start is: %p\n", numberPtr);
//
///* C11. display the value that the pointer numberPtr points to */
//	printf("Value of number in function2 is: %d\n", *numberPtr);
//
///* C12. increment the value stored in number */
//	*numberPtr = *numberPtr + 1;
//
///* C13. display the contents of number to the screen */
//	printf("Value of number in function2 is : %d\n", *numberPtr);
//
//}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/* function to read number from standard input (keyboard) */ 
void getNumber(int*);
/* function to calculate the sum of two numbers */
void calculateSum(int*, int*, int*);
/* function to display details to the screen */
void displayDetails(void);
int main() {
	int num1 = 0; /* first number to be entered by user */
	int num2 = 0; /* second number to be entered by user */
	int sum = 0; /* stores sum of two numbers */
	displayDetails();
	/* prompt for and read first number */
	printf("Please enter first number : ");
	getNumber(&num1);
	/* prompt for and read second number */
	printf("Please enter second number: ");
	getNumber(&num2);
	/* add two numbers together and display to screen */
	calculateSum(&sum, &num1, &num2);
	printf("\nSum of %d and %d is: %d\n\n", num1, num2, sum);
	return 0;
}
/* function to read number from standard input (keyboard) */
void getNumber(int* number) {
	scanf("%d", number);
}
/* function to calculate the sum of two numbers */
void calculateSum(int* total, int* number1, int* number2) {
	*total = *number1 + *number2;
}
/* function to display details to the screen */
void displayDetails(void) {
	printf("Author : Jay Baker\n");
	printf("Stud ID : bakjp005\n");
	printf("Email ID : bakjp005@mymail.unisa.edu.au\n");
	printf("This is my own work as defined by the\n"); printf("University's Academics conduct Policy.\n\n");
}/* end function displayDetails */