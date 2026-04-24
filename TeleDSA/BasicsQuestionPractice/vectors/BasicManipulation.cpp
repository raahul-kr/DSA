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


// swapAlternate element
void swapAlternate(vector<int>arr){
    for(int i = 0; i<arr.size()-1; i+=2){
        swap(arr[i],arr[i+1]);
    }
    cout<<endl<<"The SwapAlternate array :";
    for(int i:arr){
        cout<<i<<" ";
    }
}

// left rotate by 1
void leftRotate(vector<int>arr){
    int first = arr[0];
    for(int i = 0; i<arr.size()-1;i++){
        arr[i] = arr[i+1];
    }
    
    arr[arr.size()-1] = first;
    cout<<endl<<"Left Array :";
    for(int i:arr){
        cout<<i<<" ";
    }
}


// right rotate by 1
void rightRotate(vector<int>arr){
    int last = arr.back();
    for(int i = arr.size()-1;i>0;i--){
        arr[i]= arr[i-1];
    }
    arr[0] = last;
    
    cout<<endl<<"Right Array :";
    for(int i:arr){
        cout<<i<<" ";
    }
    cout<<endl;
}


// move all the zeros to end(already void)
void moveZeros(vector<int>&arr){
    int j = 0;
    for(int i = 0; i<arr.size(); i++){
        if(arr[i] != 0){
            swap(arr[i], arr[j]);
            j++;
        }
    }
    cout<<"All the zeros to end: ";
    for(int i: arr){
        cout<<i<<" ";
    }
    cout<<endl;
}


// palindrone check
bool isPalindrone(string &s,bool &result){
    int l = 0, r = s.size()-1;
    result = true;
    while(l<r){
        if(s[l] != s[r]){
            result = false;
            return result;
        }
        l++;
        r--;
    }
    return result;
}

int main(){
    vector<int>arr = {1,4,2,5,0,0,7,85,3,9};

    prinnt(arr);  // basics printing method
    sumOfArray(arr);  // simple sum of the array
    countEvenAndOdd(arr);

    swapAlternate(arr);
    leftRotate(arr);
    rightRotate(arr); 
    moveZeros(arr);

    // valid isPalindrone
    string s = "madam";
    bool res;
    isPalindrone(s,res);
    if(res){
        cout<<"madam is palindrone;";
    }
    else cout<<"madam is not palindrone";
    return 0;
}