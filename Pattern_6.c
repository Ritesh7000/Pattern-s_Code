#include<stdio.h>
/*
o/p:
Enter No. : 5

1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
*/

int main(void)
{
	int iNo;
	int iCounter1;
	int iCounter2;

	printf("Enter Number :\t");
	scanf("%d",&iNo);

	for(iCounter1 = 1; iCounter1 <= iNo; iCounter1++)
	{
		for(iCounter2 = 1;iCounter2 <= iCounter1; iCounter2++)
		{
			printf("%d  ",iCounter1);
		}
		printf("\n");
	}

	return 0;
}
