#include<iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {}

    // Member function to add time
    void addTime(const Time& t) {
        seconds += t.seconds;
        minutes += t.minutes;
        hours += t.hours;

        // Adjusting overflow
        if (seconds >= 60) {
            seconds -= 60;
            minutes++;
        }
        if (minutes >= 60) {
            minutes -= 60;
            hours++;
        }
    }

    // Function to display the time
    void display() const {
        cout << "Time: " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds" << endl;
    }
};

int main() {
    Time time1(3, 45, 20); // Creating a time object with 3 hours, 45 minutes, and 20 seconds
    Time time2(1, 15, 40); // Creating another time object with 1 hour, 15 minutes, and 40 seconds

    time1.addTime(time2); // Adding time2 to time1
    time1.display(); // Displaying the updated time1

    return 0;
}
