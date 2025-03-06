#include <iostream>
#include <iomanip>

using namespace std;

void calculateIngredients(int numCookies) {
    // Given recipe for 48 cookies
    double sugarPerCookie = 1.5 / 48;
    double butterPerCookie = 1.0 / 48;
    double flourPerCookie = 2.75 / 48;

    // Calculate required ingredients
    double sugarNeeded = sugarPerCookie * numCookies;
    double butterNeeded = butterPerCookie * numCookies;
    double flourNeeded = flourPerCookie * numCookies;

    // Display results
    cout << "To make " << numCookies << " cookies, you will need:" << endl;
    cout << fixed << setprecision(2);
    cout << sugarNeeded << " cups of sugar" << endl;
    cout << butterNeeded << " cups of butter" << endl;
    cout << flourNeeded << " cups of flour" << endl;
}

int main() {
    int numCookies;
    cout << "Enter the number of cookies you want to make: ";
    cin >> numCookies;

    calculateIngredients(numCookies);

    return 0;
}