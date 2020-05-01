//
// Created by Sebastian Knell on 4/30/20.
//

#include "functions.h"

unsigned int promotion(vector<vector<int>> &bills, int n) {
    unsigned int sum = 0;
    while (n--) {
        sort(bills[0].begin(), bills[0].end());
        sum += bills[0][bills[0].size() - 1] - bills[0][0];
        bills[0].erase(bills[0].begin());
        bills[0].erase(bills[0].end() - 1);
        bills[1].insert(bills[1].end(), bills[0].begin(), bills[0].end());
        bills.erase(bills.begin());
    }
    return sum;
}