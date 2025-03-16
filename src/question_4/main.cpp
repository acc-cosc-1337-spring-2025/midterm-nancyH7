#include <iostream>
#include <iomanip> 
using namespace std;

double get_sales_commission(double sales) {
    
    if (sales < 0) {
        return 0.0;
    }

    if (sales <= 499) {
        return sales * 0.05; 
    } else if (sales <= 999) {
        return sales * 0.06; 
    } else if (sales <= 1499) {
        return sales * 0.07; 
    } else {
        return sales * 0.08; 
    }
}

int main() {
    double sales;
    char choice;
    do {
        cout << "Enter the sales amount: $";
        cin >> sales;

        while (cin.fail() || sales < 0) {
            cin.clear(); 
            cin.ignore(1000, '\n'); 
            cout << "Invalid input. Please enter a non-negative number: $";
            cin >> sales;
        }
        double commission = get_sales_commission(sales);

        cout << "Sales of $" << fixed << setprecision(2) << sales 
             << " yields a commission of $" << fixed << setprecision(2) << commission << endl;

        cout << "Do you want to calculate another commission? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "Goodbye!" << endl;
    return 0;
}
