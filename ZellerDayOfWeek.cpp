#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

short ReadYear() {
    short Year;
    cout << "\nPlease enter a Year to check? ";
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

short ReadDay() {
    short Day;
    cout << "\nPlease enter a Day to check? ";
    cin >> Day;
    cout << "\n";
    return Day;
}

string FullDate(short Year, short Month, short Day) {
    return to_string(Day) + "/" + to_string(Month) + "/" + to_string(Year);
}

short DayOrder(short Year, short Month, short Day) {
    int a = (14 - Month) / 12;
    int y = Year - a;
    int m = Month + (12 * a) - 2;
    return (Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
}

string DayShortName(short DayOrder) {
    string arrDayName[7] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };
    return arrDayName[DayOrder];
}

int main() {
    short Year = ReadYear();
    short Month = ReadMonth();
    short Day = ReadDay();

    short DayOrderNum = DayOrder(Year, Month, Day);

    cout << "Date      : " << FullDate(Year, Month, Day) << "\n";
    cout << "Day Order : " << DayOrderNum << "\n";
    cout << "Day Name  : " << DayShortName(DayOrderNum) << "\n";

    return 0;
}
