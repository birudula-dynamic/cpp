#include<iostream>
using namespace std;

class cse6 {
    int i;
    public:
        void seti(int n) { i = n; }
        friend int main();  
};

cse6 newfun()
{
    cse6 x;
    x.seti(10);
    return x;
}

int main()
{
    cse6 obj;
    obj = newfun();
    cout << "now we are in main..... printing i=" << obj.i << endl;
    return 0;
}

