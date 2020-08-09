#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector <int> ar(n);
    ar[0]=0;
    ar[1]=1;
    for(int j = 2 ;j <= n ; j++){
        ar[j]=(ar[j-1]+ar[j-2])%10;
    }
    cout<<ar[n];
    return 0;
}