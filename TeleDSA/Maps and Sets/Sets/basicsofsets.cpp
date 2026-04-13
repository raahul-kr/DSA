#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int>s;
    s.insert(1);
    s.insert(2);
    s.insert(0);
    s.insert(6);
    s.insert(9);

    // we will use for each loop to fetch

    for(int ele: s){
        cout<<ele<<" ";
    }
    return 0;
}