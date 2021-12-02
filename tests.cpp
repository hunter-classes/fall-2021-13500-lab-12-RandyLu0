#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

vector<int> n{0,1,2,3,4,5,6,7,8,9};
vector<int> v{-9,-8,-7,6,5,-4,-3};
vector<int> v1{6,5};

TEST_CASE("task A"){
    CHECK(makeVector(10) == n);
    n.push_back(7);
    CHECK(makeVector(10) != n);
    n.pop_back();
}

TEST_CASE("task B"){
    CHECK(goodVibes(v) == v1);
    CHECK(goodVibes(n) == n);
}

TEST_CASE("task C"){
    int nsize = n.size();
    int vsize = v.size();
    gogeta(n,v);
    CHECK(v.empty());
    CHECK(n.size() == nsize + vsize);
}

TEST_CASE("task D"){
    sumPairWise(n,v);

}