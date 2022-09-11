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

bool check_adj(int r, int c, int i, int j, vector<string> &matrix) {
    if (j + 1 <= c - 1) {
        if (matrix[i][j+1] == '0')
            return true;
        if (i - 1 >= 0) {
            if (matrix[i-1][j+1] == '0')
                 return true;
        }
    }
    if (i + 1 <= r - 1) {
        if (matrix[i+1][j] == '0')
            return true;
        if (j + 1 <= c - 1) {
            if (matrix[i+1][j+1] == '0')
                return true;
        }
    }
    return false;
}

void solve(){
   int r, c;
   string t;
   cin >> r >> c;
   vector<string> matrix(r);
   for (int i = 0; i < r; i++) {
       cin >> matrix[i];
   }
   int total = 0;
   bool adj = false;
   for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (matrix[i][j] == '1') {
                total++;
            } else {
                if (check_adj(r, c, i, j, matrix)) {
                    adj = true;
                }
            }
        }
   }
   if (total == r * c)
       cout << total - 2 << endl;
   else if (adj)
       cout << total << endl;
   else
       cout << total - 1 << endl;
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