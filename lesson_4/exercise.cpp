#include <iostream>
using namespace std;
int main()
{
	int num;
	int sum;
	int i;
	i = 0;
	sum = 0;
	cout<<"������10��������"<<endl;
	while (i < 10)
	{
		cin>>num;
		sum = sum + num;
		i = i + 1;
	}
	cout <<"����ǣ�"<< sum << endl;
    return 0;	
} 
