#include <iostream>
using namespace std;

int main() {
    int energyConsumed;

    cout << "Energy consumed in this month: ";
    cin >> energyConsumed;

    if (energyConsumed <= 300) {
        cout << "The amount of energy in the month: ." << endl;
    } else if (energyConsumed > 300 && energyConsumed <= 600) {
        cout << "Warning: You are exceeding the limit." << endl;
    } else {
        int excessUnits = energyConsumed - 600;
        int fine = excessUnits * 10;
        cout << "You have exceeded 600 units. Fine imposed: Rs. 10 per units " << fine << endl;
    }

    return 0;
}




