#include <iostream>

using std::cout;
using std::cin;
using std::endl;

/*
Enter number :  5

        1
      2 1 2
    3 2 1 2 3
  4 3 2 1 2 3 4
5 4 3 2 1 2 3 4 5
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
			cout <<"  ";

		for(int iCounter2 = iCounter;iCounter2 >= 1; iCounter2--)
			cout <<iCounter2 << " ";

		for(int iCounter2 = 2;iCounter2 <= iCounter; iCounter2++)
			cout <<iCounter2 << " ";

		cout << endl;
	}

	return 0;
}