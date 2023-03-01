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
Basically three types of sets 
1.Ordered set
2.Unordered set
3.Multi set
*/

void printSet(set<string> &s){
    for (auto i = s.begin(); i != s.end(); i++)
    {
        cout << (*i) <<endl;
    }
    
}

int main()
{
    set<string> s;
    s.insert("abc");  //log(n)
    s.insert("bcd");
    s.insert("efg");

    auto it = s.find("abc"); //log(n)
    if(it != s.end()){
        s.erase(it);
    }
    printSet(s);
    return 0;
}