#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <array>
#include <unordered_map>
#include <unordered_set>
#include <iomanip>
#include <chrono>
#include <random>

#define ld long double
#define ll long long
using namespace std;

void solve(){
    int n, t;
    cin >> n;
    vector<int> arr(n); 

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<ll> res(n, 0);
    unordered_map<ll, ll> seq;
    ll ans = 0;

    for (ll i = 0; i < n; i++) {
        if (i > 0) {
            res[i] = res[i-1];
        }
        if (seq.find(arr[i]) != seq.end()) {
            res[i] += seq[arr[i]];
        }
        seq[arr[i]] += i + 1;
        ans += res[i];
    }
    
    cout << ans << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<setprecision(15)<<fixed;
    int t=1;
    cin >> t;
    for (int c = 0; c < t; c++)
    {   
        // cout<<"Case #"<<c+1<<": ";
        solve();
    }
}