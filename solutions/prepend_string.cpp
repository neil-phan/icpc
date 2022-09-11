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
    string n;
    cin >> n;
    int len = n.length();
    vector<vector<int>> dp(len, vector<int>(len, 0));
    // dp[0] is the 2 row
    for (int j = 0; j < len - 1; j++) {
        dp[0][j] = n[j] != n[j+1];
    }

    for (int i = 2; i < len; i+=2) {
        for (int j = 0; j < len - i; j++) {
            int l = dp[i-2][j+2] || n[j] < n[j+1];
            int c1 = dp[i-2][j+1] || n[j] < n[j+i+1];
            int c2 = dp[i-2][j+1] || n[j] > n[j+i+1];
            int r = dp[i-2][j] || n[j+i+1] < n[j+i];
            // cout<<i<<" "<<j<<" "<<l<<" "<<c1<<" "<<c2<<" "<<r<<endl;
            dp[i][j] = max(min(l, c1), min(r, c2));
        }
    }
        
    cout << (dp[len - 2][0] ? "Alice" : "Draw") << endl;
    // dp[len-2][0] = 5;
    // for (int i = 0; i < len; i++) {
    //     for ( int j = 0; j < len; j++ )
    //         cout << dp[i][j] << " ";
    //     cout << "\n";
    // }
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