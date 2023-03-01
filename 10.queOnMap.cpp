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
/*
Given N strings print unique strings in lexiographical order with their frequency
N <= 10^5
|s| <= 100

input:
8
abc
def
abc
ghj
jkl
ghj
ghj
abc
*/
int main()
{
    int n;
    cin >> n;
    map<string,int> m;
    for (int i = 0; i < n; i++){
        string s;
        cin >> s;
        m[s]++;
    }

    for(auto &it : m){
        cout << it.first << " " << it.second << endl;
    }
    
    return 0;
}