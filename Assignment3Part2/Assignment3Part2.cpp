#include <iostream>
#include "queuething.h"

using namespace std;


int main() {
    queuething queue;

    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);

    cout << "Front:" << queue.front() << endl;
    cout << "remove" << queue.dequeue() << endl;
    cout << "remove" << queue.dequeue() << endl;
    cout << "remove" << queue.dequeue() << endl;

    if (queue.isEmpty()) {
        cout << "queue is empty" << endl;
    }
    else {
        cout << "queue is not empty" << endl;
    }

    cout << "Size: " << queue.size() << endl;

    return 0;
}
