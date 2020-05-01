//
// Created by Sebastian Knell on 4/30/20.
//
#include "functions.h"

int main() {
    ifstream file("input.txt");
    string line;
    vector<string> input;
    if (file.is_open()) {
        while (getline(file, line)) {

        }
        file.close();
    }
    for (auto &i : input)
        cout << i << endl;

    return 0;
}