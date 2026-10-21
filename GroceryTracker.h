//Princess vivar
#pragma once
#include <map>
#include <string>
#include <iostream>

using namespace std;

class GroceryTracker {
private:
    map<string, int> itemFrequency;

public:
    bool loadFile(const string& filename);
    bool saveBackup(const string& filename) const;
    int searchItem(const string& item) const;
    void displayFrequencies() const;
    void displayHistogram() const;
};
