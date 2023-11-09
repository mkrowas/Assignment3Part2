#include <iostream>
#include <queue>

using namespace std;

#pragma once
class queuething {
private:
    queue<int> q;
public:
    void enqueue(int element);
    int dequeue();
    int front();
    bool isEmpty();
    int size();
};