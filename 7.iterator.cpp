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

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    
    vector<int> ::iterator it = v.begin();

   while (it != v.end())
   {
        cout << (*it) << " ";
        it++;
   }
   cout << endl;

    vector<pair<int,int> > v_p;
    v_p.push_back(make_pair(1,2));
    v_p.push_back(make_pair(2,3));
    v_p.push_back(make_pair(3,4));
    v_p.push_back(make_pair(4,5));

    vector<pair<int,int> > ::iterator it_p = v_p.begin();
    while (it_p != v_p.end())
    {
        // cout << (it_p->first) << " " << (it_p->second) << endl;
        cout << (*it_p).first << " " << (*it_p).second << endl;
        it_p++;
    }    
    return 0;
}