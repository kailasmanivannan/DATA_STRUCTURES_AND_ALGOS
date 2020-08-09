#include<iostream>
#include<vector>
using namespace std;
long int gcd(long int n1,long int n2){
    if(n1==0)
        return n2;
    return gcd(n2 % n1,n1);
}
int main(){
    long int a,b;
    cin>>a>>b;
    long int ans = gcd(a,b);
    cout<<ans;
    return 0;
}
