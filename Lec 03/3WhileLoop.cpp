#include<iostream>
using namespace std;

int main() {
    
    // Print no.s from 1 to N
    /*int n;
    cin >> n;
    int i = 1;
    while (i<=n) {
        cout << i << " " ;
        i = i + 1; 
    }*/


    // Print sum of all no.s from 1 to N
    /*int n;
    cin >> n;
    int i = 1;
    int sum = 0;
    while (i<=n) {
        sum = sum + i;
        i = i + 1;
        }
        cout << " Value of sum is " << sum <<endl;*/


    // Print sum of all even no.s from 1 to N
    /*int n;
    cin >> n;
    int i = 2;
    int sum = 0;
    while (i<=n) {
        sum = sum + i;
        i = i + 2;
        }
        cout << " Value of sum is " << sum <<endl;*/


    // Check if a no.s is prime or not
    int n;
    cin >> n;

    int i = 2;
    while (i<n) {
        if (n%i == 0) {
            cout << " Number " << n << " is not prime for" << i << endl;
    }
    else {
        cout << " Prime for " << i << endl;
    }
    i = i + 1;
    }
    
}