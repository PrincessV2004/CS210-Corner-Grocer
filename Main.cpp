#include <iostream>
#include <string>
#include <limits>
#include "GroceryTracker.h"

using namespace std;

int main() {
	GroceryTracker tracker;
	int choice = 0;
	string item;

	// reading the gtocery data from the input file
	if (!tracker.loadFile("CS210_Project_Three_Input_File.txt")) {
		cout << "Error: Could not open input file." << endl;
		return 1;
	}
	if (!tracker.saveBackup("frequency.dat")) {
		cout << "Error: Could not create backup file." << endl;
		return 1;
	}

	// Display of the menu
	while (choice != 4) {
		cout << "\n===== CORNER GROCER =====" << endl;
		cout << "1. Search for an item" << endl;
		cout << "2. Display all item frequencies" << endl;
		cout << "3. Display histogram" << endl;
		cout << "4. Exit program" << endl;
		cout << "Enter your choice: ";
        if (!(cin >> choice)) {
            if (cin.eof()) {
                break;
            }

            cout << "Invalid input. Enter a number." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        
        // display frequencies of all items, menu option , and using asterisks.
        switch (choice) {
        case 1:
            cout << "Enter the item name: ";
            cin >> item;

            if (!cin) {
                cout << "Input error." << endl;
                return 1;
            }

            cout << item << " was purchased "
                << tracker.searchItem(item)
                << " times." << endl;
            break;

        case 2:
            tracker.displayFrequencies();
            break;

        case 3:
            tracker.displayHistogram();
            break;

        case 4:
            cout << "Thank you for using Corner Grocer!" << endl;
            break;

        default:
            cout << "Invalid choice. Please select 1-4." << endl;
        }
    }

    return 0;
}

