#include<iostream>
using namespace std;
int readnumber()
{
	int number;
	cin >> number;
	return number;
}
void printresult(int number)
{
	if (number % 2 == 0 && number >= 4)
		cout << "YES";
	else
		cout << "NO";
}
int main() {
	printresult(readnumber());
}