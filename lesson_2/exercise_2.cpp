#include <iostream>
using namespace std;
int main()
{
	char letter;
	cout << "������һ��Сд��ĸ��";
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
			cout << "�����д���" << endl; 
			cout << "������һ��Сд��ĸ��";
			cin >> letter;
		}
	}
	return 0;
}
