#include <iostream>
#include "clsString.h"
#include <iomanip>
using namespace std;

bool IsLeapYear(const short Year) {
    return ((Year % 400 == 0) || (Year % 4 == 0 && Year % 100 != 0));
}

short ReadYear() {
    short Year;
    cout << "\nPlease enter a year to check? ";
    cin >> Year;
    cout << "\n";
    return Year;
}

short ReadMonth() {
    short Month;
    cout << "\nPlease enter a Month to check? ";
    cin >> Month;
    cout << "\n";
    return Month;
}

short DayOrder(short Year, short Month, short Day) {
    int a = (14 - Month) / 12;
    int y = Year - a;
    int m = Month + (12 * a) - 2;
    return (Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
}

string MonthShortName(short Month) {
    string arrMonthsName[12] = { "Jan", "Feb", "Mar", "Apr", "May", "Jun",
                                 "Jul", "Aug", "Sep", "Oct", "Nov", "Dec" };
    return arrMonthsName[Month - 1];
}

short NumOfDaysInMonth(short Year, short Month) {
    if (Month < 1 || Month > 12)
        return 0;

    short daysInMonth[] = { 31, (IsLeapYear(Year) ? 29 : 28), 31, 30, 31, 30,
                            31, 31, 30, 31, 30, 31 };
    return daysInMonth[Month - 1];
}

void PrintMonthCalender(short Year, short Month) {

    cout << "_________________" << MonthShortName(Month) << "_____________________\n";
    cout << "\nSun  Mon  Tue  Wed  Thu  Fri  Sat\n";
    short j;
    for (j = 0; j < DayOrder(Year, Month, 1); j++) 
        cout << left << setw(5) << "";
    
        
    for (short i = 1; i <= NumOfDaysInMonth(Year, Month); i++)
    {
        cout << left << setw(5) << i ;
       
        if (++j % 7 == 0)
        {
            cout << "\n";
        }
    }
    cout << "\n_________________________________________\n";
}
void PrintYearCalender(short Year) {
    cout << "_________________________________________\n\n";
    cout << "\tCalendar : " << Year;
    cout << "\n_________________________________________\n\n";
    for (short i = 1; i <= 12; i++)
    {
        PrintMonthCalender(Year, i);
        cout << "\n";
    }

} 

int main() {
    short Year = ReadYear();
    PrintYearCalender(Year); 
}
