//
// Created by levef on 06.04.2023.
//

#include "Date.h"
#include "iostream"
#include "string"
using namespace std;

// инициализировать статический элемент в области действия файла
const int Date::days[] =
        {0, 31, 28,31,30,31,30,31,31,30,31,30,31};

// конструктор Date
Date::Date(int m, int d, int y) {
    setDate(m,d,y);
}

void Date::setDate(int m, int d, int y) {
    if (m>= 1 && m <= 12)
        month = m;
    else
        throw invalid_argument("Month must be 1-12");

    if (y>=1900 && y <=2100)
        year = y;
    else
        throw invalid_argument("Year must be >=1900 and <= 2100");

    // проверка на високосный год
    if ((month == 2 && leapYear(year) && d >= 1 && d <= 29) ||
            (d >= 1 && d <= days[month]))
        day = d;
    else
        throw invalid_argument("Day is out of range for current month and year");
}

// перегрузка операции префиксного инкремента
Date &Date::operator++() {
    helpIncrement(); // инкрементировать дату
    return  *this;
}

// перегруженная операция постфиксного инкремента
Date Date::operator++(int) {
    Date temp = *this;
    helpIncrement();

    // вернуть неинкрементированный сохраненный объект
    return temp;
}

// прибавить к дате указанное число дней
const Date Date::operator+=(int additionalDays) {
    for (int i = 0; i < additionalDays; ++i) {
        helpIncrement();
    }
    return *this; // разрешает каскадирование
}

// если год високосный возвратить true; иначе false
bool Date::leapYear(int testYear) {
    if (testYear % 400 == 0 ||
            (testYear % 100 != 0 && testYear % 4 == 0))
        return true;
    else
        return false;
}

// определить является ил день последним днем месяца
bool Date::endOfMonth(int testDay) const {
    if (month == 2 && leapYear(year))
        return testDay == 29;
    else
        return testDay == days[month];
}

// вспомогательная функция для инкремента даты
void Date::helpIncrement() {
    if(!endOfMonth(day))
        day++;
    else
        if(month < 12)
        {
            month++;
            day = 1;
        }
        else
        {
            year++;
            month = 1;
            day = 1;
        }
}

ostream& operator<<(ostream &output, const Date &date) {
    static const char *monthName[13] = {"", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    output << monthName[date.month] << ' ' << date.day << "," << date.year;
    return output;
}

int Date::getMonth() const {
    return this->month;
}

int Date::getDay() const {
    return this->day;
}

int Date::getYear() const {
    return this->year;
}