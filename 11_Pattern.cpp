#include<iostream>
using std::cout;
using std::cin;
using std::endl;

/*
Enter row =8

Enter column =5

*****
*   *
*   *
*   *
*   *
*   *
*   *
*****
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
			if(iCounter == 1 || iCounter == r)
				cout <<"*";
			else
			{
				if(iCounter2== 1 || iCounter2 == c)
					cout << "*";
				else
					cout << " ";
			}
		}
		cout << endl;
	}

	return 0;
}


