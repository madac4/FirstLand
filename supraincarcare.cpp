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
Counter operator +(Counter c1, Counter c2){
    return Counter(c1.second + c2.second);
}
int main()
{
    Counter c1(20);
    Counter c2(20);
    Counter c3 = c1+c2;
    c3.afis();
    return 0;
}
