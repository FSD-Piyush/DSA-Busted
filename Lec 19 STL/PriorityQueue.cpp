#include<iostream>
#include<queue>
using namespace std;

int main() {

    priority_queue<int> maxi; //max heap
    priority_queue<int,vector<int>, greater<int> > mini; //min heap

    maxi.push(1);
    maxi.push(3);
    maxi.push(5);
    maxi.push(7);
    int n = maxi.size();
    for( int i=0; i<n; i++) {
        cout << maxi.top() << endl;
        maxi.pop(); 
        cout << endl;
    }

    mini.push(2);
    mini.push(4);
    mini.push(6);
    mini.push(8);
    int m = mini.size();
    for( int i=0; i<m; i++) {
        cout << mini.top() << endl;
        mini.pop();
    }

    cout << " Empty or not " << mini.empty() << endl;


}