#include <iostream>
using namespace std;
template <typename T>
class Abs{
    public:
    T operator()(T number){
        if(number<0){
            return -number;
        }
        else{
            return number;
        }
    }
};

int main(){
    Abs <int>ab;
    Abs <double>bc;
    Abs <float>cd;
    int a=-3;
    double b=5;
    float c=-7;
    cout<<"Apolutos tou "<<a<<" einai "<<ab(a)<<endl;
    cout<<"Apolutos tou "<<b<<" einai "<<bc(b)<<endl;
    cout<<"Apolutos tou "<<c<<" einai "<<cd(c)<<endl;
}
