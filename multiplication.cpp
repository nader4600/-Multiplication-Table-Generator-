#include<iostream>
using namespace std;
int main()
{
	int num, i = 1,Max;
	cout << "Enter the Number of multiplication : " << endl;
	cin >> num;
	cout << "Enter the Maximum Number : " << endl;
	cin >> Max;
	while (num <= -1 || Max<=-1)
	{
		if (num <= -1 && !(Max <= -1))
		{
			cout << "Enter The positive Number " << endl;
			cout << "Enter the Number of multiplication : " << endl;
			cin >> num;
		}
		else if (Max <= -1 && !(num<=-1))
		{
			cout << "Enter The positive Number " << endl;
			cout << "Enter the Maximum Number  : " << endl;
			cin >> Max;
		}
		else
		{
			cout << "Enter The positive Number " << endl;
			cout << "Enter the Number of multiplication : " << endl;
			cin >> num;
			cout << "Enter The positive Number " << endl;
			cout << "Enter the Maximum Number  : " << endl;
			cin >> Max;
		}
	}
	while (i <= Max)
	{
		cout << num << " * " << i << " = " << num * i << endl;
		i++;
	}
}