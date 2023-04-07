//
// Created by levef on 06.04.2023.
//

#ifndef VIRTUAL_DATE_H
#define VIRTUAL_DATE_H
#include "iostream"
using namespace std;

class Date {
    friend ostream& operator << (ostream& output, const Date& date);
public:
    Date(int m = 1, int d = 1, int y = 1900); // конструктор по умолчанию
    void setDate(int, int, int); // установить месяц, день, год
    Date &operator++(); // операция префиксного инкремента
    Date operator++(int); // оператор постфиксного инкремента
    const Date operator+=(int); // прибавить дни к дате
    static bool leapYear(int) ; // високосный год?
    bool endOfMonth(int) const; // последний день месяца?

    int getMonth() const;
    int getDay() const;
    int getYear() const;

private:
    int month;
    int day;
    int year;

    static const int days[]; // массив дней в месяцах
    void helpIncrement(); // сервисная функция для инкремента даты
};


#endif //VIRTUAL_DATE_H
