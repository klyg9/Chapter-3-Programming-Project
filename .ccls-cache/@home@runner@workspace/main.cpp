#include <iostream>
#include <cmath>   
#include <iomanip> 

using namespace std;

int main() {
    double principal, rate;
    int timesCompounded, years;

     // Get user input
    cout << "Enter the principal amount ($): ";
    cin >> principal;

    cout << "Enter the interest rate (%): ";
    cin >> rate;

    cout << "Enter the number of times interest is compounded per year: ";
    cin >> timesCompounded;

    cout << "Enter the number of years: ";
    cin >> years;

    // Calculate the amount using the compound interest formula
    double amount = principal * pow(1 + rate / (100 * timesCompounded), timesCompounded * years);

    // Display the results
    cout << fixed << setprecision(2); // Set precision for output
    cout << "\nPrincipal: $" << principal << endl;
    cout << "Interest: $" << amount - principal << endl;
    cout << "Amount in Savings: $" << amount << endl;

    return 0;
}