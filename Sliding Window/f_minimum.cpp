// https://cses.fi/problemset/task/3221
// print xor of minimum of all k size window
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,k;
    cin>>n>>k;

    ll x,a,b,c;
    cin>>x>>a>>b>>c;

    vector<ll> arr(n);
    arr[0]=x;
    for(int i=1;i<n;i++) arr[i]=(a*arr[i-1]+b)%c;
     // O(nlogk) soln will fail here
    // map<ll,int> freq;
    // set<ll> s;

    // for(int i=0;i<k;i++){
    //     s.insert(arr[i]);
    //     freq[arr[i]]++;
    // }

    // ll ans=*s.begin();

    // int left=0,right=k;
    // while(right<n){
    //     ll num=arr[right];
    //     freq[num]++;
    //     s.insert(num);

    //     ll old=arr[left];
    //     freq[old]--;
    //     if(freq[old]==0) s.erase(old);

    //     ans^=*s.begin();

    //     left++; right++;
    // }
 
    
}
