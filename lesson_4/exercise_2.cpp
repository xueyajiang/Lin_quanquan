#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int targetNum;
	int inputNum = 0;
	
	srand(time(0));
	targetNum = rand() % 100 + 1;

	while(inputNum != targetNum)
	{
		cout << "������²�����֣�" << endl;
	    cin >> inputNum;
		if (inputNum > targetNum)
		{
			cout << "������ٲ�С�㣡" << endl;
		}
		else if (inputNum < targetNum)
		{
			cout << "������ٲ´�㣡" << endl; 
			
		}
		else
		{
			cout << "��̫�����ˣ���¶��ˡ�" << endl;
//			break; 
		} 
	}
	return 0;
} 
