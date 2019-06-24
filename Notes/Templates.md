[Content](Content.md)

### Templates

#### Template functions

Τα templates μας επιτρέπουν να χρησιμοποιούμε γενικού τύπου μεταβλητές. Σε αντίθεση με την υπερφόρτωση συναρτήσεων που πρέπει να δημιουργήσουμε πολλές συναρτήσεις με διαφορετικούς τύπους, τα templates μπορούν να χρησιμοποιηθούν έτσι ώστε να γράψουμε μια φορά την συνάρτηση και να μπορούμε να χρησιμοποιήσουμε διαφορετικούς τύπους.

```cpp
#include <iostream>

// Ορίζουμε το template
// To T σημαίνει πως ο τύπος αλλάζει
template<typename T>

void fun(T var){
    std::cout << var << std::endl;
}

int main(){
    fun(10);
    fun(10.1);

    return 0;
}
```

Στο παράδειγμα βλέπουμε πως καταφέραμε να περάσουμε int και float στην ίδια συνάρτηση χωρίς υπερφόρτωση

#### Template classes

```cpp
#include <iostream>

template<typename T, typename U>
class MyClass{
    private:
        T var1;
        U var2;
    public:
        MyClass(T var1, U var2){
            this -> var1 = var1;
            this -> var2 = var2;
        }

        void add(){
            std::cout << var1+var2 << std::endl;
        }
};


int main(){

    MyClass<int, int> obj1(1, 2);
    MyClass<float, int> obj2(1.3, 2);
    MyClass<char, char> obj3('a', 'b');

    obj1.add();
    obj2.add();
    obj3.add();

    return 0;

}
```
