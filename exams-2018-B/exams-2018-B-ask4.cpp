// Γράψετε ένα πρόγραμμα το οποίο διαβάζει από το πληρκτρολόγιο
// μια γραμμή κειμένου και στην συνέχεια την εμφανίζει στη οθόνη
// αλλά χωρίς τους αλφαριθμητικούς χαρακτήρες.

#include <iostream>

int main(){

    std::string input;
    std::cin >> input;

    for(int i = 0;i < input.length();i++){
        if(input[i] >= '0' && input[i] <= '9' || input[i] >= 'a' && input[i] <= 'z' || input[i] >= 'A' && input[i] <= 'Z'){
            std::cout << input[i];
        }
    }

    std::cout << std::endl;

    return 0;

}