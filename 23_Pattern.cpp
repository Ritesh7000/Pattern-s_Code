#include<iostream>

using std::cout;
using std::cin;
using std::endl;


/*
o/p:
Enter Number =5
    *
   *.*
  *...*
 *.....*
*.......*
 *.....*
  *...*
   *.*
    *
*/

int main(void)
{
	int iNo;

	cout << "Enter Number =";
	cin >> iNo;

	for(int iCounter = 0; iCounter < iNo;iCounter++)
	{
		for(int iCounter1 = 1; iCounter1 < iNo-iCounter;iCounter1++)
			cout << " ";

		if(iCounter == 0)
		{
			cout << "*" << endl;  //1st line
			continue;
		}

		cout << "*";
		
		for(int iCounter2 = 1;iCounter2 <=iCounter*2-1;iCounter2++)
			cout << ".";

		cout << "*";
		cout << endl;
	}

	for(int iCounter = iNo; iCounter > 1 ;iCounter--)
	{
		for(int iCounter1 = 0;iCounter1 < iNo-iCounter+1;iCounter1++)
			cout << " ";

		if(iCounter == 2)
		{
			cout << "*" << endl;  //1st line
			continue;
		}

		cout << "*";
		
		for(int iCounter2 = iCounter*2-5;iCounter2 >=1;iCounter2--)
			cout << ".";
		
		cout << "*";
		cout << endl;
	}

	return 0;
}