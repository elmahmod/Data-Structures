#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> stack1;
    stack<int> stack2;

    stack1.push(10);
    stack1.push(20);
    stack1.push(30);
    stack1.push(40);

    stack2.push(50);
    stack2.push(60);
    stack2.push(70);
    stack2.push(80);

    stack1.swap(stack2);    

    cout << "\nstack1: ";
    while (!stack1.empty())
    {
        cout << stack1.top() << " ";

        stack1.pop();
    }

    cout << "\nstack2: ";
    while (!stack2.empty())
    {
        cout << stack2.top() << " ";

        stack2.pop();
    }
    return 0;
}
