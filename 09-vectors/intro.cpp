#include <iostream>
#include <vector>
using namespace std;

void printValues(const vector<int> &v);

int main()
{
    vector<int> vec;

    if (vec.empty())
    {
        cout << "Vector is empty!\n";
    }

    vec.push_back(34);
    vec.push_back(12);
    vec.push_back(15);
    vec.push_back(67);
    vec.push_back(89);
    vec.push_back(11);
    vec.push_back(67);

    if (vec.empty())
    {
        cout << "Vector is empty!\n";
    }

    printValues(vec);

    vec.pop_back();
    vec.pop_back();
    printValues(vec);

    vec.clear();
    printValues(vec);

    if (vec.size() == 0)
    {
        cout << "Vector is empty!\n";
    }

    cout << "Size of vec: " << vec.size() << '\n';

    return 0;
}

void printValues(const vector<int> &v)
{
    for (int i = 0; i < v.size(); ++i)
    {
        cout << v[i] << ' ';
    }
    cout << '\n';
}