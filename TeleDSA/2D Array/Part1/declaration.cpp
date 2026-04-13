#include<iostream>
using namespace std;
int main(){
    // int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
    //rows -> 3  0-2
    // column -> 3 0-2

    int arr2[4][2] = {{1,2},{3,4},{5,6},{7,8}};
    int arr2[4][2] = {1,2,3,4,5,6,7,8};
    
    int arr3[][3] = {1,2,3,4,5,6};

    arr[0][0] =4;
    cout<<arr[0][0];
}