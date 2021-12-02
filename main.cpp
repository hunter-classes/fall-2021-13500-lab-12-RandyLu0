#include "funcs.h"
#include <iostream>
using std::cout;

int main(){
    vector<int> a{0,9};
    vector<int> v{-9,-3};
    vector<int> b;
    b = makeVector(10);
    for(auto x : b)
        cout << x << " ";
    cout << "\n";

    gogeta(a,v);
    for (auto x:a) {
        cout << x << "  ";
    }
    cout << "\n";
    b = sumPairWise(a,v);
    for (auto x : b) {
        cout << x << " ";
    }
    cout << "\n";


    return 0;
}

