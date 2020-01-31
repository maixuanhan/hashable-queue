# hashable-queue
A simple class that supports fast access and simple function to remove the first element in queue.

`hashable-queue` is a hybrid class of `queue` and `unordered_map`. It provides most of necessary functions to maintain a queue that is capable of random access by key.

```C++
bool empty() const;
size_type size() const;
value_type &front();
value_type &back();
void pop();
value_type &operator[](const key_type &key);
```

A small test can be done with below script
```bash
mkdir build
cd build
cmake ../test
make
./Test_Hash_Queue
```
