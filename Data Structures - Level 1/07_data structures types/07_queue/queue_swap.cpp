#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> queue1;
    queue<int> queue2;

    queue1.push(10);
    queue1.push(20);
    queue1.push(30);
    queue1.push(40);

    queue2.push(50);
    queue2.push(60);
    queue2.push(70);
    queue2.push(80);

    // Swap the two queues
    queue1.swap(queue2);

    cout << "\nqueue1: ";
    while (!queue1.empty())
    {
        cout << queue1.front() << " ";

        queue1.pop();
    }

    cout << "\nqueue2: ";
    while (!queue2.empty())
    {
        cout << queue2.front() << " ";

        queue2.pop();
    }

    return 0;
}