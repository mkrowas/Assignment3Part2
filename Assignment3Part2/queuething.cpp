#include <iostream>
#include <queue>
#include "queuething.h"

using namespace std;


    // Adds a new element at the end of the queue
    void queuething::enqueue(int element) {
        q.push(element);
    }

    // Removes the end element of the queue
    int queuething::dequeue() {
        if (isEmpty()) {
            cerr << "Error: Queue is empty. Unable to dequeue." << endl;
            return -1;
        }

        int frontElement = q.front();
        q.pop();
        return frontElement;
    }

    // returns front element
    int queuething::front() {
        if (isEmpty()) {
            cerr << "Queue is empty." << endl;
            return -1;
        }

        return q.front();
    }

    // Checks if epty
    bool queuething::isEmpty() {
        return q.empty();
    }

    // Retruns size of the queue
    int queuething::size() {
        return q.size();
    }
