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