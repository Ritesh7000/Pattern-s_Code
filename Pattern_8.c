#include<stdio.h>


/*
o/p:
Enter No. : 5

* * * * *
* * * *
* * *
* *
*

*/
int main(void)
{
	int iNo;
	int iCounter1;
	int iCounter2;

	printf("Enter No. :\t");
	scanf("%d",&iNo);

	for(iCounter1 = iNo;iCounter1 > 0 ; iCounter1--)
	{
		for(iCounter2 = 1;iCounter2 <= iCounter1;iCounter2++)
		{
			printf("*  ");
		}
		printf("\n");
	}

	return 0;
}