#include <iostream>
using namespace std;
/* ��ڿ���Ҫ���ڣ�cout cin endl int */
int main()
{
	cout<<"Hello NOIPer!" <<endl; 
	cout<<"�ҵ����ֽ�..."<<endl;
	cout<<"8 + 10 = "<< (8+10) <<endl;
	cout<<"12 + 155 = " << (12 + 155) <<endl;
	cout<<"13 * 8 = " << (13 * 8)<<endl;
	cout<<"13 - 8 = " << (13 - 8)<<endl;
	cout<<"13 / 8 = " << (13 / 8) <<endl;
    int a = 13 % 8;
	cout<<"13 % 8 = " << a <<endl;
	int b;
	cin>>b;
	cout<<"a + b = "<< a+b <<endl;
	string xueyajiang;
	cin >>xueyajiang;
	cout<<"������"<<xueyajiang<<endl;
	int c;
	int d;
	cin>>c;
	cin>>d;
	cout<< c <<" + "<< d <<" = " << c + d << endl;
	int a1;
	int b1;
	cin>>a1>>b1;
	cout<< a1 << " - " << b1 << " = "<< a1 - b1 << endl;
	
	return 0;
}
