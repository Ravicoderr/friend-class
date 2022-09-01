#include <iostream>
using namespace std;
class complex;
class callculater
{
public:
    int sumreal(complex, complex);
};
class complex
{
    int a, b;

public:
    friend int callculater::sumreal(complex, complex);
    // or i can make whole class as friend--- friend callculater;
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void print()
    {
        cout << "the complex num is " << a << " + " << b << "i" << endl;
    }
};
int callculater::sumreal(complex c1, complex c2)
{
    return (c1.a + c2.a);
}

int main()
{
    complex ravi, mohan;
    ravi.setnumber(3, 4);
    ravi.print();

    mohan.setnumber(8, 6);
    mohan.print();
    callculater sum;
    int res = sum.sumreal(ravi, mohan);
    cout << "the result of real part is " << res << endl;

    return 0;
}
