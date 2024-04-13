#include<stdio.h>
/*
o/p:
Enter No. : 5

1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
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
		for(iCounter2 = 1; iCounter2 <= iCounter1; iCounter2++)
		{
			printf("%d ",iCounter2);
		}
		printf("\n");
	}


	return 0;
}
