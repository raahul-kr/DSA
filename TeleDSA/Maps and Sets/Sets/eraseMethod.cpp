#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int>s;
    s.insert(2);
    s.insert(3);
    s.insert(1);
    s.insert(5);
    s.insert(6);
    s.insert(7);
    s.insert(8);
    s.insert(8);
    s.insert(8);
    s.erase(8);
    cout<<s.size()<<endl;

    for(int ele: s){
        cout<<ele<<" ";
    }
}

