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
   int n;
   string s;
   cin >> n >> s;
   char l = 'L';
   int comp = s.length() / 2;
   priority_queue<ll,vector<ll>,greater<ll>> counts;
   ll sum = 0;
   for (int i = 0; i < s.length(); i++) {
        if (s[i] == l) {
            counts.push(i);
            sum += i;
        } else {
            counts.push(s.length()-i-1);
            sum += s.length() - i - 1;
        }
   } 

   for (int i = 0; i < s.length(); i++) {
        int val = counts.top();
        if (val < comp){
            sum-=val;
            sum += s.length() - val - 1;
        }
            
        cout << sum << " ";
        counts.pop();
   }
   cout << endl;
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