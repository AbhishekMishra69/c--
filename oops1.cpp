#include <iostream>
using namespace std;

class Demo {
public:
    void hello() {
        cout << "Hello World";
    }
};

int main() {
    Demo ob;
    ob.hello();
    return 0;
}