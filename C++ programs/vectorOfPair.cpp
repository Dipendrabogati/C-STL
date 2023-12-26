#include<vector>
#include<iostream>
using namespace std;

void printVector(vector<pair<int,string>> v){
   cout<<"size of the v is = "<<v.size()<<endl;
   for(int i=0;i<v.size();i++){
    cout<<v[i].first<<" "<<v[i].second<<endl;
   }

}

int main() {
    vector<pair<int,string>> v={{1,"dipak"},{2,"dipu"},{3,"Dipendra"}};
    printVector(v);
    swap(v[1],v[2]);
    cout<<"After swapping"<<endl;
    printVector(v);
    cout<<endl<<"The end";
    return 0;
}