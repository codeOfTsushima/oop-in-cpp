#include <iostream>
using namespace std;

class Base {
private:
    int privateData;

protected:
    int protectedData;

public:
    int publicData;

    void setPrivate(int p) {
        privateData = p;
    }

    int getPrivate() {
        return privateData;
    }
};

class Derived : public Base {
public:
    void setProtected(int p) {
        protectedData = p;
    }

    void display() {
        cout << "Public Data: " << publicData << "\n";
        cout << "Protected Data: " << protectedData << "\n";
        cout << "Private Data: " << getPrivate() << "\n";
    }
};

int main() {
    Derived obj;

    obj.publicData = 10;
    obj.setProtected(20);
    obj.setPrivate(30);

    obj.display();

    return 0;
}