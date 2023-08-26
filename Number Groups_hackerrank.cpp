//link: https://www.hackerrank.com/challenges/number-groups/problem

/*
thoery of this problem:
we know that to find the nth odd integer from nth term=2n-1
   (1)+(3+5)+(7+9+11)+......(K-1)+(K)
   1st   2nd    3rd          K-1   Kth place
 going with brute force, K^2 which is K^12 which gives TLE
 so, we simplify this: [1+2+3+....+K-1] + 1 (we add 1 to find the first no. in Kth box)
                      = ((K-1)K)/2 + 1 
thus we put the Kth formula in 2n-1, to get the odd number at Kth place, after solving that eqn,we get;
                 = K*K-K+1    time complexity:O(K)
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long k; cin>>k;
/* method 1
    long long first_num, sum=0;
    first_num = k*k - k + 1;
    for(int i=1;i<=k;i++){
        sum += first_num;
        first_num += 2;
    }
        cout<<sum<<endl;   t.c = O(K)
*/
/* for further optimization, we use arithmetic operation
a=K^2-K+1 , d=2, n=K , formula: n/2(2a+(n-1)d)
  = K/2(2*(K^2-K+1)+(K-1)*2) =K/2*(2K^2) =K*(K^2) =K^3
  t.C = O(1)
 */
   cout<<k*k*k<<endl;
    return 0;
}
