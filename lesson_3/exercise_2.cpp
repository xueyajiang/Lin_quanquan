#include "iostream"
using namespace std;
int main()
{
	int letter;
	cin >> letter;
	
	if ((letter >= 65) && (letter <= 90))
	{
		cout.put(letter + 32) << endl;
	}
	if ((letter >= 97) && (letter <= 122))
	{
		cout.put(letter - 32) << endl;
	}
/*	else
	{
		cout << "ÊäÈë´íÎó£¡" << endl; 
	} */
	return 0;
}
