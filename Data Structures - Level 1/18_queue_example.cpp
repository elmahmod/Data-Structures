// ProgrammingAdvices.com
// Mohammed Abu-Hadhoud

#include <iostream>
#include <queue>
using namespace std;

int main()
{
    // Create a queue of ints
    queue<int> qNumbers;

    // Push into queue
    qNumbers.push(10);
    qNumbers.push(20);
    qNumbers.push(30);
    qNumbers.push(40);
    qNumbers.push(50);

    // We can access the elements by getting the front and popping
    // until the queue is empty
    cout << "Count = " << qNumbers.size() << endl;
    cout << "Front = " << qNumbers.front() << endl;
    cout << "Back  = " << qNumbers.back() << endl;
    
    cout << "\nNumbers are:\n";
    while (!qNumbers.empty())
    {
        // Print front element
        cout << qNumbers.front() << "\n";

        // Pop front element from queue
        qNumbers.pop();
    }

    return 0;
}