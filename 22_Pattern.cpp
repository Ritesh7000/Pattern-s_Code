#include<iostream>

using std::cout;
using std::cin;
using std::endl;

/*
o/p:
Enter a Number :- 5
            1
         2  3
      4  5  6
   7  8  9  10
11 12 13 14 15
   16 17 18 19
      20 21 22
         23 24
            25 
*/
int main(void)
{
	int iNo;

	cout << "Enter a Number :- ";
	cin >> iNo;
	int iVal = 0;

	for(int iCounter = 1;iCounter <= iNo-1; iCounter++)
	{
		for(int iCounter1 = 1; iCounter1 <= iNo-iCounter;iCounter1++)
		{ 
			cout << "   ";
		}

		for(int iCounter2 = 1;iCounter2 <=iCounter;iCounter2++)
		{
			iVal++;
			cout << iVal << "  "; 
		}

		cout << endl;
	}

	for(int iCounter = 1;iCounter <= iNo; iCounter++)
	{
		for(int iCounter1 = 1; iCounter1 < iCounter;iCounter1++)
		{
			cout << "   ";
		}

		for(int iCounter2 = iCounter;iCounter2 <= iNo ;iCounter2++)
		{
			iVal++;
			cout << iVal << " "; 
		}

		cout << endl;
	}

	return 0;
}