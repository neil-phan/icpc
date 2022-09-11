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

struct DSU{
    //representative of i's set
    vector<int> parent;
    //size of i's set
    vector<int> rnk;

    DSU(int n){
        parent.resize(n);
        rnk.resize(n);
        for (int i = 0; i < n; i++)
            make_set(i);
    }

    void make_set(int v) {
        parent[v] = v;
        rnk[v] = 1;
    }

    int find_set(int v) {
        if (v == parent[v])
            return v;
        return parent[v] = find_set(parent[v]);
    }

    void union_sets(int a, int b) {
        a = find_set(a);
        b = find_set(b);
        if (a != b) {
            if (rnk[a] < rnk[b])
                swap(a, b);
            parent[b] = a;
            //if (rnk[a] == rnk[b])
            rnk[a]+=rnk[b];
        }
    }
};
void solve(){
    int n, d;
    cin >> n >> d;

    DSU dsu = DSU(n);
    int c1, c2, r, e;
    e = 1;
    for (int i = 0; i < d; i++) {
        r = 0;
        cin >> c1 >> c2;
        if (dsu.find_set(c1-1) == dsu.find_set(c2-1)) {
            e++;
        } else {
            dsu.union_sets(c1-1, c2-1);
        }

        vector<int> sorted_sizes;
        for(int i=0;i<n;i++){
            if(dsu.parent[i]==i){
                sorted_sizes.push_back(dsu.rnk[i]);
            }
        }
        sort(sorted_sizes.begin(), sorted_sizes.end(), greater<int>());
        for (int i = 0; i < e; i++) {
            r += sorted_sizes[i];
        }
        if (r != 0) {
            r--;
        }
        cout << r << endl;
    }

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<setprecision(15)<<fixed;
    int t=1;
    //cin >> t;
    for (int c = 0; c < t; c++)
    {   
        // cout<<"Case #"<<c+1<<": ";
        solve();
    }
}