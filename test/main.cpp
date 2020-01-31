#include <iostream>
#include "hashable-queue.hpp"
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
    cout << "Test HASHABLE_QUEUE" << endl;

    hashable_queue<string, int> q;
    cout << "INIT A QUEUE" << endl;
    cout << "q.empty(): " << q.empty() << endl;
    cout << "q.size(): " << q.size() << endl;

    cout << "SET q[aaa]=15" << endl;
    q["aaa"] = 15;
    cout << "SET q[ccc]=10" << endl;
    q["ccc"] = 10;

    cout << "q[aaa]=" << q["aaa"] << endl;
    cout << "q[ccc]=" << q["ccc"] << endl;
    cout << "q.empty(): " << q.empty() << endl;
    cout << "q.size(): " << q.size() << endl;

    cout << "SET q[bbb]=5" << endl;
    q["bbb"] = 5;
    cout << "q[bbb]=" << q["bbb"] << endl;
    cout << "q.size(): " << q.size() << endl;

    cout << "q.front()=" << q.front() << endl;
    cout << "SET q.front() *= 2" << endl;
    q.front() *= 2;
    cout << "q.front()=" << q.front() << endl;
    cout << "q[aaa]=" << q["aaa"] << endl;

    cout << "q.back()=" << q.back() << endl;
    cout << "SET q.back() *= 10" << endl;
    q.back() *= 10;
    cout << "q.back()=" << q.back() << endl;
    cout << "q[bbb]=" << q["bbb"] << endl;

    cout << "CALL q.pop()" << endl;
    q.pop();
    cout << "q.size(): " << q.size() << endl;
    cout << "q.front()=" << q.front() << endl;
    cout << "q.back()=" << q.back() << endl;

    return EXIT_SUCCESS;
}