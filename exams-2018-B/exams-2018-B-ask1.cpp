/*
Δημιουργείστε μια class tid. 
Κάθε αντικείμενο αυτής της τάξης αντιπροσωπεύει μια συγκεκριμένη ώρα της ημέρας που κρατά τις ώρες (0-24)
,λεπτά (0-60),δευτερόλεπτα(0-60) ως ακέραιους.
(Οι τιμές που δίδονται είναι μέσα στα όρια και δεν χρειάζεται να τις ελέγξετε).
Υλοποιήστε 
α) έναν πλήρη δομητή, 
β) μια μέθοδο ανάκτησης, 
γ)μια μέθοδο που τυπνει την ώρα με τη μορφή ωω:λλ:δδ και την ένδειξη π.μ ή μ.μ 
δ) μια μέθοδο υπερφόρτωσης του τελεστή >= ελέγχει(μόνο την ώρα. Όχι τα λεπτά και τα δευτερόλεπτα) 
αν η ώρα ενός αντικειμένου είναι μεγαλύτερη απο την ώρα ενός άλλου αντικειμένου.
Γράψετε κώδικα δημιουργίας αντικειμένων, κλήσης εκτέλεσης των μεθόδων/συναρτήσεων
*/

#include <iostream>

class tid{
    private:
        int hour;
        int minute;
        int second;

    public:
        // a
        tid(int hour, int minute, int second){
            this -> hour = hour;
            this -> minute = minute;
            this -> second = second;
        }

        // b
        void getAttributes(int& hour, int& minute, int& second){
            hour = this -> hour;
            minute = this -> minute;
            second = this -> second;
        }

        // c
        void showTime(){
            std::printf("%02d:%02d:%02d %s\n", hour, minute, second, (hour <= 12)?"π.μ.":"μ.μ.");
        }

        // d
        bool operator<=(tid obj){
            return this -> hour <= obj.hour;
        }
};

int main(){

    // a
    tid a(1, 2, 3);
    tid b(13, 2, 3);

    // b
    int hour, minute, second;
    a.getAttributes(hour, minute, second);

    // c
    a.showTime();
    b.showTime();

    // d
    a<=b;

    return 0;

}