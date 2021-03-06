#include<bits/stdc++.h>
using namespace std;

#define f(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) f(i,0,n)
#define fd(i,a,b) for(i=a;i>=b;i--)
#define lli long long int
#define vi vector<int>
#define vll vector<lli>
#define pb push_back
#define all(v) v.begin(),v.end()

void solve(){
    int s, n;
    cin >> s >> n;
    if(n%2!=0){
        n--;
    }
    int num_coins = 0;
    while(s>1){
        if(s < n){
            if(s %2 == 0){
                n = s;
            }else{
                n = s-1;
            }
        }else{
            num_coins += s / n;
            s -= (s/n)*n;
        }
    }
    if(s == 1){
        num_coins++;
    }
    cout << num_coins << endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int test_cases;
    //test_cases = 1;
    cin >> test_cases;
    while(test_cases--){
        solve();
    }
    return 0;
}

