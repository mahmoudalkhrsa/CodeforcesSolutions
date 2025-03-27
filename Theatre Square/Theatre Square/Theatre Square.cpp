#include<iostream>  
#include<cmath> 
using namespace std;
int main()
{
	long long n, m, a, r;
	cin >> n >> m >> a;
	r = ceil((double)n / a) * ceil((double)m / a);
	cout << r << endl;
}
