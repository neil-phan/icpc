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
    vector<int> contests(n);
    string s = "";
    for (int i = 0; i < n; i++) {
        cin >> contests[i];
        s += "0";
    } 
    int b = 0;
    for (int i = n-1; i >= 0; i--) {
        if (contests[i] <= b) {
            s[i] = '1';
        } else if (contests[i] > b && b < q) {
            s[i] = '1';
            b++;
        }
    }
    cout << s << endl;
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