#include <iostream>
using namespace std;

class Int
{
    friend Int operator+(const Int &left, const Int &right);
    friend Int operator-(const Int &left, const Int &right);
    friend Int operator*(const Int &left, const Int &right);
    friend Int operator/(const Int &left, const Int &right);
    friend Int operator%(const Int &left, const Int &right);
    friend ostream& operator<<(ostream &out, const Int &data);

public:
    Int() { x = 0; }
    Int(int x) { this->x = x; }
    int getX() const { return x; }
    void setX(int x) { this->x = x; }
    void doubleUp() { x *= 2; }

    Int& operator++() // prefix
    { 
        this->x++;
        return *this;
    }

    Int operator++(int) // postfix
    {
        Int temp = *this;
        ++*this;
        return temp;
    }

private:
    int x;
};

Int operator+(const Int &left, const Int &right)
{
    return Int(left.x + right.x);
}

Int operator-(const Int &left, const Int &right)
{
    return Int(left.x - right.x);
}

Int operator*(const Int &left, const Int &right)
{
    return Int(left.x * right.x);
}

Int operator/(const Int &left, const Int &right)
{
    return Int(left.x / right.x);
}

Int operator%(const Int &left, const Int &right)
{
    return Int(left.x % right.x);
}

ostream& operator<<(ostream &out, const Int &data)
{
    out << data.x;
    return out;
}

int main()
{
    int x = 23;
    Int y = 23;

    Int z = x + y;
    cout << sizeof(x) << " == " << sizeof(y) << '\n';
    cout << x << " == " << y << '\n';
    cout << z << '\n';
    cout << ++z << '\n';
    cout << z++ << '\n';
    cout << z % 10 << '\n';

    return 0;
}