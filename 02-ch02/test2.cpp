#include <iostream> // cout, cin
#include <string> // string
using namespace std;

int main()
{
    // int length = 45.675, 
    //     width = 2;

    // double average = 5.324;

    // char letter = 'Z';

    // string studentName = "John";

    // cout << length << ' ' << width << endl;

    // cout << average << '\n';

    // cout << letter << endl;

    // cout << studentName << '\n';
    // studentName = "Jose";
    // cout << studentName << '\n';

    // bool isStudent = true;

    // cout << isStudent << '\n';
    // isStudent = false;
    // cout << isStudent << endl;

    double numerator = 0.0, denominator = 0.0;

    cout << "Enter the numerator as float: ";
    cin >> numerator;

    cout << "Enter the denominator as float: ";
    cin >> denominator;

    double result = numerator / denominator;

    cout << "Result of " << numerator 
         << " / " << denominator 
         << " is " << result << endl;

    cout << "Result of " << numerator;
    cout << " / " << denominator;
    cout << " is " << result << endl;

    // int modResult = numerator % denominator;

    // cout << result << endl;
    // cout << modResult << endl;
    // // cout << 13 / 5 << endl;    // displays 2
    // cout <<  2 / 4 << endl;    // displays 0

    // cout << 13 / 5.0 << endl;  // displays 2.6
    // cout << 2.0 / 4 << endl;   // displays 0.5


    return 0;
}