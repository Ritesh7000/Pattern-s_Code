#include<iostream>

using namespace std;
int fact(int);


/*
Enter Number = 5
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
*/

int main(void)
{
	int iNo;

	cout << "Enter Number = ";
	cin >> iNo;

	for(int i = 0;i < iNo;i++)
	{
		for(int j = 0;j <= i;j++)
		{
			cout << fact(i)/(fact(i-j)*fact(j)) << " ";
		}
		cout << endl;
	}

	return 0;
}

int fact(int iNo)
{
	int iSum = 1;

	for(int iCount = 1;iCount <=iNo;iCount++)
	{
		iSum *= iCount;
	}

	return iSum;
}