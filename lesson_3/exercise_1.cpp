#include "iostream"
using namespace std;
int main()
{
	int week;
	
	cout << "���������ڣ�"; 
	cin >> week;
	
	if (week == 1)
	{
		cout << "��һѧϰӢ�" << endl; 
	}
	if (week == 2)
	{
		cout << "�ܶ�ѧϰ���١�" << endl; 
	}
    if (week == 3)
	{
		cout << "����ѧϰ��Ӿ��" << endl; 
	} 
	if (week == 4) 
	{
		cout << "����ѧϰ��̡�" << endl; 
	} 
    if (week == 5)
	{
	    cout << "����μӺϳ���" << endl; 
	} 
    if ((week == 6) || (week == 7)) 
	{
		cout << "��ĩ����ë��" << endl; 
	} 
	if (week > 7)
	{
		cout << "������󣡣���" << endl; 
	} 
	
	return 0;
} 
