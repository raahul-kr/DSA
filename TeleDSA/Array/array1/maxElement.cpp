#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n ; cout<<"Enter the size of array : ";cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int max = arr[0];  // or i can use int max = INT_MIN; use #include<climits>
    for(int i = 1;i<n;i++){
        if(max<arr[i]) max = arr[i];
    }
    
    cout <<"The max element in array is : "<<max<<endl;
    int secondMax = INT_MIN;
    for(int i = 0;i<n;i++){
        if(secondMax<arr[i] && arr[i]!=max) secondMax = arr[i];
    }
    cout <<"The Second max element in array is : "<<secondMax;
}