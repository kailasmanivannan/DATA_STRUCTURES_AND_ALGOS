#include<iostream>
#include<vector>
using namespace std;
long long int gcd(long int n1,long int n2){
    if(n1==0)
        return n2;
    return gcd(n2 % n1,n1);
}
int main(){
    long long int a,b;
    cin>>a>>b;
    long long int gcd_ans = gcd(a,b);
    long long int ans = (a*b)/gcd_ans;
    cout<<ans;
    return 0;
}