#pragma once
#include<iostream>
#include<assert.h>
using namespace std;

class Date
{
	// 友元函数声明
	friend ostream& operator<<(ostream& out, const Date& d);
	friend istream& operator>>(istream& in, Date& d);
public:

	//全缺省参数在只函数声明或者函数定义
	Date(int year = 2000, int month = 1, int day = 1);
	void Print() const;

	int GetMonthDay(int year, int month) const
	{
		assert(month > 0 && month < 13);
		
		int MonthDayArray[13] = { -1, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
		
		if (month == 2 && (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		{
			return 29;
		}
		else
		{
			return MonthDayArray[month];
		}
	}

	bool CheckDate() const
	{
		if (_month < 1 || _month > 13)
			return false;
		
		if (_day < 1 || _day > GetMonthDay(_year, _month))
		{
			return false;
		}
		
		return true;
	}

	bool operator<(const Date& d) const;
	bool operator<=(const Date& d) const;
	bool operator>(const Date& d) const;
	bool operator>=(const Date& d) const;
	bool operator==(const Date& d) const;
	bool operator!=(const Date& d) const;

	// d1 += 天数
	Date& operator+=(int day);
	Date operator+(int day) const;

	// d1 -= 天数
	Date& operator-=(int day);
	Date operator-(int day);

	// d1 - d2
	int operator-(const Date& d) const;

	// ++d1 -> d1.operator++()
	Date& operator++();

	// d1++ -> d1.operator++(0)
	// 为了区分，构成重载，给后置++，强行增加了一个int形参
	// 这里不需要写形参名，因为接收值是多少不重要，也不需要用
	// 这个参数仅仅是为了跟前置++构成重载区分
	Date operator++(int);

	//前置--
	Date& operator--();
	//后置--
	Date operator--(int);

	// 流插入
	// 不建议，因为Date* this占据了一个参数位置，使用d<<cout不符合习惯
	//void operator<<(ostream& out);

	Date* operator&() 
	{
		return this;
		//return (Date*)0x00ff1204;
	}

	const Date* operator&() const
	{
		return this;
		//return nullptr;
	}

private:
	int _year;
	int _month;
	int _day;
};


ostream& operator<<(ostream& out, const Date& d);
istream& operator>>(istream& in, Date& d);

