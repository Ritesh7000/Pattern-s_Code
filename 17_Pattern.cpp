#include <iostream>

using std::cout;
using std::cin;
using std::endl;

/*
Enter number :  5

    * * * * *
   * * * * *
  * * * * *
 * * * * *
* * * * *
*/

int main(void)
{
	int iNo;

	cout <<  "Enter number :\t";
	cin >> iNo;

	cout <<  endl;
	for(int iCounter = 1;iCounter <= iNo;iCounter++)
	{
		for(int iCounter1 = 1;iCounter1 <= iNo-iCounter;iCounter1++)
			cout <<" ";

		for(int iCounter2 = 1;iCounter2 <= iNo; iCounter2++)
			cout << "* ";

		cout << endl;
	}

	return 0;
}