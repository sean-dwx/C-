#include <iostream>
using namespace std;

//class Date
//{
//public:
//	Date(int year, int month, int day)
//		:_year(year)
//		, _month(month)
//		, _day(day)
//		//,_t(0,0,0)
//		,ra(_day)
//		,ca(10)
//		
//	{}
//
//
//
//private:
//	int _year;
//	int _month;
//	int _day;
//	int& ra;//���ñ����ڳ�ʼ���б��ʼ��
//	const int ca;//const���εı��������ڳ�ʼ���б��ʼ��
//	Time _t;
//};
//
//class Time
//{
//public:
//	/*Time(int hour, int minute, int second)
//		:_hour(hour)
//		, _minute(minute)
//		, _second(second)
//		
//	{}*/
//	Time()
//	{
//		int _hour = 0;
//		int _minute = 0;
//		int _second = 0;
//
//	}
//
//private:
//	int _hour;
//	int _minute;
//	int _second;
//
//};
//
//
//int main()
//{
//	Date d1(2020, 9, 12);
//	Time d();
//	return 0;
//}

//class Date
//{
//public:
//	Date(int year)
//		:_year(year)
//		, _month(1)
//		, _day(1)
//	{
//		cout << "Date(int,int,int):" << this << endl;
//	}
//
//	Date& operator=(const Date& d)
//	{
//		cout << this << "=" << &d << endl;
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//		return *this;
//	}
//
//	~Date()
//	{
//		cout << "~Date():" << this << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int  main()
//{
//	Date d(2020);
//	d = 2021;//���εĹ��캯������������ת����Ч��
//	//1.ʹ��2021���õ������͵Ĺ��캯�����ȹ���һ����������û�����ֵĶ���
//	//2,ʹ�����������d���и�ֵ
//    //3,���ٸ���������
//	//4������ջ�ϵĶ���d
//
//
//
//	return 0;
//}

class Date
{
public:
	Date(int year,int month,int day)
		:_year(year)
		, _month(month)
		, _day(day)
		,_count(0)
	{
		_count++;
	}

	~Date()
	{
		_count--;
	}
private:
	int _year;
	int _month;
	int _day;
	int _count;//count����ĳ�Ա������ÿ�γ�ʼ��Ϊ0������
};

//�����Ҫ֪��Date�ൽ�״����˶��ٸ�����
//������һ�������������ñ�����ͳ�Ƶ��״������ٸ�����


/*
��ʽ1������
*/


int  main()
{
	Date d1(2020,9,11);
	Date d2(2020, 9, 12);
	Date d3(2020, 9, 13);
	Date d4(2020, 9, 14);
	


	return 0;
}