#include<iostream>
#include<vector>	
using namespace std;
int NumberOfStepsToMake_A_DivisibleBy_B_(int a, int b)
{
	if (a % b == 0)
		return 0;
	else
		return b - (a % b);
}
int main()
{
	int t=0,d=0;
	cin >> t;
	vector<int>ste;
	while (t--)
	{
		int a, b;
		cin >> a >> b;
		ste.push_back(NumberOfStepsToMake_A_DivisibleBy_B_(a, b));
		d++;
	}
	for (int &c : ste)
	{
		cout << c << endl;
	}
}