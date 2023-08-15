#include <bits/stdc++.h>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define ll long long
using namespace std;
void solve(){
    int n;
    cin>>n;

    vector<ll> a;
    vector<ll> b;
    ll mini = 10e9;

    for(int i=0; i<n; i++){
        int k;
        cin>>k;
        b.resize(k);
        for(int j = 0; j<k; j++){
            int p;
            cin>>p;
            b[j] = p;
        }
        sort(b.begin(), b.end());
        mini = min(mini, b[0]);
        a.push_back(b[1]);
    }
    sort(a.begin(), a.end());
    a[0] = mini;
    ll sum = 0;
    for(int i = 0; i<a.size(); i++)
        sum += a[i];
    cout<< sum <<endl;
    return ;

}


int main() {
    int t;
    cin>> t;
    while(t--){
        solve();

    }



    return 0;
}
