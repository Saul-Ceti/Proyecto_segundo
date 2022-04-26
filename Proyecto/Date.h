#pragma once
#include <string>
#include <sstream>
#include <iostream>

class Date {
private:
	int day, months, year;
	std::string dateInString;
public:
	Date(int inMonth, int inDay, int inYear) : months(inMonth), day(inDay), year(inYear) {};
	void formatDate() {
		std::cout << months << "/" << day << "/" << year;
	}

	void incrementDay() {
		if (day == 31 && months == 12) {
			day = 1;
			months = 1;
			year++;
		}
		else {
			if (year % 4 == 0) {
				//Biciesto
				if (months == 1 || months == 3 || months == 5 || months == 7 || months == 8 || months == 10 || months == 12) {
					//31 dias
					if (day == 31) {
						AumMes();
					}
					else {
						SumDay();
					}
				}
				else if (months == 4 || months == 6 || months == 9 || months == 11) {
					//30 dias
					if (day == 30) {
						AumMes();
					}
					else {
						SumDay();
					}
				}
				else {
					//Febrero
					if (months == 2 && day == 29) {
						AumMes();
					}
					else {
						SumDay();
					}
				}
			}
			else {
				if (months == 1 || months == 3 || months == 5 || months == 7 || months == 8 || months == 10 || months == 12) {
					//31 dias
					if (day == 31) {
						AumMes();
					}
					else {
						SumDay();
					}
				}
				else if (months == 4 || months == 6 || months == 9 || months == 11) {
					//30 dias
					if (day == 30) {
						AumMes();
					}
					else {
						SumDay();
					}
				}
				else {
					//Febrero
					if (months == 2 && day == 28) {
						AumMes();
					}
					else {
						SumDay();
					}
				}
			}
		}
	}
	void incrementMes() {
		if (months == 12) {
			months = 1;
			year++;
		}
		else if (months == 1 || months == 3 || months == 5 || months == 8 || months == 10) {

			if (months == 1)
			{
				if (year % 4 == 0)
				{
					if (day > 29)
					{
						months++;
						day = 29;
					}
					else
					{
						months++;
					}
				}
				else
				{
					if (day > 28)
					{
						months++;
						day = 28;
					}
					else
					{
						months++;
					}
				}
			}
			else if (day == 31)
			{
				months++;
				day = 30;
			}
			else
			{
				months++;
			}

		}
		else
		{
			months++;
		}

	}

	void incrementYear() {
		year++;
	}

	void DecrementDay() {
		if (day == 1 && months == 1) {
			year--;
			months = 12;
			day = 31;
		}
		else {
			if (day == 1) {
				switch (months) {
				case 1:
					months = 12;
					day = 31;
					break;
				case 2:
					months--;
					day = 31;
					break;
				case 3:
					months--;
					if (year % 4 == 0) {
						day = 29;
					}
					else {
						day = 28;
					}
					break;
				case 4:
					months--;
					day = 31;
					break;
				case 5:
					months--;
					day = 30;
					break;
				case 6:
					months--;
					day = 31;
					break;
				case 7:
					months--;
					day = 30;
					break;
				case 8:
					months--;
					day = 31;
					break;
				case 9:
					months--;
					day = 31;
					break;
				case 10:
					months--;
					day = 30;
					break;
				case 11:
					months--;
					day = 31;
					break;
				case 12:
					months--;
					day = 30;
					break;
				}
			}
			else {
				day--;
			}
		}

	}
	void DecrementMes() {
		if (months == 1) {
			months = 12;
			year--;
		}
		else if (months == 1 || months == 3 || months == 5 || months == 8 || months == 10) {

			if (months == 3)
			{
				if (year % 4 == 0)
				{
					if (day > 29)
					{
						months--;
						day = 29;
					}
					else
					{
						months--;
					}
				}
				else
				{
					if (day > 28)
					{
						months--;
						day = 28;
					}
					else
					{
						months--;
					}
				}
			}
			else if (day == 31)
			{
				months--;
				day = 30;
			}
			else
			{
				months--;
			}

		}
		else
		{
			months--;
		}
	}
	void DecrementYear() {
		year--;
	}
	void SumDay() {
		day++;
	}
	void AumMes() {
		months++;
		day = 1;
	}

	Date operator +(int daysInAdd) {
		Date newDate(months, day, year);
		return newDate;
	}

	//Esto es para prefix
	//Prefix: Poner el operador antes de la variable
	Date& operator ++() {
		++day;
		return *this;
	}
	Date& operator --() {
		--day;
		return *this;
	}
	//Esto es para profix

	Date operator ++(int) {
		Date copy(months, day, year);
		++day;
		return *this;
	}

	Date operator --(int) {
		Date copy(months, day, year);
		--day;
		return *this;
	}

	operator const char* () {
		std::ostringstream formatDate;
		formatDate << months << "/" << day << "/" << year;
		dateInString = formatDate.str();
		return dateInString.c_str();
	}
};