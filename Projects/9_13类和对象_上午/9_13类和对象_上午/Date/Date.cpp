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
	if (day < 0) 
	{
		return *this -= -day;
	}
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
	if (day < 0)  //减法变加法
	{
		return *this += -day;
	}
	_day -= day;
	while (_day <= 0)
	{
		--_month;
		if (_month == 0) {
			--_year;
			_month = 12;
		}
		_day += GetMonthDay(_year, _month); //借上个月的天数
	}
	return *this;
}

// 返回的是Date，不是引用，因为如果是返回引用，tmp是一个局部对象，会出现野引用的问题，所以使用传值返回，会产生拷贝
Date Date::operator-(int day)
{
	Date tmp(*this);
	tmp -= day;
	return tmp;
}


//前置-- 和后置--
//前置--
Date& Date::operator--()
{
	*this -= 1;
	return *this;
}
//后置--
Date Date::operator--(int)
{
	Date tmp(*this);
	*this -= 1;
	return tmp;
}

bool Date::operator<(const Date& d)
{
	if (_year < d._year)
	{
		return true;
	}
	else if (_year == d._year) {
		if (_month < d._month)
		{
			return true;
		}
		else if (_month == d._month)
		{
			return _day < d._day;
		}
	}
	return false;
}

bool Date::operator<=(const Date& d)
{
	return *this < d || *this == d;
}
bool Date::operator>(const Date& d)
{
	return !(*this <= d);
}
bool Date::operator>=(const Date& d)
{
	return !(*this < d);
}
bool Date::operator==(const Date& d)
{
	return _year == d._year
		&& _month == d._month
		&& _day == d._day;
}

bool Date::operator!=(const Date& d)
{
	return !(*this == d);
}

//日期类的相减
// d1 - d2
int Date::operator-(const Date& d)
{
	Date max = *this;
	Date min = d;
	int flag = 1;  // 前一个数假设都是大的数

	if (*this < d)
	{
		max = d;
		min = *this;
		flag = -1;
	}

	int day = 0;
	while (min != max)
	{
		++day;
		++min;
	}
	return day * flag;
}

// out相当于是cout的形参，cout是ostream类型，该类型不能拷贝，
// 而且除了函数作用域还在，所以返回值用&
ostream& operator<<(ostream& out, const Date& d)
{
	out << d._year << "/" << d._month << "/" << d._day << '\n';
	return out;
}

//输入
istream& operator>>(istream& in, Date& d)
{
	while (1) 
	{
		cout << "请依次输入年月日:" << endl;

		in >> d._year >> d._month >> d._day;

		if (d.CheckDate())
		{
			break;
		}
		else 
		{
			cout << "输入日期非法，请重新输入" << endl;
		}
	}
	return in;
}










