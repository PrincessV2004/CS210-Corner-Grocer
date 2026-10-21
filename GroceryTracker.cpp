//Princess Vivar
#include "GroceryTracker.h"
#include <fstream>

using namespace std;

// Reads the input file and counts how often each item appers.
bool GroceryTracker::loadFile(const string& filename) {
    ifstream file(filename);
    if (!file) return false;

    itemFrequency.clear();
    string item;

    while (file >> item) {
        itemFrequency[item]++;
    }

    return !file.bad();
}
// Saves item names and their counts to a backup file
bool GroceryTracker::saveBackup(const string& filename) const {
    ofstream file(filename);
    if (!file) return false;

    for (const auto& item : itemFrequency) {
        file << item.first << " " << item.second << '\n';
    }

    file.close();
    return file.good();
}
//item count, zero if it is not found
int GroceryTracker::searchItem(const string& item) const {
    auto it = itemFrequency.find(item);
    return it == itemFrequency.end() ? 0 : it->second;
}

void GroceryTracker::displayFrequencies() const {
    cout << "\n===== ITEM FREQUENCIES =====\n";

    for (const auto& item : itemFrequency) {
        cout << item.first << " " << item.second << '\n';
    }
}
// display one asterisk for each purchase of an item
void GroceryTracker::displayHistogram() const {
    cout << "\n===== GROCERY HISTOGRAM =====\n";

    for (const auto& item : itemFrequency) {
        cout << item.first << " "
            << string(item.second, '*') << '\n';
    }
}
// end