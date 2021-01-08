#include <iostream>
using namespace std;
class Counter{
    public: 
    Counter(int sec){
        second=sec;
    }
    void afis(){
    cout<<second<<"Seconds"<<endl;
    }
    int second;
};
int operator+(Counter c1, int s){
    return c1.second+s;
}

int main()
{
    Counter c1(20);
    int second = c1+ 40;
    cout<<second;
    return 0;
}
