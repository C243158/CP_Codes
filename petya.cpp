#include<iostream>
int arr[1005];
using namespace std;
//decleration
int solve (int n, int i);
//definition
int solve (int n, int i){
    int right = 0;
    int left = 0;
    int rightref = arr[i];
    int leftref = arr[i];
    
    for (int j = i; j<n; j++) {
        if (arr[j] > rightref) {
            break;
        }
        
        else {
            ++right;
            if (arr[j]<rightref) {
                rightref = arr[j];
            }
        }
    }
    
    for (int k = i - 1; k>=0; k--) {
        if (arr[k] > leftref) {
            break;
        }
        else {
            ++left;
            if (arr[k]<leftref) {
                leftref = arr[k];
            }
        }
    }
    
    
    return right + left;
}


int main () {
    int n;
    cin>>n;
    
    for (int i = 0; i<n; i++) {
        cin>>arr[i];    
    }
    
    if (n==1) {
        cout<<1;
        return 0;
    }
    
    int result = 0;
    
        for (int i = 0; i<n; i++) {
            int value = solve(n, i);
            if (value > result) {
                result = value;
            }
        }
    
    cout<<result;
    
    return 0;
}
