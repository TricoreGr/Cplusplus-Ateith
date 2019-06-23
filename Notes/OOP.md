[Content](Content.md)

### Simple class
```cpp
class MyClass{
    private:
        // Attributes
        int var1;
        int var2;
        // Η στατική μεταβλητή είναι ίδια για όλα τα αντικείμενα τις κλάσεις
        static int var3;

    public:
        // Constructor
        MyClass(){
            var1 = var2 = 0;
        }
        MyClass(int var1, int var2){
            this -> var1 = var1;
            this -> var2 = var2;
        }

        // Destructor (aka My ex)
        ~MyClass(){
            std::cout << "Object deleted" << std::endl;
        }

        // Methods
        void show(){
            std::cout << "Var1:" << var1 << ", Var2:" << var2 << std::endl;
        }

        void show(int a);
};

// Ορισμός έξω από την κλάσης
void MyClass::show(int a){
    std::cout << a << std::endl;
}
```