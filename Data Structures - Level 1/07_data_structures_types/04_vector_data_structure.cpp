#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Create a vector of ints
    vector<int> vNumbers;

    // Add elements to the vector
    vNumbers.push_back(10);
    vNumbers.push_back(20);
    vNumbers.push_back(30);
    vNumbers.push_back(40);
    vNumbers.push_back(50);

    cout << "Count = " << vNumbers.size() << endl;

    cout << "Numbers are:\n";

    // We can access vector elements directly using indexes
    for (int i = 0; i < vNumbers.size(); i++)
    {
        cout << vNumbers[i] << "\n";
    }

    return 0;
}
