#include<iostream>
using namespace std;
class Date
{
public:
	void SetDate(int year,int month,int day)
	{
		_year = year;
		_month = month;
		_day = day;
	}
	void Display()
	{
		cout << _year << "-" << _month << "-" << _day << endl;
	}


	//++ÖØÔØ
	//1.Ç°ÖÃ++
	Date& operator++()
	{
		_day += 1;
		return(*this);
	}



	//2.ºóÖÃ++
	Date operator++(int)
	{
		Date temp(*this);
		_day += 1;
		return temp;
	}




private:
	int _year;
	int _month;
	int _day;


};
int main()
{
	Date d1,d2;
	d1.SetDate(2020, 9, 9);
	d1.Display();

	d2 = d1++;
	d2 = ++d1;
	//d2 = d1.operator++();




	return 0;
}