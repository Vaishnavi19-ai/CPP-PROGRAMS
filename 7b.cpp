#include <iostream>
#include<conio.h>
class Clock {
private:
    int hours, minutes;
public:
    // Constructor with default values
    Clock(int h = 0, int m = 0) {
        hours = h;
        minutes = m;
    }

    // Overloading + operator to add two Clock objects
    Clock operator+(const Clock& obj) {
        int totalMinutes = (hours + obj.hours) * 60 + (minutes + obj.minutes);
        return Clock(totalMinutes / 60, totalMinutes % 60);
    }

    // Function to display time
    void display() const {
        std::cout << hours << " hr " << minutes << " min" << std::endl;
    }
};

int main() {
    Clock t1(2, 50);
    Clock t2(1, 30);
    Clock result = t1 + t2;

    std::cout << "Total Time: ";
    result.display();
    getch();
    system("pause");
    return 0;
}
