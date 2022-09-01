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

string name = "Timur";
multiset<char> timur;

void solve(){
    int n;
    string s;
    cin >> n >> s;
    if (n != 5) {
        cout << "NO\n";
        return;
    } 
    multiset<char> comp;
    for (int i = 0; i < 5; i++) {
        comp.insert(s[i]);
    }
    if (comp == timur) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<setprecision(15)<<fixed;
    int t=1;
    cin >> t;
    for (int i = 0; i < 5; i++) {
        timur.insert(name[i]);
    }
    for (int c = 0; c < t; c++)
    {   
        // cout<<"Case #"<<c+1<<": ";
        solve();
    }
}