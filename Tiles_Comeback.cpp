
#include <bits/stdc++.h>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define ll long long
using namespace std;
void solve(){
    ll n, k;
    cin>>n>>k;
    ll arr[n+7];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    if(arr[0] == arr[n-1]){
            int cnt = 0;
        for(int i=0; i<n; i++){
            if(arr[i] == arr[0])cnt++;
            if(cnt%k == 0) {cout<<"yes"<<endl;
            return;}
        }

        cout<<"no"<<endl;
        return;
    }
    else {
            int s = -1;
            int e = -1;

            int cnt = 0;

            for(int i=0; i<n; i++){
                if(arr[i] == arr[0])cnt++;
                if(cnt%k == 0){
                    s = i;
                    break;
                }
            }
            cnt = 0;
            for(int i=n-1; i>=0; i--){
                if(arr[i] == arr[n-1])cnt++;
                if(cnt%k == 0){
                    e = i;
                    break;
                }
            }
            if(e != -1 && s != -1 && e>s){
                cout<<"yes"<<endl;
            }
            else cout<<"no"<<endl;


    }
    return;
}




int main() {
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        solve();
    }
    return 0;
}

