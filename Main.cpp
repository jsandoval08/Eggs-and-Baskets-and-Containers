//Jose Sandoval 
// 06/28/2024
// Serving Purpose: Calculations on the number of eggs within a basket of white and brown and calculating the percetage of containers for each dozen of brown and white eggs within a container.  


#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int numBaskets;
    cout << "The Egg Distribution Center!";

    cout << "Enter the total amount of baskets: ";

    cin >> numBaskets;

    // Error checking (No negative numbers)
    while (numBaskets <= 0) {
        cout << "Error: Number of baskets cannot be zero or negative." << endl;
        cout << "Enter a valid number of baskets: ";
        cin >> numBaskets;
    }

    int totalWhiteEggs = 0;
    int totalBrownEggs = 0;

    // Displaying eggs within each of the Basket 
    for (int basketNum = 1; basketNum <= numBaskets; ++basketNum) {
        int whiteEggs, brownEggs;
        cout << "Enter the number of white eggs in basket #" << basketNum << ": ";
        cin >> whiteEggs;

        // Error checking (No Negative Numbers)
        while (whiteEggs < 0) {
            cout << "Error: There cannot be any negative number of eggs." << endl;
            cout << "Enter the total number of white eggs in basket 1" << basketNum << " again: ";
            cin >> whiteEggs;
        }

        cout << "Enter the number of brown eggs in basket #" << basketNum << ": ";
        cin >> brownEggs;

        // Error checking (No Negative Numbers)
        while (brownEggs < 0) {
            cout << "Error: Number of brown eggs cannot be negative." << endl;
            cout << "Enter the number of brown eggs in basket 2" << basketNum << " again: ";
            cin >> brownEggs;
        }

        // The total number of eggs
        totalWhiteEggs += whiteEggs;
        totalBrownEggs += brownEggs;
    }

    // The total calculation of the percentage 
    int totalEggs = totalWhiteEggs + totalBrownEggs;
    double whitePercentage = static_cast<double>(totalWhiteEggs) / totalEggs * 100.0;
    double brownPercentage = static_cast<double>(totalBrownEggs) / totalEggs * 100.0;

    //The total calculation of the full dozen containers
    int whiteDozenContainers = totalWhiteEggs / 12;
    int brownDozenContainers = totalBrownEggs / 12;


    //Results that are going to be Displayed 

    cout << "\nSummary:" << endl;
    cout << "The total number of white eggs: " << totalWhiteEggs << endl;
    cout << "The total number of brown eggs: " << totalBrownEggs << endl;
    cout << fixed << setprecision(2); // The precision for percentages
    cout << "The percentage of white eggs: " << whitePercentage << "%" << endl;
    cout << "The percentage of brown eggs: " << brownPercentage << "%" << endl;
    cout << "The total number of dozen egg containers for white eggs: " << whiteDozenContainers << endl;
    cout << "The total mumber of dozen egg containers for brown eggs: " << brownDozenContainers << endl;

    return 0;

}
