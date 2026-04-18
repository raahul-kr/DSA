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

// #include<iostream>
// #include<unordered_map>
// using namespace std;
// int main(){
//     unordered_map<string,int>m;
//     pair<string,int>p1;
//     p1.first = "raghav";
//     p1.second = 43;
//     m.insert(p1);

//     m["Harsh"] = 15;
//     m["Lokesh"] = 67;

//     for(auto p:m){
//         cout<<p.first<<" "<<p.second<<endl;
//     }

//     cout<<m.size()<<endl;
//     m.erase("raghav");
//     m.erase("sanket");


//     for(auto p : m){
//         cout<<p.first<<" "<<p.second<<endl;
//     }

// }


// more simple and combine of it


#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main() {
    // 1. Declaration
    unordered_map<string, int> m;

    // 2. Simple Insertion (Using [] is the easiest way)
    m["Raghav"] = 43;
    m["Harsh"] = 15;
    m["Lokesh"] = 67;

    // 3. Printing the map
    // 'auto' automatically detects the pair type
    cout << "Initial Map:" << endl;
    for (auto const& [name, age] : m) {
        cout << name << " is " << age << " years old." << endl;
    }

    // 4. Deleting entries
    cout << "\nMap size before erase: " << m.size() << endl;
    m.erase("Raghav"); // Removes Raghav
    m.erase("Sanket"); // Does nothing (Sanket doesn't exist)
    cout << "Map size after erase: " << m.size() << endl;

    return 0;
}