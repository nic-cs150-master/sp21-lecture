#include <iostream>
#include <cstdlib> // srand(), rand()
#include <ctime> // time()
using namespace std;

int main()
{
    srand(time(NULL)); // seed the random generator, only once

    cout << rand() << '\n';
    cout << rand() << '\n';
    cout << rand() << '\n';
    cout << rand() << '\n';

    return 0;
}