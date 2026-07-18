class Solution {
public:
    bool leap(int year) {
        if (year % 400 == 0) return true;
        if (year % 100 == 0) return false;
        if (year % 4 == 0) return true;
        return false;
    }
    string dayOfTheWeek(int day, int month, int year) {
        vector<string> week = {
            "Friday", "Saturday", "Sunday",
            "Monday", "Tuesday", "Wednesday", "Thursday"
        };
        int monthDays[] = {
            31,28,31,30,31,30,
            31,31,30,31,30,31
        };
        int days = 0;
        for (int y = 1971; y < year; y++) {
            if (leap(y))
                days += 366;
            else
                days += 365;
        }
        for (int m = 1; m < month; m++) {
            days += monthDays[m - 1];
            if (m == 2 && leap(year))
                days++;
        }
        days += day - 1;

        return week[days % 7];
    }
};