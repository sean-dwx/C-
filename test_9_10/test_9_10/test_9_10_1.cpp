#include<iostream>
using namespace std;

class Date
{
public:

	Date(int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;
	}
	Date(const Date& d1)
	{
		_year = d1._year;
		_month = d1._month;
		_day = d1._day;
		cout << "this" << endl;
	}


	bool operator==(const Date& d)
	{
		if (_year == d._year &&
			_month == d._month &&
			_day == d._day)
		{
			return true;
		}
		return false;

	}
	bool operator<(const Date& d)
	{
		if (_year < d._year ||
			_year == d._year && _month < d._month ||
			_year == d._year && _month == d._month && _day < d._day)
		{
			return true;
		}
		return false;
	}
	bool operator!=(const Date& d)
	{
		if (!(*this == d))
		{
			return true;
		}
		return false;
	}


	

private:
	int _year;
	int _month;
	int _day;


};



int main()
{
	Date d1(2020, 9, 10);
	//Date d2(d1);
	Date d2(2020, 9, 11);
	if(d1==d2)
	{
        cout << "d1==d2" << endl;
	}
	else
	{
		cout<<"d1!=d2"<<endl;
	}
	if (d1 < d2)
	{
		cout << "d1<d2" << endl;
	}
	//对于Date类编译器生成的默认的运算符重载没有任何问题
	d2 = d1;

	
	
	
	
	return 0;
	






}