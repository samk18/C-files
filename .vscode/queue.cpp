// CPP program to illustrate
// Application of push() and pop() function

#include <iostream>
#include <queue>
using namespace std;

int main()
{
	// Empty Queue
	int c = 0;

	queue<int> myqueue;
	myqueue.push(5);
	myqueue.push(13);
	myqueue.push(0);
	myqueue.push(9);
	myqueue.push(4);
	// queue becomes 5, 13, 0, 9, 4

	// Counting number of elements in queue
	while (!myqueue.empty()) {
		 
        int b= myqueue.front();
        myqueue.pop();
        cout << b;
		c++;
	}
	cout << c;
}
