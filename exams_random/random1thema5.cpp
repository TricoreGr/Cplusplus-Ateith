#include <iostream>
using namespace std;
class Box{
    public:
        float m;
        float p;
        float y;
};
class Konteiner{
    private:
        Box *p;
        int n;
        float vol;

    public:
        Konteiner(int n,float vol){
            p=new Box[n];
            this->n=n;
            this->vol=vol;
            for (int i=0; i<n;i++){
                p[i].m=0;
                p[i].p=0;
                p[i].y=0;
            }
        }
        ~Konteiner(){
            cout<<"The object is fucking destructed"<<endl;
        }
        Konteiner(const Konteiner &obj){
            this->p=obj.p;
            this->n=obj.n;
            this->vol=obj.vol;
            cout<<"The copy constructor is called"<<endl;
        }
        void getAttributes(int& n,float& vol){
            n=this->n;
            vol=this->vol;
        }
        float getVolume(){
            float sum=0;
            for(int i=0;i<n;i++){
                sum=sum+(p[i].y*p[i].p*p[i].m);
            }
            return vol-sum;
        }
        void addBox(Box& b){
             for(int i=0;i<n;i++){
                 if(p[i].m==0 && p[i].p==0 && p[i].y==0){
                     p[i].m=b.m;
                     p[i].p=b.p;
                     p[i].y=b.y;
                     return;
                 }
             }
            cout<<"Box wasn't added"<<endl;
        }
};
int main(){
    Konteiner k(2,10);
    Box box1{1,1,1};
    Box box2{1,1,1};
    Box box3{1,1,1};
    int n;
    float vol;
    k.getAttributes(n,vol);
    cout<<"Attributes of container "<<n<<" and "<<vol<<endl;
    cout<<"Volume "<<k.getVolume()<<endl;
    k.addBox(box1);
    k.addBox(box2);
    k.addBox(box3);
    cout<<"Volume "<<k.getVolume()<<endl;
    Konteiner k2=k;
}