#include <iostream>

using namespace std;

int main()
{
    int n,j,i,count;
    cin>>n;
    for(j=1;j<=n;j++)
    {
        count=0;
         for (i = 2; i <= j / 2; i++){
        if (j % i == 0){
            count++;
            break;
        }
    }
    if(count==0 && j!= 1)
    cout<<j<<" ";
    }
return 0;
}
