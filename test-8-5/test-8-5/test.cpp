#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

#if 0
void main()
{
	int a = 10;
	int& ra = a;

	printf("%p\n", &a);
	printf("%p\n", &ra);
}
#endif


#if 0
void main()
{
	int a = 10;
	// int& ra;  //该条语句编译时会出错
	int& ra = a;
	int& rra = a;
	printf("%p %p %p\n", &a, &ra, &rra);
}
#endif

//引用的使用场景
//1.做参数

//void Swap(int& left, int&right)
//{
//	int temp = left;
//	left = right;
//	right = temp;
//}
//
//
////2.做返回值
//
//int& Count()
//{
//	static int n = 0;
//	n++;
//	return n;
//}



int& Add(int a, int b)
{
	int c = a + b;
	return c;
}

int main()
{
	int& ret = Add(1, 2);
	Add(3, 4);
	cout << "Add(1,2) is :" << ret << endl;
	return 0;
}
