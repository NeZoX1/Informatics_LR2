#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;
int main() {
    map<int, vector<string>> students; 
    int classNum;
    string surname;
    while (cin >> classNum >> surname) {
        students[classNum].push_back(surname);
    }
    for (auto& it : students) { 
        for (const string& surname : it.second) { 
            cout << it.first << " " << surname << endl; 
        }
    }
    return 0;
}