#include <iostream>
using namespace std;

class Dog
{
public:
    string Name;

    void ShowProfile()
    {
        cout << "名前：" << Name << endl;
    }
};

int main()
{
    Dog dog;

    dog.Name = "ポチ";

    dog.ShowProfile();

    return 0;
}