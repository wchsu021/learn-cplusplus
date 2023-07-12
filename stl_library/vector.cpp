#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    //construction and assignment
    vector<int> v1;
    vector<int> v2 = {1, 2, 3}; //C++11
    vector<int> v3({1, 2, 3});
    vector<int> v4 = v2;
    vector<int> v5(v3);
    vector<int> v6(10,0); // {0,0,0,0,0,0,0,0,0,0}
    vector<int> v7(v2.begin(), v2.end());
    v1.assign(10,0);
    v1.assign(v2.begin(), v2.end());
    v1.assign(v2.begin(), v2.end()+2); // assign first 2 element in v2 to v1

    // vec.push_back(val)
    // vec.pop_back()
    // vec.insert(vec.begin()+i, val)
    // vec.erase(vec.begin()+i)
    // vec.clear()
    // vec.size()
    // vec.capacity()
    // vec.empty()
    // vec.at(i)  // same as vec[i]
    // vec.reserve() // change capacity (only increase, cannot decrease)
    
    // insert
    vector<int> myvector (3,100);
    vector<int>::iterator it;

    it = myvector.begin();
    it = myvector.insert(it, 200);

    myvector.insert(it, 2, 300);

    //
    int myarray [] = { 501,502,503 };
    myvector.insert (myvector.begin(), myarray, myarray+3);
}