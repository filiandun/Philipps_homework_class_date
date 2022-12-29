#include "date.h"

Date::Date()
{
}

Date::Date(unsigned short int day, unsigned short int month, unsigned short int year)
{
	this->day = day;
	this->month = month;
	this->year = year;
}

Date::Date(const Date& d)
{
	this->day = d.day;
	this->month = d.month;
	this->year = d.year;
}

Date::~Date() {}



Date& Date::operator++()
{
	++this->day;

	return *this;
}


Date& Date::operator--()
{
	--this->day;

	return *this;
}


Date Date::operator++(int)
{
	Date previous_date = *this;
	++this->day;

	return previous_date;
}


Date Date::operator--(int)
{
	Date previous_date = *this;
	--this->day;

	return previous_date;
}




bool Date::operator!=(const Date& d) const
{
	return (this->year * 365 + this->month * 30 + this->day) != (d.year * 365 + d.month * 30 + d.day);
}


bool Date::operator==(const Date& d) const
{
	return (this->year * 365 + this->month * 30 + this->day) == (d.year * 365 + d.month * 30 + d.day);;
}


bool Date::operator>(const Date& d) const
{
	return (this->year * 365 + this->month * 30 + this->day) > (d.year * 365 + d.month * 30 + d.day);
}


bool Date::operator<(const Date& d) const
{
	return (this->year * 365 + this->month * 30 + this->day) < (d.year * 365 + d.month * 30 + d.day);
}




Date& Date::operator=(const Date& d)
{
	this->day = d.day;
	this->month = d.month;
	this->year = d.year;

	return *this;
}


Date& Date::operator+=(const Date& d)
{
	this->day += d.day;
	this->month += d.month;
	this->year += d.year;

	return *this;
}


Date& Date::operator-=(const Date& d)
{
	this->day -= d.day;
	this->month -= d.month;
	this->year -= d.year;

	return *this;
}




std::ostream& operator<<(std::ostream& output, const Date& d)
{
	output << d.day << "." << d.month << "." << d.year << std::endl;

	return output;
}
