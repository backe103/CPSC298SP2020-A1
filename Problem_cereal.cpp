/*
* Assignment 1, problem 1.
* Interterm 2020, CPSC 298-2
* Preston Backes
*
* Note:
* The assignment was vague as to whether we needed to base the box weight on
* the user's input of package weight, or if we needed to use an actual box of
* cereal as a basis, as such I have used both definitions.
*/
#include <iostream>
using namespace std;

int main(int argh, char**argv) {
    const double TON = 35273.92;  // Metric ton in ounces
    const double BOX = 17.0; // Weight of frosted flakes on Amazon

    double packageWeight; // User input in ounces for box of cereal.
    double weightInTons; // How much packageWeight is in tons.
    int tonOfCereal1; // Number of boxes based on constant in 1 ton.
    int tonOfCereal2; // Number of boxes based on packageWeight in 1 ton.


    cout << "How much does your cereal package weigh in ounces? " << endl;
    cin >> packageWeight;

    weightInTons = packageWeight / TON;

    /* A box of cereal, in this case, is considered an indivisible unit
        hence, the conversion to integers */
    tonOfCereal1 = (int) TON / (int) BOX;
    tonOfCereal2 = (int) TON / (int) packageWeight;

    cout << "Your package weighs " << weightInTons << " tons." << endl;
    cout << "A ton is " << tonOfCereal1 << " boxes of frosted flakes." << endl;
    cout << "or " << tonOfCereal2 << " of your packages." << endl;


    return 0;
}
