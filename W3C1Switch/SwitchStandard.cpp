#include <iostream>
#include <vector>
#include <string>
#include <limits>

using namespace std;

enum class Season {
    Winter = 1,
    Summer = 2,
    Unknown = 99
};

void displayProducts(Season season) {
    vector<string> products;
    switch (season) {
        case Season::Winter:
            products = {"Thermal Jacket", "Wool Sweater", "Insulated Boots", "Cashmere Scarf"};
            break;
        case Season::Summer:
            products = {"UV Protection Sunglasses", "Breathable Linen Shirt", "Beach Sandals", "Rehydration Drink"};
            break;
        default:
            cout << "No products available for the selected season.\n";
            return;
    }

    cout << "Recommended products for "
         << (season == Season::Winter ? "Winter" : "Summer") << ":\n";
    for (const auto &product : products) {
        cout << " - " << product << "\n";
    }
}

Season seasonFromChoice(int choice) {
    switch (choice) {
        case 1:
            return Season::Winter;
        case 2:
            return Season::Summer;
        default:
            return Season::Unknown;
    }
}

int main() {
    cout << "Seasonal Product Advisor\n";
    cout << "1) Winter\n2) Summer\n0) Exit\n";

    while (true) {
        cout << "Select season (1-2) or 0 to exit: ";
        int choice;
        if (!(cin >> choice)) {
            cout << "Invalid input. Please enter a number.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        if (choice == 0) {
            cout << "Thank you for using Seasonal Product Advisor.\n";
            break;
        }

        Season season = seasonFromChoice(choice);
        if (season == Season::Unknown) {
            cout << "Invalid selection. Please try again.\n";
            continue;
        }

        displayProducts(season);
        cout << "\n";
    }

    return 0;
}