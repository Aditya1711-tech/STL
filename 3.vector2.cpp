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

void printVec(vector<int> &v){ //If we pass here by value then it will make copy of vector snd it is costly so always pass by refrance.
    cout << "Size of vector is: " << v.size() << endl; //v.size() work in O(1) time...
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> v;
    v.push_back(5);
    v.push_back(6);
    // printVec(v); 
    // v.pop_back();  
    // printVec(v); //pop_back() and push_back() both work in O(1) time...
    vector<int> v2 = v; //Copying vector in O(n) time complexity. And also it making new copy of v in v2 as array it is not making copy of pointer.
    printVec(v);
    v2.push_back(3);
    printVec(v2); //As we can see how both athe vectors are treated as two different vectors changes made in v2 doesnot reflect in v.
    return 0;
}