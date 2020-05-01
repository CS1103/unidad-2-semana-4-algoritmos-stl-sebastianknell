//
// Created by Sebastian Knell on 4/30/20.
//
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

void permutation(string &w) {
    if (!next_permutation(w.begin(), w.end())) w = "No Successor";
}

int main() {
    string w;
    vector<string> words;
    do {
        cin >> w;
        words.push_back(w);
    }while (w != "#");
    words.pop_back();
    for (auto &i : words) {
        permutation(i);
        cout << i << endl;
    }
    return 0;
}
