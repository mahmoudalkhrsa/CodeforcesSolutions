#include<iostream>
#include<string>
using namespace std;
int main()
{
	short k = 0, n = 0;
	short i[100];
	cin >> n >> k;
	short c = 0;
	for (int j = 0; j < n; j++)
	{
		cin >> i[j];
	}
	for (int j = 0; j < n; j++)
	{
		if (i[j] >=i[k-1]&&i[j]>0)
		{
			c++;
		}
	}
	cout << c;
}