#include <iostream>
using namespace std;
/* ��ڿ���Ҫ���������ǣ��������ͣ�int char bool �����ƣ� */ 
int main()
{
	/* �������ͣ�int 
	             ռ��4���ֽڵ��ڴ� */ 
	int books = 3;
	int pencils = 1;
	cout << books + 1;
	cout << endl;
	cout << books;
	int someint;
	cin >> someint;
	cout << someint;
	cout << INT_MAX << endl;
	cout << INT_MIN << endl;
	/* �ַ��ͣ�char
	           ռ��1���ֽڵ��ڴ� 
			   ASCII��� */
	char first_letter = 'A';
	cout << first_letter << endl;
	char a = 'a';
	char b = 'b';
	cout << a << b << endl;
	int n = 100;
	cout << n << endl;
	cout.put(n) << endl;
	{
		int a = 97;
		cout << a << endl;
		cout.put(a) << endl;
		a = a - 32;
		cout << a << endl;
		cout.put(a) << endl;
	}
	/* �����ͣ�bool
	           ֻ��true �� false����ֵ
			   true ��Ӧ��1; false ��Ӧ��0*/
	bool right = true;
	bool wrong = false;
    cout << "You are " << right << endl;
    cout << "You are " << wrong << endl;
    
	return 0;
}
