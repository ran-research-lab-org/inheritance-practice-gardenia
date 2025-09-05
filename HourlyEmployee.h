#ifndef HOURLYEMPLOYEE_H
#define HOURLYEMPLOYEE_H

#include "Employee.h"
#include <string>

using namespace std;

class HourlyEmployee : public Employee
{
public:
    double payPerHour;
    double workedHours;

    HourlyEmployee(const string &name, int id, double payPerHour, double workedHours);

    double getPayPerHour() const;
    double getWorkedHours() const;
    double calculatePay() const;
};

#endif
