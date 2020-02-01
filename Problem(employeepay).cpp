#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    const double HEALTH_WITHOLDING = 10.00; // Health insurance witholding.
    const double PAY_PER_HOUR = 16.00;

    double regularPay;
    double ssw;  // Social Security witholding amount.
    double ftaxwithold; // Federal tax witholding amount.
    double staxwithold; // State tax witholding amount.
    double takeHomePay;

    /* stores total witheld to make caculation of take home more straitforward*/
    double totalWitheld = 0.0;

    unsigned int hoursWorked;
    unsigned int overtime;

    double overtimePay;
    double grossPay;

    cout << "Enter number of hours worked this week: " << endl;
    cin >> hoursWorked;
    cout << "Enter number of those hours which were overtime: " << endl;
    cin >> overtime;

    if (hoursWorked > overtime) {

        cout << "You worked for " << hoursWorked << " hours" << endl;
        cout << "of which " << overtime << " hours were overtime.";

        overtimePay = overtime * (PAY_PER_HOUR * 1.5);
        hoursWorked = hoursWorked - overtime;
        regularPay = hoursWorked * PAY_PER_HOUR;

        cout << "Your regular pay was " << regularPay << endl;
        cout << "Your overtime pay was " << overtimePay << endl;

        grossPay = regularPay + overtimePay;
        cout << "Your total pay before witholdings is " << grossPay << endl;

        ssw = grossPay * 0.06;
        totalWitheld += ssw;

        cout << '$' << ssw << " will be witheld for Social Security." << endl;

        ftaxwithold = grossPay * 0.14;
        totalWitheld += ftaxwithold;

        cout << '$' << ftaxwithold << " will be witheld for Federal taxes"
             << endl;

        staxwithold = grossPay * 0.05;
        totalWitheld += staxwithold;

        cout << '$' << staxwithold << " will be witheld for state taxes"
             << endl;

        totalWitheld += HEALTH_WITHOLDING;

        cout << '$' << HEALTH_WITHOLDING
             << " will be witheld for Health insurance" << endl;

        takeHomePay = grossPay - totalWitheld;

        cout << "Total witholdings amount to $" << totalWitheld << endl;
        cout << "Total take home pay is $" << takeHomePay << endl;


    } else {
        cout << "invalid input" << endl;
    }



    return 0;
}
