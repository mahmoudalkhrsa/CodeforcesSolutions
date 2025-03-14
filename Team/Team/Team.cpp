#include<iostream>
#include<string>
using namespace std;
int NumberOfProgramsToBeSolved(int NumberOfPrograms)
{
	int a, b, c, counter = 0;
	for (int i = 0; i < NumberOfPrograms; i++)
	{
		cin >> a >> b >> c;
		counter += (a + b + c >= 2);

	}
	return counter;
}
int main()
{
	int NumberOfPrograms;
	cin >> NumberOfPrograms;
	cout << NumberOfProgramsToBeSolved(NumberOfPrograms);
}