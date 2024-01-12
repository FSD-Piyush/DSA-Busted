#include<iostream>
#include<deque>
using namespace std;

int main() {

    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    
    cout << endl;

    cout << " Print first element " << d.at(1) << endl;

    cout << " Front " << d.front() << endl;
    cout << " Back " << d.back() << endl;

    cout << " empty or not " << d.empty() << endl;

    cout << " Before erasing " << d.size() << endl;
    d.erase(d.begin(),d.begin()+1);
    cout << " After erasing " << d.size() << endl;


}