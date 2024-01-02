#include<iostream>
using namespace std;

void printArray (int arr[], int size) {
//cout << " printing the array " << endl;
for (int i=0; i<size; i++) {
    //cout << arr[i] << " ";
}
cout << " Counting done " << endl;
}

int main() {
    //declaring array
    int num[15];

// accessing an array
    // cout << " Value at 20 index " <<  num[20] << endl;

    cout << endl << " Everything is fine " << endl << endl;

    // initialising an array
    int second[3] = {5, 7, 11};
    // accessing an element
    cout << " Value at 2nd index is: " << second[2] << endl;

int third[15] = {2,7};
int n = 15;
//printArray(third, 15);
// cout << " Printing the array " << endl;
// // printing the array
// for(int i=0; i<n; i++) {
//     cout << third[i] << endl;
// }

int fourth[10] = {0};
n = 10;
//printArray(fourth, 10);
// cout << " Printing the array " << endl;
// // printing the array
// for(int i=0; i<n; i++) {
//     cout << fourth[i] << endl;
// }

int fifth[10] = {1};
n = 10;
//printArray(fifth, 10);
// cout << " Printing the array " << endl;
// // printing the array
// for(int i=0; i<n; i++) {
//     cout << fifth[i] << endl;
// }

int fifthSize = sizeof(fifth)/sizeof(int);
cout << " Size of fifth is : " << fifthSize << endl;

char ch[5] = {'a','b','c','r','p'};
cout << ch[3] << endl;

    return 0;
}