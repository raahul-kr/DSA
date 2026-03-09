#include<iostream>
#include<vector>
using namespace std;


void sort01method1(vector<int> &v){
    int n = v.size();
    int noo = 0; // number of ones
    int noz = 0; // number of zeros

    for(int i = 0; i<n;i++){
        if(v[i]==0) noz++;
        else noo++;
    }

    // filling elements;

    for(int i = 0; i<n; i++){
        if(i<noz) v[i] =0;
        else v[i] = 1;
    }
}


void sort01method2(vector<int> &v){

    int n = v.size();
    int i = 0;
    int j = n;

    while(i<j){
        if(v[i] ==0) i++;
        if(v[j] ==1) j--;

        if(v[i] ==1 && v[j] ==0){
            v[i] = 0;
            v[j] = 1;
            i++;
            j--;

        }
    }
}


void display(vector<int>&v){
    for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }

}




int main(){
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    
    // sort01method1(v);
    // display(v);
    // cout<<endl;
    sort01method2(v);
    display(v);
}
