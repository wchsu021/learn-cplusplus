#include <iostream>
#include <map>
#include <string>
#include <utility>

using namespace std;

int main() {
    
    // -------------------------------------------------------------------------
    // Main functions
    // map.empty()
    // map.size()
    // map.max_size()
    // map.clear()
    // map.insert()
    // map.erase()
    // map.swap() // swap two maps
    // map.count(key) // check if the map contains the key
    // map.find() // find a key
    // -------------------------------------------------------------------------    
    
    map<int, float> mymap;

    // -------------------------------------------------------------------------
    // construction and assignment
    map<int, string> studentMap;
    studentMap.insert(pair<int, string>(1, "Tom"));
    
    studentMap[7] = "Jack"; // if key exists, the value will be updated

    map<int, string> studentMap = {
        {1, "Tom"},
        {2, "Jack"},
        {3, "John"}
    };

    // -------------------------------------------------------------------------
    // check if insert target exists
    // way1: pair<map<int, string>::iterator, bool>
    pair<map<int, string>::iterator, bool> retPair;
    retPair = studentMap.insert(pair<int, string>(1, "Tom"));  

    if (retPair.second == true)
        cout << "Insert Successfully\n";
    else
        cout << "Insert Failure\n"; // the pair will not be inserted
    
    // way2: count
    int exist = studentMap.count(1);  // return 1 if exist, otherwise return 0

    // -------------------------------------------------------------------------
    // traversal
    for (const auto& s : studentMap) {
        cout << "id: " << s.first << ", name: " << s.second << "\n";
    }

    for (map<int, string>::iterator it = studentMap.begin(); it != studentMap.end(); it++) {
        cout << "id: " << (*it).first << ", name: " << (*it).second << "\n";
    }

    // -------------------------------------------------------------------------
    // find
    map<int, string>::iterator iter = studentMap.find("r123");
    if(iter != studentMap.end())
        cout << "Find, the value is" << iter->second << endl;
    else
        cout << "Do not Find" << endl;

    // -------------------------------------------------------------------------
    // erase and delete

    // delete by iterator
    iter = studentMap.find(1);
    studentMap.erase(iter);

    //delete by key
    int n = studentMap.erase(7); //if delete then return 1, otherwise return 0

    //clear by range
    studentMap.erase(studentMap.begin(), studentMap.end()); // delete whole map
    studentMap.clear();

    // -------------------------------------------------------------------------
    
    return 0;
}

