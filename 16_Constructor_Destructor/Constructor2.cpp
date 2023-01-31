#include <iostream>

class SimpleClass
{
private:
    int num1;
    int num2;
public:
    SimpleClass(int n1 = 0, int n2 = 0)
    {
        num1 = n1;
        num2 = n2;
    }
    void ShowData() const
    {
        std::cout << num1 << ' ' << num2 << std::endl;
    }
};

int main()
{
    SimpleClass sc1();
    SimpleClass mysc=sc1();
    mysc.ShowData();
    return 0;
}

SimpleClass sc1()
{
    SimpleClass sc(20, 30);
    return sc;
}