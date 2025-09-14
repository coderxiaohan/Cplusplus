#define _CRT_SECURE_NO_WARNINGS 1
#include"Date.h"

Date::Date(int year, int month, int day)
{
	_year = year;
	_month = month;
	_day = day;
};

void Date::Print()
{
	cout << _year << "-" << _month << "-" << _day << endl;
}

//原始写法，完整的
// d1 += 100
//Date& Date::operator+=(int day)
//{
//	_day += day;
//	while (_day > GetMonthDay(_year, _month))
//	{
//		_day -= GetMonthDay(_year, _month);
//		++_month;
//		if (_month == 13) {
//			++_year;
//			_month = 1;
//		}
//	}
//	return *this;
//}
//
//// d1+100
//Date& Date::operator+(int day) 
//{
//	Date& tmp(*this);
//
//	tmp._day += day;
//
//	while (tmp._day > GetMonthDay(tmp._year, tmp._month))
//	{
//		tmp._day -= GetMonthDay(tmp._year, tmp._month);
//		++tmp._month;
//		if (tmp._month == 13) {
//			++tmp._year;
//			tmp._month = 1;
//		}
//	}
//	return tmp;
//
//}


//另外一种写法一
Date& Date::operator+=(int day)
{
	_day += day;
	while (_day > GetMonthDay(_year, _month))
	{
		_day -= GetMonthDay(_year, _month);
		++_month;
		if (_month == 13)
		{
			++_year;
			_month = 1;
		}
	}

	return *this;
}

// d1 + 100
Date Date::operator+(int day)
{
	Date tmp(*this);
	tmp += day;
	return tmp;
}


//// 另一种写法二
//// d1 += 100
//Date& Date::operator+=(int day)
//{
//	*this = *this + day;
//	return *this;
//}
//
//Date& Date::operator+(int day)
//{
//	Date& tmp(*this);
//	tmp._day += day;
//	while (tmp._day > GetMonthDay(tmp._year, tmp._month))
//	{
//		tmp._day -= GetMonthDay(tmp._year, tmp._month);
//		++tmp._month;
//		if (tmp._month == 13) {
//			++tmp._year;
//			tmp._month = 1;
//		}
//	}
//	return tmp;
//}

// 前置++ 和后置++
// 前置++ 
Date& Date::operator++()
{
	*this += 1;
	return *this;
}
// 后置++, 为了和前置++进行区分达到重载，形参中添加int, 但这个int不起作用
Date Date::operator++(int)
{
	Date tmp(*this);
	*this += 1;
	return tmp;
}

// 日期类的减法
Date& Date::operator-=(int day)
{
	//if (day < 0)  //减法变加法
	//{
	//	return *this += _day;
	//}
	_day -= day;
	while (_day <= 0)
	{
		--_month;
		_day += GetMonthDay(_year, _month); //借上个月的天数
		if (_month == 0) {
			--_year;
			_month = 12;
		}
	}
	return *this;
}

Date Date::operator-(int day)
{
	Date tmp(*this);
	tmp -= day;
	return tmp;
}

