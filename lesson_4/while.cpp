#include <iostream>
using namespace std;

int main()
{
	int a = 10;
	int i = 0;
	
	do{
		cout << "�������!!��" << endl; 
	}while(false);

	  while (a > 0) //������a < 10  �棻 �� 
    	{
		cout << "i = " << i << endl;
		cout << "a = " << a << endl; 
		cout<< "���ã�" << endl;

		i = ++i;
		a = a - 1;
    }
    
	cout << "������ɣ�" << endl; 
	return 0;
}
