// Με ποιους τρόπους μπορεί να περάσει μια απλή μεταβλητή
// ως παράμετρο σε συνάρτηση; Δώσετε από ένα παράδειγμα για
// κάθε τρόπο.

// Ως τιμή
void function(int a){}
function(10);

// Ως αναφορά
void function(int& a){}
function(10);

// Ως σταθερή αναφορά
void function(int const& a){}
function(10);

// Ως rvalue αναφορά 
// (Το αναφέρεις αν νιώθεις gentleman, δεν είναι στην ύλη)
void function(int&& a){}