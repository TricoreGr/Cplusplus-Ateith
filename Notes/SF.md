[Content](Content.md)

### Static Functions

Οι στατικές μέθοδοι δεν μπορούν να επιδράσουν σε στιγμιότυπα της κλάσης

```cpp
#include <iostream>

class A{
    public:
        static void hi(){
            std::cout << "hi" << std::endl;
        }
};

int main(){

    A::hi();
    
    return 0;

}
```

### Static Variables

Οι στατικές μεταβλητές ανήκουν στην κλάση και όχι στα στιγμιότυπα της κλάσης. Συνήθως χρησιμοποιούνται όταν θέλουμε κοινές μεταβλητές μεταξύ στιγμιοτύπων.

```cpp
#include <iostream>

class A{
    public:
        static int a;
        static void hi(){
            std::cout << a << std::endl;
        }
        void show(){
            std::cout << a << std::endl;
        }
};

// Πρέπει πάντα να αρχικοποιούμε πάντα τις στατικές
// μεταβλητές έξω από την κλάση γιατί διαφορετικά
// δεν μπορεί να δεσμευθεί η μνήμη που χρειάζεται.
int A::a = 0;

int main(){

    A::a = 100;

    A::hi();

    A obj;
    obj.show();
    
    return 0;

}

```
