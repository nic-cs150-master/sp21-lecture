#include <iostream>
using namespace std;

int main()
{
    int num1 = 2;
    int num2 = 5;
    int num3 = 7;
    int num4 = 8;

    const int SIZE = 4;
    int nums[SIZE];
    nums[0] = 2;
    nums[1] = 5;
    nums[2] = 7;
    nums[3] = 8;

    int sum = num1 + num2;
    int sum2 = nums[0] + nums[1];


    cout << num1 << endl;
    cout << nums[0] << endl;


    return 0;
}