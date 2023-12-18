#include<vector>
#include<iostream>
using namespace std;

int main() {
    vector<int> v1={4,6,7,4,5,3};  // Initialize a vector with size 10
    //Way one 
    for(int a :v1){
        std::cout << a << "   ";
    }

    cout<<endl<<"The mid"<<endl;
    //Way two
    for(auto a = v1.begin(); a!=v1.end();a++){
        std::cout<< *a << "   ";
    }
    cout<<endl;
    //Way three
    for(int  a=0;a<v1.size(); a++){
         v1.pop_back();
         cout<< v1[a]<<endl;
         cout<<a<<endl;

    }
    cout<<endl<<"The end";
    return 0;
}