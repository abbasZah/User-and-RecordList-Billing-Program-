#ifndef DATE_H
#define DATE_H

#include<string>
using namespace std;

class Date
{
private:
			int day;
			int month;
			int year;

public:
	//CONSTRUCTORS
			Date()
			{
				day = 0;
				month = 0;
				year = 0;
			}
			Date(int day, int month, int year)
			{
				this->day = day;
				this->month = month;
				this->year = year;
			}
	//SETTERS
			void setDate(int day, int month, int year)
			{
				this->day = day;
				this->month = month;
				this->year = year;
			}
			void setDate(Date obj)
			{
				this->day = obj.day;
				this->month = obj.month;
				this->year = obj.year;
			}

			void setDay(int day)
			{
				this->day = day;
			}
			void setMonth(int month)
			{
				this->month = month;
			}
			void setYear(int year)
			{
				this->year = year;
			}
	//GETTERS
			int getDay()
			{
				return day;
			}
			int getMonth()
			{
				return month;
			}
			int getYear()
			{
				return year;
			}
			Date getDate()
			{
				Date tempDate(0, 0, 0);

				tempDate.setDate(day, month, year);
				return tempDate;
			}
};

#endif