#include<iostream>

using std::cout;
using std::cin;
using std::endl;


/*
Enter Value :9
    *       *
  *   *   *   *
*       *       *
*/

int main(void)
{
	int iNo;

	cout << "Enter Value :";
	cin >> iNo;

	for(int iCount1 = 1;iCount1 <= 3;iCount1++)
	{
		for(int iCount2 = 1;iCount2 <= iNo;iCount2++)
		{
			if(((iCount1+iCount2)%4 == 0) ||(iCount1 == 2 && iCount2%4 == 0))
				cout << "* ";
			else
				cout << "  ";
		}

		cout << endl;
	}

	return 0;
}