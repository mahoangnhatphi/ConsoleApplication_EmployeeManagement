#ifndef DATE_H
#define DATE_H
#include <iostream>
#include <string>

using namespace std;
class Date
{
	private:
		int day, month, year;
	public:
		Date();
		~Date();
		int getDay();
		int getMonth();
		int getYear();
		void setDay(int day);
		void setMonth(int month);
		void setYear(int year);
		friend ostream& operator<<(ostream& os, Date date);
		friend istream& operator>>(istream& is, Date& date);
	protected:
};

#endif
