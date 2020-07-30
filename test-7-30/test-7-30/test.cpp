#define _CRT_SECURE_NO_WARNINGS 1

//#include "struct.h"
//#include <iostream>
//using namespace std;
//
//
//struct Student
//{
//	char _name[20];
//	char _gender[5];
//	int _age;
//	char _school[20];
//
//
//	void SetStudentInfo(char* _name, char* _gender, int age, char* _school)
//	{
//		strcpy(_name, name);
//		strcpy(_gender, gender);
//		_age = age;
//		strcpy(_school, school);
//	}
//
//	void PrintStudentInfo()
//	{
//		cout << _name << "" << _gender << "" << _age << "" << _school << endl;
//	}
//
//};
//
//int main()
//{
//	Student s;
//	s.SetStudentInfo("Sean", "男"，20,"河州大学");
//	s.PrintStudentInfo();
//	return 0;
//}


#include <iostream>
using namespace std;

class person
{
	//public:
	void PrintpersonInfo();
    //private:
	char_name[20];
	char_gender[3];
	int _age;
};

//这里需指定PrintpersonInfo是属于person这个类域
void person::PrintpersonInfo()
{
	cout << _name << "" << _gender << "" << _age << endl;
}
