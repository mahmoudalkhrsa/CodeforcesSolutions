#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int h, n;
	cin >> n >> h;
	int p = 0;
	for (int i = 0; i < n; i++) 
	{
		int l;
		cin >> l;
		p += (l > h) ? 2 : 1;
	}
	cout << p << endl;

}