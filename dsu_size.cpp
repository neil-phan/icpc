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
#include <unordered_map>
#include <set>
#include <unordered_set>
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
#include <iomanip>

#define ld long double
#define ll long long
#define inf pow(10,18)

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

struct Edge {
    int u, v, weight;
};

bool operator<(const Edge& a, const Edge& b){
    return a.weight<b.weight;
}