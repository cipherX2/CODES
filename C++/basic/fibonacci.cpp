#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a=0;
    int b=1;
    for(int i=0;i<n;i++){
        cout<<a<<" ";
        int result = a+b;
        a = b;
        b = result;
    }
    return 0;
}