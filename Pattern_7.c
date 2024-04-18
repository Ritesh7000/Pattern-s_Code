#include<stdio.h>
/*
o/p:
Enter No. : 5

1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/

int main(void)
{
	int iNo;
	int iNo2 = 1;
	int iCounter1;
	int iCounter2;

	printf("Enter Number :\t");
	scanf("%d",&iNo);

	for(iCounter1 = 1; iCounter1 <= iNo; iCounter1++)
	{
		for(iCounter2 = 1;iCounter2 <= iCounter1; iCounter2++)
		{
			printf("%d  ",iNo2++);
		}
		printf("\n");
	}

	return 0;
}
