#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    double itemCost;
    int numberOfYears;
    double inflationRate;

    cout << "What is the cost of the item? " << endl;
    cin >> itemCost;

    cout << "How many years from now do you wish to calculate for?" << endl;
    cin >> numberOfYears;

    cout << "What is the inflation rate (enter as percentage)?" << endl;
    cin >> inflationRate;

    inflationRate = inflationRate / 100.0;

    for (int i = 0; i < numberOfYears; ++i) {
        itemCost = itemCost + (itemCost * inflationRate);
    }

    cout << "After " << numberOfYears << " years " << endl;
    cout << "Your item will cost $" << itemCost << endl;

    return 0;
}
