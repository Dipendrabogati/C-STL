#include<vector>
#include<iostream>
using namespace std;

int main() {
    pair<int ,string> name[3];

   for(int i=0;i<3;i++){
    name[i]={i+1,"dipak"};
   }
   //Swapping the pair
   swap(name[0],name[2]);
   for(int i=0;i<3;i++){
    cout<<name[i].first<<"->"<<name[i].second<<endl; 
   }
   


    cout<<endl<<"The end";
    return 0;
}