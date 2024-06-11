#include<iostream>
using std::cout;
using std::cin;
using std::endl;


/*
	o/p:
5
    *
   **
  ***
 ****
*****

*/
int main(void)
{
	int r;

	cin >> r;

	for(int i = 1;i <= r; i++)
	{
		for(int k= 1; k <= r-i;k++)
			cout << " ";

		for(int j=1;j <= i;j++)
		{
			cout << "*";
		}

		cout << endl;
	}

	return 0;
}


