/* output
1        
00
111
0000
11111
000000
*/

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;
//     int a=5;
//     for(int i=1;i<=n;i++){
//         if(i%2!=0) a=1;
//         else a=0;
//         for(int j=1;j<=i;j++){
//             cout<<a;
//         }
//         cout<<endl;

//     }
// }

//---------------------------------------------------------------------------

/*OUTPUT
Enter the number: 6
1
10
101
1010
10101
101010
*/


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;
//     int a = 5;
//     for(int i=1;i<=n;i++){
//         if(1%2!=0) a=1;
//         else a = 0;
//         for(int j=1;j<=i;j++){
//             cout<<a;
//             if(a==1) a=0;
//             else a = 1;

//         }
//         cout<<endl;
//     }
// }

//================================================================


// same same but diffe
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i=1; i<=n;i++){
        for(int j=1;j<=i;j++){
            if((i+j)%2==0) cout<<1;
            else cout<<0;
        }
        cout<<endl;
    }
}




