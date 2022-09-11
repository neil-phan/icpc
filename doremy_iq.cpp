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
    int n, q;
    cin >> n >> q;
    vector<vector<int>> contests(n, vector<int>(2));
    int t, c;
    string s;
    for (int i = 0; i < n; i++) {
        cin >> t;
        contests[i] = {t, i};
        s += "0";
    } 
    sort(contests.begin(), contests.end());
    vector<int> idx = 
    while (q > 0 && contests.size() > 0) {
        c = contests[0][0];
        contests.erase(contests.begin());
        if (q > c) {
            q--;

        }
        t++;
    }
    cout << t << endl;
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