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
	// int& ra;  //����������ʱ�����
	int& ra = a;
	int& rra = a;
	printf("%p %p %p\n", &a, &ra, &rra);
}
#endif

//���õ�ʹ�ó���
//1.������

//void Swap(int& left, int&right)
//{
//	int temp = left;
//	left = right;
//	right = temp;
//}
//
//
////2.������ֵ
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
