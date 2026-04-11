#include <iostream>
using namespace std;

class Person {
    public:
        string name;
        int age;

    public:
        void work() {
            cout << "Hello from parent class\n";
        }
};

class Student : public Person {
    public:
        void work(){
            cout<<" I am studying/n";
        }
};

int main() {
    Student imran;

    imran.name = "Imran";
    imran.age = 23;
    imran.work();
    return 0;
}