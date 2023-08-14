#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    bool isPrime = true;
    // Corner case
    if (n <= 1)
        isPrime = false;
  
    // Check from 2 to n-1
    for (int i = 2; i <= n / 2; i++){
        if (n % i == 0){
            isPrime = false;
            break;
        }
    }
    cout<<((isPrime) ? "YES" : "NO")<<endl;

return 0;
}
