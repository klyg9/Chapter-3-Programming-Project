#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Seed the random number generator
    srand(time(0));

    // Generate two random numbers between 100 and 999
    int num1 = rand() % 900 + 100;
    int num2 = rand() % 900 + 100;

    // Display the math problem
    cout << "Solve the following problem:" << endl;
    cout << num1 << "/+" << num2 << endl;

    // Prompt student to press Enter to check the answer
    cout << "Press Enter when you are ready to see the answer...";
    cin.get();

    // Display the correct answer
    cout << num1 << "/+" << num2 << "= " << (num1 + num2) << endl;

    return 0;
}