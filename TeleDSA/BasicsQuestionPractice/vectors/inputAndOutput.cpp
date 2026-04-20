#include<iostream>
#include<string>
#include<vector>

using namespace std;
int main(){
    vector<string>str1;
    string str[4] = {"Rahul","shop","banned","hai"};
    
    for(int i = 0; i<sizeof(str)/sizeof(str[0]); i++){
        str1.push_back(str[i]);
    }
    // or the better way
    //vector<string> str1(begin(str), end(str));
    
    for(string i : str1){
        cout<<i<<" ";
    }
    
};