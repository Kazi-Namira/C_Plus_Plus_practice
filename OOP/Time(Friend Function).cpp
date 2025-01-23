#include <iostream>
using namespace std;
class Time
{
private:
    int hours;
    int minutes;

public:
    Time(int h, int m) : hours(h), minutes(m) {}

    friend Time sumTimes(const Time& t1, const Time& t2);

    void displayTime()
    {
        cout << hours << " hours and " << minutes << " minutes." << std::endl;
    }
};

Time sumTimes(const Time& t1, const Time& t2)
{
    int totalMinutes = t1.hours * 60 + t1.minutes + t2.hours * 60 + t2.minutes;
    int hours = totalMinutes / 60;
    int minutes = totalMinutes % 60;
    return Time(hours, minutes);

}

int main()
{
    Time time1(2, 45);
    Time time2(1, 30);
    Time sum = sumTimes(time1, time2);
    cout << "Time 1: ";
    time1.displayTime();
    cout << "Time 2: ";
    time2.displayTime();
    cout << "Sum of Times: ";
    sum.displayTime();
    return 0;
}
