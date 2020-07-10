#include<iostream>
#include<vector>
#include<algorithm>
typedef long long int ll;
using namespace std;
int main(){
    ll n,i,j;
    cin >> n;
    vector <ll> numbers(n);
    //input
    for(i = 0 ;i < n; i++){
        cin >> numbers[i];
    }

    //bruteforce
    ll maxproduct = 0;
    ll result;
    for(i = 0 ; i < n; i++){
        for(j = i+1; j < n; j++){
            result = numbers[i]*numbers[j];
            if(maxproduct < result){
                maxproduct = result;
            }
        }
    }
    cout << maxproduct;
    // bruteforce

    //T:O[n]
    ll i1 = -1;
    for(i = 0; i < n; i++){
        if((i1 == -1) || (numbers[i] > numbers[i1]))
        { i1 = i; }
    }
    ll i2 = -1;
    for(j = 0; j < n; j++){
        if((j != i1) && ((i2 == -1)||(numbers[j] > numbers[i2])))
        { i2 = j;}
    }
    cout << numbers[i1]*numbers[i2];
    //T:O[n]

    //T:O[nlogn]
    sort(numbers.begin(),numbers.end());
    cout << numbers[n-1]*numbers[n-2];
    //T:O[nlogn]

    return 0;
}
