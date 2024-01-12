#include<iostream>
#include<stack>
using namespace std;

int main() {

    stack<string> s;
    s.push("piyush");
    s.push("kumar");
    s.push("sahu");

    cout << " Element at top is : " << s.top() << endl;
    s.pop();
    cout << " Element at top is : " << s.top() << endl;

    cout << " Size of stack " << s.size() << endl;
    cout << " Empty or not " << s.empty() << endl;

}