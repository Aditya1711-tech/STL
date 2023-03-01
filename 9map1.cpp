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

// In map there are unique keys for every element, When we insert some value for existing key value it will replace old value with new value.
// Keys are stored in sorted order no matter in which order you insert it into map

void prinntMap(map<int,string> &m){
    cout << "size: " << m.size() << endl;
    // Loop will get execute in O(nlogn) for accesing 1 element T.C is O(logn) so for n it is O(nllogn)
    for(auto &val : m){
        cout << val.first << " " << val.second << endl;
    }
}

int main()
{
    map<int,string> m;
    m[1] = "abc"; //Time complexity will be O(logn) where n is current size of map
    m[5] = "def";
    m[3] = "ghi";
    m.insert(make_pair(4,"hij"));

    // map<int,string> ::iterator it = m.begin();
    // while (it != m.end()){
    //     cout << (*it).first << " " << (*it).second << endl;
    //     it++;
    // }


    // auto it = m.find(8); //O(logn) This find() function will return iterator over map
    // if(it == m.end()){
    //     cout << "Value not found" << endl;
    // }else{
    //     cout << (*it).first << " " << (*it).second << endl;
    // }


    // m.erase(3); //O(logn)

    // auto it = m.find(8);
    // if(it != m.end()){
    //     m.erase(it);
    // }

    // m.clear();

    prinntMap(m);

    return 0;
}

// m["abcd"] = "abcd";
// Here key is also string, for insertion of this element time complexity is O(s.size() * log(n))
// Because here if compairs all the key alrady exist and put it at apropriate place in map 