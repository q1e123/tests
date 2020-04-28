#include<iostream>
using namespace std;
class C{
public:
    int get_y(){return y;}
    int get_x(){return x;}
private:
    int x=0;
    int y=0;
};

int main(){
    bool b;
    bool *bp = &b;
    C c;
    bp+=16;
    *bp = 1;
    bp-=4;
    *bp=1;
    cout<<c.get_x()<<" "<<c.get_y() <<"\n";
    return 0;
}
