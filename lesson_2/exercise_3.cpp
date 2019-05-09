#include <iostream>
using namespace std;
int main()
{
	char letter[50] = "";
    int i;
    int bigCount;
    int littleCount;
    
    i = 0;
    bigCount = 0;
	littleCount = 0;
	cout << "请输入一个字符串：";
	cin >> letter;
	while (letter[i] != '\0')
	{
		if ((letter[i] >= 'a') && (letter[i] <= 'z'))
		{
			littleCount = littleCount + 1;
		}
		if ((letter[i] >= 'A') && (letter[i] <= 'Z'))
		{
	        bigCount = bigCount + 1;
		}
		i = i + 1;
	}
	cout<<"大写字母的个数："<< bigCount << endl;
	cout<<"小写字母的个数："<< littleCount<< endl;
	return 0;
}
