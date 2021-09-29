#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double x1,y1,x2,y2,x3,y3,a,b,c,P, S, p;
    cout << "Vvedi koordinati tochek)"<<endl;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    a = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    b = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
    c = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
    P = a + b + c;
    p = (a + b + c) / 2;
    S = sqrt(p * (p - a) * (p - b) * (p - c));
    cout <<"Vot chto vishlo:"<<endl<< "Perimetr="<<P <<endl<<"Ploshad="<< S;
}

