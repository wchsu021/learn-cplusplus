#include <iostream>
#include "mingw.thread.h"
// #include <thread>
using namespace std;

/*
thread functions

thread::get_id()    // 用來查看當前執行緒的id
thread::joinable()  // 檢查此執行緒是否還和主執行緒連接 ( 已經完成join、detach 的執行緒都是false)
thread::detach()    // 將執行緒與主執行緒的連接切斷，並且此執行緒會繼續獨立執行下去，直到執行結束時釋放分配的資源
thread::swap()      // 交換兩個執行緒物件
====================================================================
std::this_thread 命名空間(Namespace)

this_thread::get_id()       // 用來查看當前執行緒的id
this_thread::yield()        // 暫時中斷此執行緒，OS會調用其他執行緒執行
this_thread::sleep_until()  // 設定一個時間，讓此執行緒在指定的時刻後再繼續執行
this_thread::sleep_for()    // 暫時中斷此執行緒，等待指定的一段時間後才會被執行
*/

//====================  example 1 ==========================
void first_thread_job()
{
    cout << "This is the first thread "<< endl;
}

// 傳入string x
void second_thread_job(string x)
{
    cout << "This is the second thread " << x << endl;
}

int main()
{
    // 建立執行緒
    thread first_thread(first_thread_job);
    thread second_thread(second_thread_job, "abc"); 
    
    // 將主執行緒暫停，等待指定的執行緒結束
    first_thread.join();
    second_thread.join();
    return 0;
}
// ====== output ======
// This is the first thread
// This is the second thread abc