#include<iostream>
#include<map>
using namespace std;

int main() {

    map<int,string> m;
    m[1] = "babbar";
    m[2] = "love";
    m[13] = "kumar";

    for(auto i:m) {
        cout << i.first << endl;
    } cout << endl;

    cout << m.count(13) << endl;
    
    m.erase(13);
    for(auto i:m) {
        cout << i.first << endl;
    } cout << endl;

}