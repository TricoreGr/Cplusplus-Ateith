[Content](Content.md)

### Operator Overloading

Η υπερφόρτωση τελεστών είναι όταν δίνουμε επιπλέον λειτουργίες στους τελεστές. Συνήθως χρησιμοποιούμε την υπερφόρτωση τελεστών όταν θέλουμε να είναι συμβατή με τύπους οριζόμενους από τον χρήστη.

```cpp
#include <iostream>

class MyClass{
    private:
        int a;
    public:
        MyClass(int a){
            this -> a = a;
        }

    // Δηλώνουμε πως ο τελεστής == θα επιστρέφει bool τιμή και θα
    // παίρνει ως παράμετρο ένα αντικείμενο της κλάσης
    bool operator==(MyClass obj){
        return this -> a == obj.a;
    }
};

int main(){

    MyClass obj1(1);
    MyClass obj2(1);

    std::cout << (obj1==obj2);

    return 0;

}
```