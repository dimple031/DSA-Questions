
//link: https://www.hackerrank.com/challenges/summing-the-n-series/problem

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    int MOD = 1e9+7;
    while(t--){
    long long n,sum=0;
        cin>>n;
       //brute force didn't work for n>10^18
        // for(i=1;i<=n;i++){
        //     sum += (i*i-((i-1)*(i-1)));
        // }
        sum = ((n%MOD)*(n%MOD))%MOD;
        /*
        t=n*n -((n-1)*(n-1)) = n*n-(n*n-n-n+1) = n*n-n*n+2n-1 = 2n-1
        for n=1 to nth term = (1+3+5+ .....n) = 2(sum of odd n term) = n*n 
        and divide by mod beacuse in quest and formula
        */
        cout<<sum<<endl;
    }

    return 0;
}
