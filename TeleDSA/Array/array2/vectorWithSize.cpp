#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int> v(8);
cout<<v.size();
cout<<v.capacity();
cout<<v[4];// 8 size all filled with default value 0;

vector<int> v2(8,10);
cout<<v2[4];// 8 size all filled with value 10;


}