#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<int> myqueue;

    myqueue.push(1);
    myqueue.front();
    myqueue.back();
    myqueue.size();
    myqueue.pop();
    myqueue.empty();
    
    return 0;
}