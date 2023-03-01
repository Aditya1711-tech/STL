#include<iostream>
#include<vector>
#include<string>
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>
using namespace std;

void printVec(vector<pair<int,int> > &v)
{
    cout << "Size of vector is: " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }
    cout << endl;
}

int main()
{
    vector< pair<int,int> > v;
    v.push_back(make_pair(1,2));
    v.push_back(make_pair(2,3));
    v.push_back(make_pair(3,4));
    v.push_back(make_pair(4,5));
    printVec(v);
    return 0;
}