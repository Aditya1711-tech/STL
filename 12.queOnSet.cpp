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
Input:
8
abc
def
abc
ghj
jkl
ghj
ghj
abc
3
abc
ghj
abcdef

Output:

*/

int main()
{
    set<string> s;
    int n;
    cin >> n;
    
    for(int i=0;i<n;i++){
        string str;
        cin>>str;
        s.insert(str);
    }

    int q;
    cin >> q;
    while(q--){
        string str;
        cin >>str;
        if(s.find(str) != s.end()){
            cout << "yes" <<endl;
        }else{
            cout<< "No";
        }
    }
    return 0;
}