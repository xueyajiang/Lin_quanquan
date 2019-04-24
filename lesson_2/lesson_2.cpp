#include <iostream>
using namespace std;
/* 这节课主要讲的内容是：数据类型（int char bool 二进制） */ 
int main()
{
	/* 整数类型：int 
	             占用4个字节的内存 */ 
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
	/* 字符型：char
	           占用1个字节的内存 
			   ASCII码表 */
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
	/* 布尔型：bool
	           只有true 和 false两个值
			   true 对应于1; false 对应于0*/
	bool right = true;
	bool wrong = false;
    cout << "You are " << right << endl;
    cout << "You are " << wrong << endl;
    
	return 0;
}
