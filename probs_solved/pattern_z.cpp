#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i = 1;i<=n;i++){
        int s = n-i;
        while(s--){cout<<' ';}
        for(int j=i-1;j>=0;j--)
        {
            cout<<j;        }
        for(int k =1;k<i;k++){
            cout<<k;
        }
        s = n-i;
        while(s--){cout<<' ';}
        cout<<endl;
    }
}
