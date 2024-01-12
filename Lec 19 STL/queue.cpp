#include<iostream>
#include<queue>
using namespace std;

int main() {

    queue<string> q;
    q.push("Piyush");
    q.push("kumar");
    q.push("Sahu");

    cout << " First element " << q.front() << endl;
    q.pop();
    cout <<  " Now first element " << q.front() << endl;

    cout << " Size after pop " << q.size() << endl;

}