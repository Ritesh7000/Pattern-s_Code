#include<stdio.h>


/*
o/p:
Enter No. : 5

1 2 3 4 5
6 7 8 9
10 11 12 
13 14
15

*/
int main(void)
{
	int iNo;
	int iCounter1;
	int iCounter2;
	int iNo1 = 1;

	printf("Enter No. :\t");
	scanf("%d",&iNo);

	for(iCounter1 = iNo;iCounter1 > 0 ; iCounter1--)
	{
		for(iCounter2 = 1;iCounter2 <= iCounter1;iCounter2++,iNo1++)
		{
			printf("%d  ",iNo1);
		}
		printf("\n");
	}

	return 0;
}