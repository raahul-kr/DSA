#include<iostream>
using namespace std;
int main(){
    int arr[] = {4,2,6,1,7};
    int *ptr = arr;  //giving address
    cout<<ptr<<endl;
    ptr[0]=9;
    for(int i=0;i<=4;i++){
        cout<<ptr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<=4;i++){
        cout<<*ptr<<" ";
        ptr++;
    }
    ptr==arr;// to restore..


}