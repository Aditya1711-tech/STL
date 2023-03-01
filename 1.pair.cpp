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
    pair<int,int> p_array[3];
    p_array[0] = make_pair(1,2);
    p_array[1] = make_pair(2,3);
    p_array[2] = make_pair(3,4);

    for (int i = 0; i < 3; i++)
    {
        cout << p_array[i].first << "," << p_array[i].second<<endl;
    }
    cout<<"\n";
    cout<<"\n";
    swap(p_array[0],p_array[2]);
    
    for (int i = 0; i < 3; i++)
    {
        cout << p_array[i].first << "," << p_array[i].second<<endl;
    }
    return 0;
}