#include<stdio.h>


int main(void)
{
	int iNo;
	int iCounter1;
	int iCounter2;
	int iCount;

	printf("Enter Number =\t");
	scanf("%d",&iNo);

	for(iCounter1 = 1 ;iCounter1 <= iNo ; iCounter1++)
	{
		iCounter2 = iNo;
		iCount = 0;
		do
		{
			iCount++;
			printf("%d ",iCounter2);
			iCounter2--;
		}while(iCount != iCounter1);
		printf("\n");
	}

	return 0;
}

/*
Enter Number = 8

8
8 7
8 7 6
8 7 6 5
8 7 6 5 4
8 7 6 5 4 3
8 7 6 5 4 3 2
8 7 6 5 4 3 2 1

*/