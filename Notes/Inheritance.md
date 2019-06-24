[Content](Content.md)

### Κληρονομικότητα

#### Απλό παράδειγμα κληρονομικότητας

```cpp
#include <iostream>

class A{
    private:
        int a;
    public:
        A(int a){
            this -> a = a;
        }

        int getA(){
            return a;
        }

        void setA(int a){
            this -> a = a;
        }
};

class B : public A{
    private:
        int b;
    public:
        // Πριν εκτελεστή ο κατασκευαστής της κλάσης B θα εκτελεστή ο κατασκευαστής της κλάσης A.
        // Είναι καλή πρακτική να καλούμε τον κατασκευαστή της κλάσης που κληρονομήσαμε αλλά ένας 
        // λόγος επιπλέον που το κάνουμε στην συγκεκριμένη περίπτωση είναι επειδή το πεδίο a είναι
        // protected αυτό σημαίνει πως δεν μπορούμε να έχουμε πρόσβαση σε αυτό το πεδίο από την κλάση B.
        B(int a, int b) : A(a){
            this -> b = b;
        }

        int getB(){
            return b;
        }

        void setB(int b){
            this -> b = b;
        }

};

int main(){

    B obj(1,2);
    std::cout << obj.getA() << std::endl;
    std::cout << obj.getB() << std::endl;

    return 0;

}
```

#### Πολλαπλή κληρονομικότητα

```cpp
#include <iostream>

class A1{
    public:
        int a1 = 1;
        int var = 10;
};

class A2{
    public:
        int a2 = 2;
        int var = 20;
};

class A1A2 : public A1, public A2{
    public:
        void show(){
            std::cout << a1 << "," << a2 << std::endl;

            // Αυτό θα βγάλει σφάλμα γιατί υπάρχουν δύο μεταβλητές με το ίδιο
            // όνομα, για να λύσουμε αυτό το πρόβλημα απλά πρέπει να ορίσουμε
            // ποιας μεταβλητή θέλουμε.
            std::cout << var << std::endl;

            // Σωστό
            std::cout << A1::var << std::endl;
        }
};

int main(){

    A1A2 obj;
    obj.show();

    return 0;

}
```

#### Abstract

Για να γίνει μια κλάση αφηρημένη πρέπει να υπάρχει τουλάχιστον μια pure [virtual](Virtual.md) μέθοδος στην κλάση.

Θυμίζω πως οι αφηρημένες κλάσεις χρησιμοποιούνται όταν δεν θέλουμε μια κλάση να κάνει αντικείμενα, δηλαδή να την χρησιμοποιούμε μόνο ως μια γενική περιγραφή για τις κλάσεις που πρόκειται να την κληρονομήσουν.

```cpp
#include <iostream>

class A{
    private:
        int a;
    public:
        virtual void function()=0;

};

int main(){

    // Λάθος δεν γίνεται να δημιουργήσουμε αντικείμενο της κλάσης A γιατί είναι αφηρημένη
    A obj;
    
    return 0;

}
```
