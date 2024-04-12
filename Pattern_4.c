#include<stdio.h>

/*
o/p:
*
* *
* * *
* * * * 
* * * * *

*/
int main(void)
{
	int iNo;
	int iCounter1;
	int iCounter2;


	printf("Enter Number :\t");
	scanf("%d",&iNo);

	for(iCounter1 = 0; iCounter1 < iNo; iCounter1++)
	{
		for(iCounter2 = 0; iCounter2 <= iCounter1;iCounter2++)
		{
			printf("*  ");
		}
		printf("\n");
	}

	return 0;
}

