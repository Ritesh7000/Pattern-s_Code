#include<iostream>
using std::cout;
using std::cin;
using std::endl;


/*
o/p:
Enter row =6

Enter column =6

* * * * * *
* * * * * *
* * * * * *
* * * * * *
* * * * * *
* * * * * *
*/
int main(void)
{
	int r,c;

	cout << "Enter row =";
	cin >> r;

	cout << "\nEnter column =";
	cin >> c;

	cout << endl;

	for(int iCounter = 1;iCounter <= r;iCounter++)
	{
		for(int iCounter2 = 1;iCounter2 <= c;iCounter2++)
		{
			cout <<"* ";
		}
		cout << endl;
	}
}

