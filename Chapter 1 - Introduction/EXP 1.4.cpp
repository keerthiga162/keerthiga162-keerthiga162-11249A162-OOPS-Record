#include <iostream>
#include <string>
using namespace std;

class EB {
private:
    string CN;        // Customer Name
    int CID;          // Customer ID
    int units;        // Units consumed
    float bill_amount; // Total bill amount

public:
    // Function to set customer details
    void setDetails(string name, int id, int u) {
        CN = name;
        CID = id;
        units = u;
        bill_amount = 0;
    }

    // Function to calculate electricity bill
    void calculateBill() {
        if (units <= 100) {
            bill_amount = units * 1.50;
        }
        else if (units <= 200) {
            bill_amount = (100 * 1.50) + (units - 100) * 2.00;
        }
        else if (units <= 300) {
            bill_amount = (100 * 1.50) + (100 * 2.00) + (units - 200) * 3.00;
        }
        else {
            bill_amount = (100 * 1.50) + (100 * 2.00) + (100 * 3.00) + (units - 300) * 5.00;
        }
    }

    // Function to display bill details
    void display() {
        cout << "\n--- Electricity Bill ---" << endl;
        cout << "Customer Name      : " << CN << endl;
        cout << "Customer ID        : " << CID << endl;
        cout << "Units Consumed     : " << units << endl;
        cout << "Total Bill Amount  : Rs. " << bill_amount << endl;
    }
};

// Main function
int main() {
    EB eb;
    string name;
    int id, units;

    cout << "Enter Customer Name: ";
    getline(cin, name);

    cout << "Enter Customer ID: ";
    cin >> id;

    cout << "Enter Units Consumed: ";
    cin >> units;

    eb.setDetails(name, id, units);
    eb.calculateBill();
    eb.display();

    return 0;
}
