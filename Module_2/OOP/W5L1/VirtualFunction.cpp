#include <iostream>
using namespace std;

class grandParent{

};

class parent : public grandParent{
    virtual void foo() = 0;
};

class child : public parent{
    public:
        void foo() override {
            cout<<"hello\n";
        }
};

int main(){
    child c;
    //parent p; can't instantiate abstract class
    c.foo();
    return 0;

}