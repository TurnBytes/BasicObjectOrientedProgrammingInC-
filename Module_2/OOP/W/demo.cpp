#include <iostream>
using namespace std;

int main() {
    int numbers[5];
    int sum = 0;

    cout << "Enter 5 integers:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Number " << i + 1 << ": ";
        cin >> numbers[i];
        sum += numbers[i];
    }

    cout << "\nTotal Sum: " << sum << endl;

    for (int i = 0; i < 5; i++) {
        char grade;
        int val = numbers[i];

        if (val > 80) {
            grade = 'A';
        } else if (val > 70) {
            grade = 'B';
        } else if (val > 50) {
            grade = 'C';
        } else {
            grade = 'F';
        }

        cout << "Value: " << val << " | Grade: " << grade << endl;
    }

    return 0;
}