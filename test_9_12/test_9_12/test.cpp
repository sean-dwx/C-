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
//	int& ra;//引用必须在初始化列表初始化
//	const int ca;//const修饰的变量必须在初始化列表初始化
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
//	d = 2021;//单参的构造函数，具有类型转换的效果
//	//1.使用2021调用单参类型的构造函数，先构造一个匿名对象（没有名字的对象）
//	//2,使用匿名对象给d进行赋值
//    //3,销毁该匿名对象
//	//4，销毁栈上的对象d
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
	int _count;//count是类的成员变量，每次初始化为0，所以
};

//如果想要知道Date类到底创建了多少个对象
//必须有一个计数变量，该变量来统计到底创建多少个对象


/*
方式1，采用
*/


int  main()
{
	Date d1(2020,9,11);
	Date d2(2020, 9, 12);
	Date d3(2020, 9, 13);
	Date d4(2020, 9, 14);
	


	return 0;
}