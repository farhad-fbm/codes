#include <bits/stdc++.h>
using namespace std;
class A {
    public:
    void get() { cout << "hello"; }
};
class B : public virtual A {
};
class C : public virtual A {
};
// Virtual Base Class
// used in multiple inheritances to prevent ambiguity between multiple instances.

class D : public B, public C {
    //  here get(),as single instance
};

int main() {
    D d;
    d.get(); 
    return 0;
};

// virtual public == public virtual