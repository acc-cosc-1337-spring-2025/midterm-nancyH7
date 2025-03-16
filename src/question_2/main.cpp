#include <iostream>
#include <string>
#include <cmath> 
using namespace std;

int binary_to_decimal(string binary){
    if (binary.length() != 8){
        cerr << "Error:  Input string must be 8 characters long!" << endl;
        return -1;
    }
    int decimal = 0;
    for (int i = 0; i < 8; ++i){
        if (binary[i] != '0' && binary[i] != '1'){
            cerr << "Error : Input string must only contain '0' or '1'!" << endl;
            return -1;
        }
        return decimal;
    }

    int main() ;{
        string binaryInput;
        char choice;
        
        do {
            cout << "Enter an 8-character binary string: ";
            cin >> binaryInput;
            int decimalResult = binary_to_decimal(binaryInput);
            if (decimalResult != -1){
                cout << "Decimal value: " << decimalResult << endl;
            }
            cout << "Do you want to convert another binary string?: ";
            cin >> choice;
        } while (choice == 'y' || choice == 'Y');
        cout << "Goodbye!" << endl;
        return 0;
    }
}