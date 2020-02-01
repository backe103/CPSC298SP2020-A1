#include <iostream>
using namespace std;

int main(int argc, char**argv) {
    unsigned int roomCapacity;
    unsigned int attendence;
    unsigned int attendeesToExclude;
    int temp;
    int x;

    // This loop takes input while ensuring no negative numbers are used.
    while (x < 2) {
        x = 0;
        temp = 0;

        cout << "Enter your location's posted room capacity: ";
        cin >> temp;
        cout << endl;

        if (temp > 0) {
            roomCapacity = temp;
            ++x;
        } else {
            cout << "Invalid input";
            continue;
        }

        cout << "Enter number of people attending your meeting: ";
        cin >> temp;
        cout << endl;

        if (temp > 0) {
            attendence = temp;
            ++x;
        } else {
            cout << "Invalid input";
            continue;
        }
    }

    if (attendence <= roomCapacity) {
        cout << "Your meeting will be legal";
    } else if (attendence > roomCapacity) {
        attendeesToExclude = attendence - roomCapacity;
        cout << "You will be over capacity." << endl;
        cout << "Exclude " << attendeesToExclude << " people to comply with code"
            << endl;
    } else {
        cout << "Invalid input!" << endl;
    }

    return 0;
}
