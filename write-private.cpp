#include<iostream>
using namespace std;
class C{
public:
    int get_y(){return y;}
    int get_x(){return x;}
    int* getAdrX(){return &x;}
    int* getAdrY(){return &y;}
private:
    int x=0;
    int y=0;
};

int main(){
    int i;
    int *ip = &i;
    C c;

    cout << ip << ";" << &c << ";" << ip+3 << '\n';
    cout << c.getAdrX() << ";" << c.getAdrY() << '\n';

    ip+=3;
    *ip = 25;
    ++ip;
    *ip = 138;
    cout<<c.get_x()<<" "<<c.get_y() <<"\n";
    return 0;
}
