#include<iostream>
using namespace std;

void printCounting(int n) { // Ye Function ka Signature hai
for(int i=1; i<=n; i++) { // or ye function ki body
    cout << i << " ";
  }
}

int main() {

int n;
cin >> n;

printCounting(n); // Here, Calling the Function

    return 0;

}
