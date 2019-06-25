#include <iostream>

using namespace std;

class Box{
    public:
        float m,p,y;
};



class Container{
    private:
        Box *p;
        int n;
        float vol;

    public:
        Container(int n, float vol){
            this -> n = n;

            p = new Box[n];
            for(int i=0; i<n; i++){
                p[i].m = 0;
                p[i].p = 0;
                p[i].y = 0;
            }

            this -> vol = vol;
        }


        Container(const Container& other){
            cout << "Copy constructor called" << endl;
            n = other.n;
            vol = other.vol;
            
            p = new Box[n];
            for (int i=0; i<n; i++)
                p[i] = other.p[i];
        }


        ~Container(){
            cout << "destroyeeeeeeeeeeeed" << endl;   
        }


        void getValues(Box*& p, int& n, float& vol){
            n = this -> n;
            vol = this -> vol;
            p = this -> p;
        }


        float freeVolume() {
            float currentVolume = 0.0f;

            for (int i=0; i<n; i++) 
                currentVolume += (p[i].m * p[i].p * p[i].y);

            return vol - currentVolume;
        }

        void addBox(Box& box) {
            for (int i=0; i<n; i++){
                if ( p[i].m==0 && p[i].p==0 && p[i].y==0 ){
                    p[i].m = box.m;
                    p[i].p = box.p;
                    p[i].y = box.y;
                    cout << "Box was added" << endl;
                    return;
                }
            }

            cout << "No more space, box wasn't added" << endl;
        }


};

int main () {
    Container c(2, 1000);

    //add box test
    Box b1{2,10,5.5f};
    c.addBox(b1);

    //copy constructor test
    Container c2 = c;

    //get values test
    Box* p;
    int n;
    float vol;
    c2.getValues(p, n, vol);
    cout << endl << "Boxes: " << endl;
    for (int i=0; i<n; i++){
        cout << "Box" << i+1 << " m: " << p[i].m << endl;
        cout << "Box" << i+1 << " y: " << p[i].y << endl;
        cout << "Box" << i+1 << " p: " << p[i].p << endl << endl;
    }
        
    //available volume test
    cout << "Available volume: " << c.freeVolume() << endl;

    return 0;
    
}
