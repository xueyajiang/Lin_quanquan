#include <iostream>
using namespace std;
int main()
{
	int n;
	int sum;
	sum = 1;
	cout<<"������һ��������";
	cin >> n;
	while(n > 0)
	{
	    sum = sum * 2;
		n = n - 1;	
	}
	cout << "sum = " << sum << endl;
	return 0;
}

