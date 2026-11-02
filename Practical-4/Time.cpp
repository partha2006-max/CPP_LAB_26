#include <iostream>
using namespace std;
class Time {
private:
    int hours, minutes;
public:
    void input(){
        cout << "Enter hours, minutes: ";
        cin >> hours >> minutes;
    }
    void add(Time t1,Time t2){
        minutes = t1.minutes + t2.minutes;
        hours = t1.hours + t2.hours;
        if (minutes >= 60) {
            hours += minutes / 60;
            minutes = minutes % 60;
        }
    }
    void subtract(Time t1,Time t2){
        hours = t1.hours - t2.hours;
        minutes = t1.minutes - t2.minutes;
        if (minutes < 0){
            hours--;
            minutes += 60;
        }
    }
    void display(){
        cout << hours << " hours " << minutes << " minutes\n";
    }
};
int main(){
    Time t1, t2, t3;
    cout << "Enter first time:\n";
    t1.input();
    cout << "Enter second time:\n";
    t2.input();
    cout << "\nAddition:\n";
    t3.add(t1, t2);
    t3.display();
    cout << "\nSubtraction (First - Second):\n";
    t3.subtract(t1, t2);
    t3.display();
    return 0;
}