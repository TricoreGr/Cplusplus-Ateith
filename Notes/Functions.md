[Content](Content.md)

### Συναρτήσεις που δεν επιστρέφουν τιμή
```cpp
void function{
    std::cout << "Hello World!" << std::endl;
}

void print(std::string var){
    std::cout << var << std::endl;
}
```

### Συναρτήσεις που επιστρέφουν τιμή
```cpp
int add(int a, int b){
    return a+b;
}

std::string hi(){
    return "Hello World!";
}
```

### Επιστροφή αποτελεσμάτων μέσω αναφοράς
```cpp
void add(int a, int b, int& res){
    res = a+b;
}

int a;
add(1,2,a);
std::cout << a << std::endl; // a == 3
```

Γενικά μπορούμε να μεταβιβάσουμε τιμές:
- call by value
- call by reference
- call by const reference
- pointers

### Inline functions
```cpp
inline void show(std::string var){
    std::cout << var << std::endl;    
}
```

Το inline είναι απλός μια λέξη κλειδί που προτείνει στον compiler να κάνει την μέθοδο inline, στην περίπτωση που η μέθοδος είναι πολύ μεγάλη τότε ο compiler δεν θα κάνει την μέθοδο inline. Όταν έχουμε μια inline μέθοδο τότε αντί ο compiler να δείχνει προς την μέθοδο όταν αυτή πρέπει να εκτελεστή απλά τοποθετεί τον κώδικα της.

```cpp
inline int add(int a, int b){return a+b};

int a;
a = add(1,2);
std::cout << a << std::endl;
a = add(3,4);
std::cout << a << std::endl;
```

Θα γίνει (ψεύτικη αναπαράσταση το πως θα είναι το εκτελέσιμο)

```cpp
int a;
a = 1+2;
std::cout << a << std::endl;
a = 3+4;
std::cout << a << std::endl;
```

Το συμπέρασμα είναι πως αντί να καλέσει την συνάρτηση τοποθετεί τον κώδικα της συνάρτησης.