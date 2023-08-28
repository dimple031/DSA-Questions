#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main() {
    ll n;
    cin >> n;
    
    vector<ll> sequence; // Create a vector to store the sequence
    
    while (n != 1) {
        sequence.push_back(n); // Store the current value of n
        
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = (n * 3) + 1;
        }
    }
    
    sequence.push_back(1ll); // Break the loop when n becomes 1
 // Print the stored sequence
    for (ll num : sequence) {
        cout << num << " ";
    }
    
    return 0;
}
