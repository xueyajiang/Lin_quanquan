#include "iostream"
using namespace std;
int main()
{
	int a;
	int b;
	int c;
	int max;
	
	cout << "请输入三个同学的年龄：";
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
	cout << "最大的年龄是：" << max << endl; 
	return 0;
}
