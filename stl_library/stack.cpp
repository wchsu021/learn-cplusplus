#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> mystack;
    
    mystack.push(5);
    mystack.top();
    mystack.pop();
    mystack.empty();
    mystack.size();
    
    return 0;
}