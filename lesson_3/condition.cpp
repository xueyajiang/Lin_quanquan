#include "iostream"
using namespace std;
int main()
{
	/* ���ڿ���Ҫѧϰ��if��if else�� if  else if  else
	   ==  ��=  >   <  <=   >= */
	int eggs = 2;
	
	if (eggs < 2)
	{
		cout << "���������ˡ�" << endl; 
	}
	
	int hour;
	
	cin >> hour;
	if (hour > 12)
	{
		cout << "����������" << hour -12 << "�㣡" << endl; 
	}

    bool sunny;
    sunny = true; 
    
    if (sunny)
    {
    	cout << "������" << endl;
	}
	else
	{
		cout << "���ڽ���" << endl; 
	}
	
	bool start_button_pressed;
	start_button_pressed = false;
	if (start_button_pressed) 
	{
		cout << "��Ϸ��ʼ��" << endl; 
	}
	else
	{
		cout << "�ȴ���ʼ��" << endl; 
	} 
	
	int a;
	int b;
	cout << "������a��b��������" << endl; 
	cin >> a >> b; 
	if (a > b)
	{
		cout << "a����b��" << endl; 
	}
	else if (a < b) 
	{
	    cout << "aС��b��" << endl; 
	} 
	else
	{
		cout << "a����b��" << endl; 
	} 
	return 0;
}
