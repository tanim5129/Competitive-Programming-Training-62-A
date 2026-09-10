#include<bits/stdc++.h>
using namespace std;
int main (){
    long long int n;

    cin>>n;

    long long int sum = n*(n+1);

    sum = (sum/2);

    long long int rest=0;

    for(int i=0;i<n-1;i++)
    {
        long long int a;
        cin>>a;
        rest+= a;

    }
    cout<<(sum-rest)<<endl;
    return 0;
}