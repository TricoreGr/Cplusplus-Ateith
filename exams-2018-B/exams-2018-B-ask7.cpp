// Για την τάξη MyA να υλοποιήσετε τις παρακάτω δημόσιες μεθόδους
// a) έναν δομητή που δίνει τιμές στα μέλη της τάξης
// b) μια μέθοδο που εμφανίζει το περιεχόμενο των μελών 
// αντικειμένου τύπου MyA

#include <iostream>

class MyA
{
    int a[100];
    int n;
    
    public:
        // a
        MyA()
        {
            n = 100;
            
            for(int i = 0; i < n; i++)
            {
                a[i] = i;
            }
        }

        // b
        void show()
        {
            std::cout << "N = " << n << std::endl;
            
            for (int i = 0; i < n; i++)
            {
                std::cout << a[i] << " ";
            }
            
            std::cout << std::endl;
        }
};

int main()
{
    MyA a;
    a.show();

    return 0;
}
