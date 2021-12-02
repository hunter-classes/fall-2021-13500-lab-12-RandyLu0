#include "funcs.h"

vector<int> makeVector(int n){
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
        v[i] = i;
    return v;
}

vector<int> goodVibes(const vector<int> &v){
    vector<int> a;
    for (auto n : v)
        if(n > 0) a.push_back(n);
    return a;
}

void gogeta(vector<int> &goku, vector<int> &vegeta){
    for (auto n: vegeta)
        goku.push_back(n);
    vegeta.clear();
}

vector<int> sumPairWise(const vector<int> &v1, const vector<int> &v2){
    int max = v1.size() > v2.size() ? v1.size() : v2.size();
    vector<int> v(max);
    for (int i = 0; i < max; ++i) {
        if(i > v1.size() - 1)
            v[i] = v2[i];
        else if (i > v2.size() - 1)
            v[i] = v1[i];
        else
            v[i] = v1[i] + v2[i];
    }
    return v;
}
