#include "iostream"
using namespace std;
int main()
{
	int length;
	int perimeter;
	int area;
	cout << "请输入正方形的边长：";
	cin >> length;
	perimeter = 4 * length;
	area = length * length;
	cout << "正方形的周长：" << perimeter << endl; 
	cout << "正方形的面积：" << area << endl;
	return 0; 
}
