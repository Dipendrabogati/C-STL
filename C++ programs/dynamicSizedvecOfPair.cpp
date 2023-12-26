#include <vector>
#include <iostream>
using namespace std;

void printVector(vector<pair<int, string>> v) {
    cout << "Size of the vector is = " << v.size() << endl;
    for (int i = 0; i < v.size(); i++) {
        cout << v[i].first << " " << v[i].second << endl;
    }
}

int main() {
    vector<pair<int, string>> v;
    int size;

    cout << "Enter Size of vector: " << endl;
    cin >> size;

    for (int i = 0; i < size; ++i) {
        v.push_back({i, "DI"});
    }

    cout << "Vector is: " << endl;
    printVector(v);
    cout << endl << "The end";
    return 0;
}
