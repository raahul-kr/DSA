#include<iostream>
#include<vector>
using namespace std;


// printing
void prinnt(vector<int>arr){
    for(int i : arr){
        cout<<i<<" ";
    }
    cout<<endl;
}


// sum of the array
void sumOfArray(vector<int>arr){
    int sum = 0;
    for(int i = 0; i<sizeof(arr); i++){
        sum+=i;
    }
    cout<<"Sum of the array :"<<sum<<endl;
}


// counting the odd and even number
void countEvenAndOdd(vector<int>arr){
    int countEven = 0;
    int countOdd = 0;
    for(int i = 0; i<arr.size();i++){
        if(arr[i]%2==0){
            countEven++;
        }
        else{
            countOdd++;
        }
    }

    cout<<"Even number is: "<<countEven<<"\nOdd number is : "<<countOdd<<endl;
}

int main(){
    vector<int>arr = {1,4,2,5,7,85,3,9};

    prinnt(arr);  // basics printing method
    sumOfArray(arr);  // simple sum of the array
    countEvenAndOdd(arr);
    return 0;
}