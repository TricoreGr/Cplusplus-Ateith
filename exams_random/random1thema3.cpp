#include <iostream>
using namespace std;

template<typename T>
void function(T v,int n,T *pin1,T *pin2){
    for(int i=0;i<n;i++){
        *pin2=(*pin1)*v;
        pin1++;
        pin2++;
    }
}

int main(){
    int pin1[]={1,2,3,4,5};
    int pin2[5];
    function(2,5,pin1,pin2);
    for(int i=0;i<5;i++){
        std::cout<<"pin1["<<i<<"] = "<<pin1[i]<<endl;
        std::cout<<"pin2["<<i<<"] = "<<pin2[i]<<endl;
    }
}