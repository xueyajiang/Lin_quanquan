#include "iostream"
using namespace std;
int main()
{
	int a;
	int b;
	int c;
	int max;
	
	cout << "����������ͬѧ�����䣺";
	cin >> a >> b >> c;
	if (a > b)
	{
		max = a;
	}
	else
	{
		max = b;
	}
	if (max < c)
	{
		max = c;
	}
	cout << "���������ǣ�" << max << endl; 
	return 0;
}
