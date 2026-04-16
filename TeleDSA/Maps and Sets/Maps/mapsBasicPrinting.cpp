// #include<iostream>
// #include<unordered_map>
// using namespace std;
// int main(){
//     unordered_map<string,int>m;
//     pair<string,int>p1;
//     p1.first = "raghav";
//     p1.second = 76;
//     pair<string,int>p2;
//     p2.first = "harsh";
//     p2.second = 75;
//     pair<string,int>p3;
//     p3.first = "harshi";
//     p3.second = 753;


//     m.insert(p1);
//     m.insert(p2);
//     m.insert(p3);

//     for(pair<string,int>p:m){
//         cout<<p.first<<" "<<p.second<<endl;
//     }
// }


// ================= other some way

#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string,int>m;
    pair<string,int>p1;
    p1.first = "raghav";
    p1.second = 43;
    m.insert(p1);

    m["Harsh"] = 15;
    m["Lokesh"] = 67;

    for(auto p:m){
        cout<<p.first<<" "<<p.second<<endl;
    }

    cout<<m.size()<<endl;
    m.erase("raghav");
    m.erase("sanket");


    for(auto p : m){
        cout<<p.first<<" "<<p.second<<endl;
    }

}