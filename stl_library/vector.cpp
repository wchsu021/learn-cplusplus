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
    vector<int> v7(v2.begin(), v2.end()); // equal to v2
    v1.assign(10,0); // {0,0,0,0,0,0,0,0,0,0}
    v1.assign(v2.begin(), v2.end());    // assign v2 to v1
    v1.assign(v2.begin(), v2.end()+2);  // assign first 2 element in v2 to v1


    //-----------------------------------------------------------------------------
    // Main Functions:
    // vec.push_back(val)
    // vec.pop_back()
    // vec.front()
    // vec.back()
    // vec.insert(vec.begin()+i, val)
    // vec.erase(vec.begin()+i)
    // vec.clear()
    // vec.size()
    // vec.capacity()
    // vec.empty()
    // vec.at(i)  // same as vec[i]
    // vec.reserve() // change capacity (only increase), cannot directly use operator[]
    // vec.resize()  // change size of container, can directly use operator[]
    // vec.shrink_to_fit() // recycle unused space (capacity), size = capacity
    // ----------------------------------------------------------------------------
    
    // insert
    // iterator insert (const_iterator position, const value_type& val); // single element
    // iterator insert (const_iterator position, size_type n, const value_type& val); // fill
    // template <class InputIterator>iterator insert (const_iterator position, InputIterator first, InputIterator last); // range

    vector<int> myvector (3,100);   // {100, 100, 100}
    vector<int>::iterator it;
    it = myvector.begin();
    it = myvector.insert(it, 200);  // {200, 100, 100, 100}
    myvector.insert(it, 2, 300);    // {300, 300, 200, 100, 100, 100}

    // insert array to vector
    int myarray [] = { 501,502,503 };
    myvector.insert (myvector.begin(), myarray, myarray+3); // {501, 502, 503, 300, 300, 200, 100, 100, 100}

    // ------------------------------------------------------------------------------

    // erase
    // iterator erase (const_iterator position);
    // iterator erase (const_iterator first, const_iterator last);
    
    // erase the 6th element
    myvector.erase (myvector.begin()+5);

    // erase the first 3 elements:
    myvector.erase (myvector.begin(),myvector.begin()+3);

    // ------------------------------------------------------------------------------

    // traverse
    //1. use function member - at
    for (int i = 0; i < myvector.size(); i++) cout << myvector[i] << " ";
    for (int i = 0; i < myvector.size(); i++) cout << myvector.at(i) << " ";

    //2. use iterator
    vector<int>::iterator it_i;
    for (it_i = myvector.begin(); it_i != myvector.end(); ++it_i) cout << *it_i << " "; 

    // ------------------------------------------------------------------------------

    // generate 2D vector
    vector<int> row;
    row.assign(col_size, 0);  // set a single row, size = col_size
    vector< vector<int> > array_2D;
    array_2D.assign(row_size, row);  // set second dimension

    // ------------------------------------------------------------------------------

    return 0;
}