// operations: push_back,pop_back, size, capacity, at, sort

#include<iostream>
#include<vector>

using namespace std;
int main(){
vector<int> v; // you need not mention the size
// inserting / input do not use [l
// v.push_back(l);

v.push_back(9);
v.push_back(2);
// if you want to update / access
cout<<v[0]<<endl;

v[1]=8;
cout<<v[1];
}

//vector m size aur capacity diff hote h. capacity 2x increase hote h