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
    priority_queue<int> a, b; 
    int n, c;
    cin >> n;
    for ( int i = 0; i < n; i++ ) {
        cin >> c;
        a.push(c);
    }
    for ( int i = 0; i < n; i++ ) {
        cin >> c;
        b.push(c);
    }
    int ans = 0;
    while ( ! a.empty() ) {
        if ( a.top() == b.top() ) {
            a.pop();
            b.pop();
            continue;
        } 
        priority_queue<int>& h = a.top() > b.top() ? a : b;
        int hn = h.top();
        h.pop();
        h.push(log10(hn) + 1);
        ans++;
    }
    cout << ans << "\n";
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