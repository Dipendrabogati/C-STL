#include<vector>
#include<iostream>
using namespace std;

int main() {
    vector<int> v1(10);  // Initialize a vector with size 10
     //Initializing
    for (int i = 0; i < 10; i++) {
        v1[i] = i + 1;
    }
    //Accessing
    for (int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";
    }
    //Deleting last element
    v1.pop_back();
    cout<<endl;
    for (int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";
    }
    //inserting at specific poditin=on
    v1.insert(v1.begin()+1,100);
    cout<<endl;
    for (int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";
    }

    cout<<"end";
    return 0;
}