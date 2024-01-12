#include<iostream>
#include<vector>
using namespace std;

int main() {

    vector<int> v;

    vector<int> a(5,1);

    vector<int> last(a);
    cout << " Printing last " << endl;
    for(int i:last) {
        cout << i << " " << endl;
    }

    cout << " Capacity of vector : " << v.capacity() <<endl;

    v.push_back(1);
    cout << " Capacity of vector : " << v.capacity() <<endl;

    v.push_back(2);
    cout << " Capacity of vector : " << v.capacity() <<endl;

    v.push_back(3);
    cout << " Capacity of vector : " << v.capacity() <<endl;

    cout << " Size : " << v.size() << endl;

    cout << " Element at 2nd index : " << v.at(2) << endl;

    cout << " Front : " << v.front() << endl;
    cout << " Back : " << v.back() << endl;

    cout << " Before pop " << endl;
    for(int i:v) {
        cout << i << " ";
    } cout << endl;

    v.pop_back();

    cout << " After pop " << endl;
    for(int i:v) {
        cout << i << " ";
    }

    cout << " Size before clear " << v.size() << endl;
    v.clear();
    cout << " Size after clear " << v.size() << endl;

}