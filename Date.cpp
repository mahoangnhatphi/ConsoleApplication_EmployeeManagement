#include "Date.h"

Date::Date()
{
}

Date::~Date()
{
}

int Date::getDay() {
	return this->day;
}
int Date::getMonth() {
	return month;
}
int Date::getYear() {
	return this->year;
}
void Date::setDay(int day) {
	this->day = day;
}
void Date::setMonth(int month) {
	this->month = month;
}
void Date::setYear(int year){ 
	this->year = year;
}

istream& operator>>(istream& is, Date& date) {
	int day, month, year;
	cout<<"Input day: ";
	is>>day;
	cout<<"Input month: ";
	is>>month;
	cout<<"Input year: ";
	is>>year;
	date.setDay(day);
	date.setMonth(month);
	date.setYear(year);
	return is;
}

ostream& operator<<(ostream& os, Date date) {
	os<<date.getDay()<<"/"<<date.getMonth()<<"/"<<date.getYear();
	return os;
}
