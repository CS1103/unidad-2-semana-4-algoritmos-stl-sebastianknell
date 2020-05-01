//
// Created by Sebastian Knell on 4/30/20.
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int opt_swap(vector<int>::iterator first, vector<int>::iterator last) {
    bool sorted = false;
    int swaps = 0;
    while (!sorted) {
        int init_swaps = swaps;
        for (auto j = first; j != last - 1; ++j) {
            if (*(j + 1) < *j) {
                auto temp = *(j + 1);
                *(j + 1) = *j;
                *j = temp;
                swaps++;
            }
        }
        if (swaps == init_swaps) sorted = true;
    }
    return swaps;
}

int main() {
    int N = 0, L = 0, carriage = 0;
    cin >> N;
    vector<vector<int>> trains;
    while (N--) {
        cin >> L;
        vector<int> v;
        while (L--) {
            cin >> carriage;
            v.push_back(carriage);
        }
        trains.emplace_back(v);
    }

    for (auto &train : trains) {
        int swaps = opt_swap(train.begin(), train.end());
        cout << "Optimal train swapping takes " << swaps << " swaps.\n";
    }

    return 0;
}
