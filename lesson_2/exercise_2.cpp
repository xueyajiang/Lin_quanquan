#include <iostream>
using namespace std;
int main()
{
	char letter;
	cout << "请输入一个小写字母：";
	cin >> letter;
	bool flag = true;
	
	while (flag)
	{
		if ((letter >= 'a') && (letter <= 'z'))
		{
			letter = letter - 32;
			cout.put(letter) << endl;
			flag = false; 
		}
		else if ((letter >= 'A') && (letter <= 'Z'))
		{
			cout.put(letter) << endl;
			flag = false;
		}
		else
		{
			cout << endl; 
			cout << "输入有错误！" << endl; 
			cout << "请输入一个小写字母：";
			cin >> letter;
		}
	}
	return 0;
}
