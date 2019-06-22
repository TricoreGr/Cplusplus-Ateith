// Τι θα λάβουμε ως αποτέλεσμα με την εκτέλεση του 
// παρακάτω προγράμματος.

#include <iostream>
int main(){
    for (int i = -2; i < 3; i++){
        switch (i){
            case 0: std::cout << "0";
            case 1: std::cout << "1"; continue;
            case 2: std::cout << "2"; break;
            default: std::cout << "D"; break;
        }
        std::cout << ".";
    }
    return 0;
}

// Output: D.D.0112.