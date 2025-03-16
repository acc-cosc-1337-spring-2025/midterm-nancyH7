#include <iostream>
using namespace std;

int get_earned_points(int sold);

int main(){
    int widgetSold;
    char choice;
    
    do {
        cout << "enter the number of widgets sold: :";
        cin >> widgetSold;
        
        while (widgetSold <0){
            cout << "Invalid input. Please enter a non-negative number: ";
            cin >> widgetSold;
        }

        int pointsEarned = get_earned_points(widgetSold);

        cout << "Points Earned: " << pointsEarned << endl;

        cout << "Do you want to enter another value?: ";
        cin >> choice;

    } while (choice == 'y' || choice == 'y');

    cout << "Goodbye!" << endl;
    return 0;
}

int get_earned_points(int sold) {
    if (sold >= 1 && sold <=5){
        return 1 * sold;
    } else if (sold >= 6 && sold <= 10){
        return 5 * sold;
    }else if (sold >= 11 && sold <=15){
        return 10 * sold;
    }else if (sold >=16){
        return 15 * sold;
    }else {
        return 0;
    }
}

