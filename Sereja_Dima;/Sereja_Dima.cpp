#include<iostream>
#include<vector>
using namespace std;

int main () {
    int n;
    cin>>n;
    
    vector<int> cards(n);
    
    for (int i = 0; i<n; i++) {
        cin>>cards[i];  
    }
    
    int s, d;
    s = 0; d = 0;
    int first = 0;
    int last = n-1;
    
    for (int i = 0; i<n; i++) {
        if (cards[first] > cards[last]) {   
            if ((i+1) % 2 == 1) {
                s+=cards[first];
            }
            else {
                d+=cards[first];
            }
            first++;
        }
        else {
            if ((i+1) % 2 == 1) {
                s+=cards[last];
            }
            else {
                d+=cards[last];
            }
            last--;
        }
    }
    
    cout<<s<<" "<<d;
    
    return 0;
}
