#include<iostream>
using namespace std;
int main()
{
	int number;
	cin >> number;
	string a;
	cin >> a;
	int c = 0;
	for (int i = 0; i <number-1; i++)
	{
		if (a[i] == a[i + 1])
		{
			c++;
		}
	}
	cout << c << endl;
}