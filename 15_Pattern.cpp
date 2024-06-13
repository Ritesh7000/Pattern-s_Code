#include <iostream>

using std::cout;
using std::cin;
using std::endl;


/*
Enter number :  5
12345
1234
123
12
1
*/

int main(void)
{
	int iNo;

	cout <<  "Enter number :\t";
	cin >> iNo;

	for(int iCounter = 0;iCounter < iNo;iCounter++)
	{
		for(int iCounter1 = 1;iCounter1 <= iNo-iCounter;iCounter1++)
			cout << iCounter1;
		cout << endl;
	}


	return 0;
}