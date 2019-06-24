[Content](Content.md)

### Virtual Methods

Στο παράδειγμα παρατηρούμε πως έχουμε ένα δείκτη τύπου κλάσης Α και στη μια περίπτωση δείχνουμε σε ένα αντικείμενο της κλάσης Β και κατόπιν στην κλάση Α, η μέθοδο που θα εκτελεστεί και στις δύο περιπτώσεις είναι η μέθοδος της Α κλάσης.

```cpp
#include <iostream>

class A{
    public:
        void fun(){
            std::cout << "Class A" << std::endl;
        }
};

class B : public A{
    public:
        void fun(){
            std::cout << "Class B" << std::endl;
        }
};

int main(){

    A* pointer;

    A obj1;
    B obj2;

    pointer = &obj2;
    // Κλήση της συνάρτησης A::fun()
    pointer -> fun();

    // Κλήση της συνάρτησης A::fun()
    pointer = &obj1;
    pointer -> fun();
    
    return 0;

}
```

Αν θέλουμε να εκτελούμε την μέθοδο του αντικειμένου που δείχνουμε θα πρέπει να δηλώσουμε την κλάση Α ως Virtual με αυτόν τον τρόπο θα γίνει δυναμική σύνδεση και θα εκτελεστεί η συνάρτηση του αντικειμένου που δείχνουμε.

```cpp
#include <iostream>

class A{
    public:
        virtual void fun(){
            std::cout << "Class A" << std::endl;
        }
};

class B : public A{
    public:
        void fun(){
            std::cout << "Class B" << std::endl;
        }
};

int main(){

    A* pointer;

    A obj1;
    B obj2;

    pointer = &obj2;
    // Κλήση της συνάρτησης B::fun()
    pointer -> fun();

    // Κλήση της συνάρτησης A::fun()
    pointer = &obj1;
    pointer -> fun();
    
    return 0;

}
```

Προσοχή, οι destructor που ανήκουν σε βασικές κλάσης θα πρέπει να είναι πάντα virtual για να αποφύγουμε την δημιουργία σκουπιδιών.

Επίσης μια κλάση είναι γνήσια εικονική όταν δηλώνουμε πως είναι εικονική και στο τέλος βάζουμε τον τελεστή =0.

```cpp
virtual void function()=0;
```
