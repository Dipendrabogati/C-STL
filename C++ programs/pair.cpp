#include<vector>
#include<iostream>
using namespace std;

int main() {
    pair<string,string> name;

    
    //THESE ALL ARE THE WAY OF INITIALIZING 
    //name=make_pair("name","dipak");
    name={"First Name is ","Dipenra"};
    pair<string,string> &name1=name;
    // name.first="first Name = ";
    name1.first="Name=";
    // name.second="Dipendra";
    cout<<name.first<<name.second; 
   cout<<name1.first<<name1.second; 


    cout<<endl<<"The end";
    return 0;
}