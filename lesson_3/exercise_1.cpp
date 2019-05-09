#include "iostream"
using namespace std;
int main()
{
	int week;
	
	cout << "请输入星期："; 
	cin >> week;
	
	if (week == 1)
	{
		cout << "周一学习英语。" << endl; 
	}
	if (week == 2)
	{
		cout << "周二学习钢琴。" << endl; 
	}
    if (week == 3)
	{
		cout << "周三学习游泳。" << endl; 
	} 
	if (week == 4) 
	{
		cout << "周四学习编程。" << endl; 
	} 
    if (week == 5)
	{
	    cout << "周五参加合唱。" << endl; 
	} 
    if ((week == 6) || (week == 7)) 
	{
		cout << "周末打羽毛球。" << endl; 
	} 
	if (week > 7)
	{
		cout << "输入错误！！！" << endl; 
	} 
	
	return 0;
} 
