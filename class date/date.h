#pragma once
#include <iostream>

class Date
{
public:
	Date();
	Date(unsigned short int day, unsigned short int month, unsigned short int year);
	Date(const Date& d);
	~Date();

private:
	unsigned short int day = 0;
	unsigned short int month = 0;
	unsigned short int year = 0;

public:
	// ++, -- , != , == , > , <, >> , << , =, +=, -=, ()
	Date& operator++();
	Date& operator--();
	Date operator++(int);
	Date operator--(int);

	bool operator!=(const Date& d) const;
	bool operator==(const Date& d) const;

	bool operator>(const Date& d) const;
	bool operator<(const Date& d) const;

	Date& operator=(const Date& d);
	Date& operator+=(const Date& d);
	Date& operator-=(const Date& d);

	friend std::ostream& operator<<(std::ostream& output, const Date&d);
};

