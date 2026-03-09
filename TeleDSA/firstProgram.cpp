// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"Hello bhailog\n";
//     bool dekhteh;
//     cout<<dekhteh;
// }

// \n or endl this is escape sequence
// pre increment and post increment
// all about operator, assisgnment operator
// Ques : Write a program to check whether a
//character is an alphabet or not.
#include<iostream>
using namespace std;
int main(){
char ch;
cout<<"Enter the character : ";
cin>>ch;
// a to z -> 97 to 122
// A to Z -> 65 to 90
int ascii = (int)ch;
if (ascii>=97 && ascii<=122)
cout<<"The character is lowercase alphibet";
if (ascii>=65 && ascii <= 90)
cout<<"The character is uppercase alphabet";
}

// heirarchy order or operator ---> && > ||
