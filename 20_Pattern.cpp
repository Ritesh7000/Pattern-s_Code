#include<iostream>

using std::cout;
using std::cin;
using std::endl;


/* 
o/p: 

Enter a iNo =   5
          *
        * * *
      * * * * *
    * * * * * * *
  * * * * * * * * *
* * * * * * * * * * *
  * * * * * * * * *
    * * * * * * *
      * * * * *
        * * *
          *
*/
int main(void)
{
	int iNo;
	cout << "Enter a iNo =\t";
	cin >> iNo;

	for(int iCounter = 0; iCounter < iNo; iCounter++)
	{
		for(int iCounter1 = 1; iCounter1 <= iNo-iCounter; iCounter1++)
			cout << "  ";

		for(int iCounter2 = 1; iCounter2 <= (iCounter*2)+1;iCounter2++)
			cout << "* ";

		cout << endl;
	}

	for(int iCounter = iNo; iCounter >= 0; iCounter--)
	{
		for(int iCounter1 = iNo-iCounter; iCounter1 >= 1; iCounter1--)
			cout << "  ";

		for(int iCounter2 = (iCounter*2)+1; iCounter2 >= 1; iCounter2--)
			cout << "* ";

		cout << endl;
	}

	return 0;
}