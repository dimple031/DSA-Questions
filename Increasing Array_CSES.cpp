#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll n;
    cin >> n;
    vector<ll> a(n);

    for(ll i = 0; i < n; i++) {
        cin >> a[i];
    }

    ll count = 0;

    for(ll i = 1; i < n; i++) {
        if(a[i] < a[i - 1]) {
            count += a[i - 1] - a[i];
/*
represents the amount we need to increase the current element by. We add this difference
to the count variable, which keeps track of the total moves needed.
*/
            a[i] = a[i - 1];
/*
This line updates the current element (a[i]) to match the value of the previous element (a[i - 1]).
This step is necessary because, in order to make the array non-decreasing, 
we're increasing the current element to at least the value of the previous element.
*/
        }
    }

    cout << count << endl;

    return 0;
}
