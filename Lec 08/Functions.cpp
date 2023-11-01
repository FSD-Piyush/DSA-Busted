#include<iostream>
using namespace std;

int power(int a, int b) { // Power is the name of function and int is the return type
                          // Inside the bracket is written the arguements and int a, int b are input parameters
    int ans = 1;
    for (int i=1; i<=b; i++) {
        ans = ans * a;
    }
    return ans;
} 

int main() {

    int a,b;
    cin >> a >> b;

    int answer = power(a,b);
    cout << answer << endl;

    return 0;
}