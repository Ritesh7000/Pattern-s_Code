#include <iostream>

using std::cout;
using std::cin;
using std::endl;

/*
Enter number :  5
1
01
101
0101
10101
*/

int main(void)
{
	int iNo;

	cout <<  "Enter number :\t";
	cin >> iNo;

	for(int iCounter = 1;iCounter <= iNo;iCounter++)
	{
		for(int iCounter1 = 1;iCounter1 <= iCounter;iCounter1++)
		{
			if((iCounter+iCounter1)%2 == 0)
				cout << "1";
			else
				cout << "0";
		}
		cout << endl;
	}

	return 0;
}