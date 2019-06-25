[Content](Content.md)

### Φίλες συναρτήσεις

Οι φιλικές συναρτήσεις μας βοηθούν όταν θέλουμε να έχουμε πρόσβαση σε protected ή private πεδία μιας κλάσης.

```cpp
#include <iostream>

// Δηλώνουμε πως έχουμε την κλάση B γιατί διαφορετικά δεν
// θα ξέρει ο compiler σε τι αναφερόμαστε στο ορισμό
// της φιλικής συνάρτησης.
class B;

class A{
    private:
        int a;
    public:
        A(int a) : a(a){}

        // Δηλώνουμε ποια είναι η φιλική συνάρτηση.
        friend void show(A a, B b);
};

class B{
    private:
        int b;
    public:
        B(int b) : b(b){}

        // Δηλώνουμε ποια είναι η φιλική συνάρτηση.
        friend void show(A a, B b);
};

// Ορίζουμε την συνάρτηση
void show(A a, B b){
    std::cout << a.a << "," << b.b << std::endl;
}



int main(){

    A a(1);
    B b(2);
    show(a,b);
    
    return 0;

}
```

### Φίλες κλάσεις

Όταν ορίζουμε μια κλάση Α ως φίλη στην κλάση Β τότε η κλάση Α μπορεί να έχει πρόσβαση σε protected και private πεδία της κλάσης.

```cpp
#include <iostream>

class A{
    private:
        int a;
    public:
        A(int a) : a(a){}
        // Ορίζουμε την κλάση Β ως φίλη
        friend class B;
};

class B{
    public:
        void show(A a){
            // Μπορούμε να έχουμε πρόσβαση σε private και protected πεδία
            std::cout << a.a << std::endl;
        }
};

int main(){

    A a(1);
    B b;
    b.show(a);
    
    return 0;

}
```
