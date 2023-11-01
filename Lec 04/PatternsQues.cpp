#include<iostream>
using namespace std;

int main() {

    /*int n;
    cin >> n;
    int i = 1;
    while(i<=n) {
        int j = 1;
        while(j<=n) {
            cout << j;
            j++;
        }
        cout << endl;
        i++;
    }*/

    /*int n;
    cin >> n;
    int i = 1;
    while(i<=n) {
        int j = 1;
        while(j<=n) {
            cout << n-j+1;
            j++;
        }
        cout << endl;
        i++;
    }*/

    /*int n;
    cin >> n;
    int i = 1;
    int count = 1;
    while (i<=n) {
        int j = 1;
        while (j<=n) {
            cout << count <<"  ";
            count++;
            j++;
        }
        cout << endl;
        i++;
    }*/

    /*int n;
    cin >> n;
    int row = 1;
    while (row<=n) {
        int col = 1;
        while (col<=row) {
            cout << "*";
            col++;
    }
    cout << endl;
    row++;
    }*/

    /*int n;
    cin >> n;
    int row = 1;
    while (row<=n) {
        int col = 1;
        while (col<=row) {
            cout << row;
            col++;
        }
        cout << endl;
        row++;
    }*/


    /*int n;
    cin >> n;
    int row = 1;
    while (row<=n) {
        int col = 1;
        int value = row;
        while (col<=row) {
        cout << value;
        value++;
        col++;
        }
        cout << endl;
        row++;
    }*/

    /*int n;
    cin >> n;
    int i = 1;
    while (i<=n) {
        int j = 1;
        while (j<=i) {
            cout << (i-j+1) << " " ;
            j++;
        }
        cout << endl;
        i++;
    }*/

    /*int n;
    cin >> n;
    int row = 1;
    while(row<=n) {
        int col = 1;
        while(col<=n) {
            char ch =  'A' + row - 1;
            cout << ch;
            col++;
        }
        cout << endl;
        row++;
    }*/

    /*int n;
    cin >> n;
    int row = 1;
    while(row<=n) {
        int col = 1;
        while(col<=n) {
            char ch =  'A' + col - 1;
            cout << ch;
            col++;
        }
        cout << endl;
        row++;
    }*/

    /*int n;
    cin >> n;
    int i = 1;
    char start = 'A';
    while(i<=n) {
        int j = 1;
        while(j<=n) {
            cout << start;
            start++;
            j++;
        }
        cout << endl;
        i++;
    }*/

    /*int n;
    cin >> n;
    int row = 1;
    while(row<=n) {
        int col = 1;
        while(col<=n) {
            char ch = 'A' + row + col - 2;
            cout << ch;
            col++;
        }
        cout << endl;
        row++;
    }*/

    /*int n;
    cin >> n;
    int row = 1;
    while (row<=n) {
        int col = 1;
        while (col<=row) {
            char ch = 'A' + row - 1;
            cout << ch;
            col++;
        }
        cout << endl;
        row++;
    }*/

    /*int n;
    cin >> n;
    int row = 1;
    char start = 'A';
    while (row<=n) {
        int col = 1;
        while (col<=row) {
cout << start;
start++;
col++;
        }
        cout << endl;
        row++;
    }*/

    /*int n;
    cin >> n;
    int row = 1;
    while(row<=n) {
        int col = 1;
        while (col<=row) {
            char ch = 'A' + row + col - 2;
            cout << ch;
            col++;
        }
        cout << endl;
        row++;
    }*/

    /*int n;
    cin >> n;
    int row = 1;
    while(row<=n) {
        int col = 1;
        char start = 'A' + n - row;
        while (col<=row) {
        cout << start;
        start++;
        col++;
        }
        cout << endl;
        row++;
    }*/

    /*int n;
    cin >> n;
    int row = 1;
    while(row<=n) {
        int space = n-row;
        while(space) {
            cout <<" ";
            space--;
        }
        int col = 1;
        while (col<=row) {
            cout <<"*";
            col++;
        }
        cout << endl;
        row++;
    }*/

    /*int n;
    cin >> n;
    int row = n;
    while (row >= 1) {
        int col = 1;
        while (col <= row) {
            cout << "* ";
            col++;
        }
        cout << endl;
        row--;
    }*/

    /*int n;
    cin >> n;
    int row = n;
    int spaces = 0;
    while (row >= 1) {
        int col = 1;
        // Print spaces
        int k = 1;
        while (k <= spaces) {
            cout <<" ";
            k++;
        }
        // Print asterisks
        while (col <= row) {
            cout <<"*";
            col++;
        }
        std::cout << endl;
        row--;
        spaces++;
    }*/

    /*int n;
    cin >> n;
    int row = 1;
    while (row<=n) {
        // Printing Space
        int space = n - row;
        while(space) {
            cout << " " ;
            space--;
        }
        // Printing 1st Triangle
        int col = 1;
        while (col<=row) {
            cout << col;
            col++;
        }
        // Printing 2nd Triangle
        int start = row - 1;
        while(start) {
            cout << start;
            start--;
        }
        cout << endl;
        row++;
    }*/

    /*int n;
    cin >> n;
    int row = 1;
    while(row<=n) {
        int start = 1;
        int col = 1;
        while(col<=n-row+1) {
            cout<<start;
            start++;
            col++;
        }
        //for stars
        int star = row - 1;
        while(star) {
            cout << "*";
            star--;
        }
        int star2 = row - 1;
        while(star2) {
            cout << "*";
            star2 = star2 - 1;
        }
        int count = n - row + 1;
        while(count) {
            cout << count;
            count--;
        }
        cout << endl;
        row++;
    }*/


}