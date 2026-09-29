#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    // Map = Key + Value
    map<int, string> students;

    // Add elements
    students[100] = "ali";
    students[101] = "omar";
    students[102] = "sara";

    // Another way to add
    students.insert({103, "ahmad"});

    // Print manually
    cout << students[100] << endl;
    cout << students[101] << endl;
    cout << students[102] << endl;
    cout << endl;

    // Print with loop
    for (auto pair : students)
    {
        // .first = key
        // .second = value
        cout << pair.first << " -> " << pair.second << endl;
    }

    // Find
    int studentNumber = 102;

    cout << "\nFinding " << studentNumber << "'s name in the Map..\n";

    auto it = students.find(studentNumber);

    if (it != students.end())
    {
        cout << it->first << "'s name: " << it->second << endl;
    }
    else
    {
        cout << "Name not found for " << studentNumber << endl;
    }

    // Number of elements
    cout << "\nElements number: " << students.size() << endl;

    // Delete by key
    cout << "\nAfter deleting 102:\n";

    students.erase(102);

    for (auto pair : students)
    {
        cout << pair.first << " -> " << pair.second << endl;
    }

    // Check if key exists
    cout << endl;

    if (students.count(102))
    {
        cout << "102 exists" << endl;
    }
    else
    {
        cout << "102 does not exist" << endl;
    }

    // Check if map is empty
    if (students.empty())
    {
        cout << "Map is empty" << endl;
    }
    else
    {
        cout << "Map is not empty" << endl;
    }

    // Clear all elements
    students.clear();

    cout << "\nAfter clearing:\n";
    cout << "Elements number: " << students.size() << endl;

    // Check again
    if (students.empty())
    {
        cout << "Map is empty" << endl;
    }

    return 0;
}