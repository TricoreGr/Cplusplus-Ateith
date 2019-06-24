[Content](Content.md)

### Απαριθμήσεις (enumerations)

Οι απαριθμήσεις χρησιμοποιούνται για να έχουμε λιγότερα προβλήματα όταν θέλουμε να έχουμε περιορισμένο αριθμό επιλογών και όταν θέλουμε να έχουμε πιο κατανοητό κώδικα.

```cpp
int day = 0;
if(day == 0){
    std::cout << "Monday" << std::endl;
}
```

με απαριθμήσεις

```cpp
enum meres {DEY,TRI,TET,PEP,PAR,SAV,KYR};
meres day = DEY;
if(day == DEY){
    std::cout << "Monday" << std::endl;
}
```

### ∆ομές (Structures)

Οι δομές μας βοηθούν όταν θέλουμε να δημιουργήσουμε τις δικές μας δομές (ντα) έτσι ώστε να μην χρειάζεται να δημιουργήσουμε class.

```cpp
struct myStruct{
    int var1;
    int var2;
    float var3;
    int addvar1var2(){
        return var1+var2;
    }
}

myStruct var = {1,2,3.3};
std::cout << var.addvar1var2() << std::endl;
std::cout << var.var1 << std::endl;
```
