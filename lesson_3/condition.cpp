#include "iostream"
using namespace std;
int main()
{
	/* 本节课主要学习：if、if else， if  else if  else
	   ==  ！=  >   <  <=   >= */
	int eggs = 2;
	
	if (eggs < 2)
	{
		cout << "鸡蛋不够了。" << endl; 
	}
	
	int hour;
	
	cin >> hour;
	if (hour > 12)
	{
		cout << "现在是下午" << hour -12 << "点！" << endl; 
	}

    bool sunny;
    sunny = true; 
    
    if (sunny)
    {
    	cout << "踢足球！" << endl;
	}
	else
	{
		cout << "室内健身！" << endl; 
	}
	
	bool start_button_pressed;
	start_button_pressed = false;
	if (start_button_pressed) 
	{
		cout << "游戏开始！" << endl; 
	}
	else
	{
		cout << "等待开始！" << endl; 
	} 
	
	int a;
	int b;
	cout << "请输入a，b两个数：" << endl; 
	cin >> a >> b; 
	if (a > b)
	{
		cout << "a大于b。" << endl; 
	}
	else if (a < b) 
	{
	    cout << "a小于b。" << endl; 
	} 
	else
	{
		cout << "a等于b。" << endl; 
	} 
	return 0;
}
