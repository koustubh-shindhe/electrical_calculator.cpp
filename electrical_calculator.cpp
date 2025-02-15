#include <iostream>
using namespace std;

void findVoltage() {
    double current, resistance;
    cout << "Enter Current (in Amps): ";
    cin >> current;
    cout << "Enter Resistance (in Ohms): ";
    cin >> resistance;

    if (current <= 0 || resistance <= 0) {
        cout << "Error: Both current and resistance must be positive values.\n";
        return;
    }

    double voltage = current * resistance;
    cout << "Calculated Voltage = " << voltage << " V\n";
}

void findCurrent() {
    double voltage, resistance;
    cout << "Enter Voltage (in Volts): ";
    cin >> voltage;
    cout << "Enter Resistance (in Ohms): ";
    cin >> resistance;

    if (resistance <= 0) {
        cout << "Error: Resistance must be greater than zero.\n";
        return;
    }

    double current = voltage / resistance;
    cout << "Calculated Current = " << current << " A\n";
}

void findResistance() {
    double voltage, current;
    cout << "Enter Voltage (in Volts): ";
    cin >> voltage;
    cout << "Enter Current (in Amps): ";
    cin >> current;

    if (current <= 0) {
        cout << "Error: Current must be greater than zero.\n";
        return;
    }

    double resistance = voltage / current;
    cout << "Calculated Resistance = " << resistance << " Ω\n";
}

int main() {
    int option;

    while (true) {
        cout << "\n========= Ohm's Law Calculator =========\n";
        cout << "1. Compute Voltage\n";
        cout << "2. Compute Current\n";
        cout << "3. Compute Resistance\n";
        cout << "4. Exit\n";
        cout << "Select an option (1-4): ";
        cin >> option;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Invalid input! Please enter a number between 1 and 4.\n";
            continue;
        }

        switch (option) {
            case 1: findVoltage(); break;
            case 2: findCurrent(); break;
            case 3: findResistance(); break;
            case 4: cout << "Exiting the program...\n"; return 0;
            default: cout << "Invalid choice! Please select a valid option.\n";
        }
    }

    return 0;
}
