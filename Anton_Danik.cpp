// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n;
    string s;
    cin>>n>>s;
    int countA = 0;
    int countB = 0;
    
    for (int i = 0; i<n; i++) {
        if(s[i] == 'A') {
            countA = countA + 1;
        }
        else {
            countB = countB + 1;
        }
    }
    
    if (countA > countB) cout << "Anton";
    else if (countA == countB) cout << "Friendship";
    else cout << "Danik";

    return 0;
}
