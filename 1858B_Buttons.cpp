#include <bits/stdc++.h>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define ll long long
using namespace std;
void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b)cout<<"First"<<endl;
    else if(b>a)cout<<"Second"<<endl;
    else{
        if(c%2 != 0)cout<<"First"<<endl;
        else cout<<"Second"<<endl;
    }

}


int main() {
    int t;
    cin>> t;
    while(t--){
        solve();

    }



    return 0;
}
