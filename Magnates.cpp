#include<iostream>

using namespace std;

int main () {
    int n;
    cin>>n;
    
    int count = 0;
    int prev = 0;
    
    while (n--) {
       int c;
       cin>>c;
       
       if (c != prev) {
           count++;
       }
       
       prev = c;
    }
    
    cout<<count;
    return 0;
}
