#include<iostream>
using std::cout;
using std::cin;
using std::endl;


int main(void)
{
/*	o/p:
	No = 4
	*      *
	**    **
	***  ***
	********
	********
	***  ***
	**    **
	*      *
*/
	int iNo = 4;


	for(int iCounter1 = 1; iCounter1 <= iNo; iCounter1++)
	{
		for(int iCounter2 = 1;iCounter2 <= iCounter1; iCounter2++)
			cout << "*";

		int iSpace  = iNo*2 - iCounter1*2;

		for(int iCounter2 = 1;iCounter2 <= iSpace; iCounter2++)
			cout << " ";

		for(int iCounter2 = 1;iCounter2 <= iCounter1; iCounter2++)
			cout << "*";

		cout << endl;
	}

	for(int iCounter1 = iNo; iCounter1 >= 1; iCounter1--)
	{
		for(int iCounter2 = 1;iCounter2 <= iCounter1; iCounter2++)
			cout << "*";

		int iSpace  = iNo*2 - iCounter1*2;

		for(int iCounter2 = 1;iCounter2 <= iSpace; iCounter2++)
			cout << " ";

		for(int iCounter2 = 1;iCounter2 <= iCounter1; iCounter2++)
			cout << "*";

		cout << endl;
	}


	return 0;
}

