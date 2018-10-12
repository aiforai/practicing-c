// ex 3
#include<stdio.h> 
#include <stdlib.h>
int main() 
{ 
	// Formulas for each problem...
	//1 
	int cm_to_inches_0001;  // multiply 0.39
	int cm_divide_1ft_0001; // modulus 12...
	//2
	int cm_to_inches_0002;
	int cm_divide_1ft_0002;

	//101cm 
	int cm1=101; 
	cm_to_inches_0001=cm1 / 2.54 / 10; // the 10 is for cutting off the 9 off the integer
	cm_divide_1ft_0001=cm_to_inches_0001 % 12;

	//3cm 
	int cm2=3;
	cm_to_inches_0002=cm2/2.54;
	cm_divide_1ft_0002=cm_to_inches_0002%1; // the 1 is for the fact... 3cm is... has no feet LOL

	
	

	printf("101cm is %d feet and %d inches to the nearest inch.",cm_divide_1ft_0001,cm_to_inches_0001);
	printf("3cm is %d feet and %d inches to the nearest inch.",cm_divide_1ft_0002,cm_to_inches_0002);
	system("pause");

}