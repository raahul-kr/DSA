#include<iostream>
#include<string>
#include<vector>

using namespace std;
int main(){
    vector<string>str1;
    string str[4] = {"Rahul","shop","banned","hai"};
    // vvimp of this sizeof wla part
    for(int i = 0; i<sizeof(str)/sizeof(str[0]); i++){
        str1.push_back(str[i]);
    }
    
    for(string i : str1){
        cout<<i<<" ";
    }
    
};