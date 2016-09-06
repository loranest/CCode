/*	Nestor Lora
	9/5/2016
	This snippet converts decimal digits to binary digits broken down into quad-bit strings
	Chapter 4 problems from x86 Assembly language and C Fundamentals
*/
#include <stdio.h>
#include <windows.h>
#define __STDC_WANT_LIB_EXT1__ 1

char *digit[16] = {"0000", "0001","0010","0011","0100","0101","0110","0111","1000",
						"1001","1010","1011","1100","1101","1110","1111"};
char num[100];

char * quad(int x);

int main()
{
	int i, p;
	printf("\n\n\n\tThis Program Lists The Binary Values From 1 Till Your Number\n\t\tEnter The Highest Value\n\n\n");
	printf("\n\t\tHigh Value: ");
	scanf_s("%d", &p);
	for (i = 0;i < 100;i++) num[i] = '\0';
	printf("\n\n\n");
	for(i=1;i<=p; i++)
	{
		printf("\t\t%d:",i);
		printf("\t%s",quad(i));
		printf("\n");
		strcpy_s(num, sizeof(num),"");
	}
	printf("\n\n\n");
	system("pause");
	
	return 0;
}

char * quad(int x)
{	
	char *temp[30];
	int c = 0, r= x;
	for (;c < 30;c++) temp[c] = "\0";
	c = 0;
	temp[0] = "";
	temp[0] = digit[r % 16];
	strcat_s(num,sizeof(num), ""); //Problem code
	c = 0;
	while (r >= 16)
	{
		r /= 16;
		temp[++c] = " ";
		temp[++c]= digit[r % 16];
	}
	if (x >= 16)
	{
		for (c; c >= 1; c--) strcat_s(num, sizeof(num), temp[c]); //This was the problem code
	}
	
	strcat_s(num, sizeof(num), temp[0]);
	return num;
}