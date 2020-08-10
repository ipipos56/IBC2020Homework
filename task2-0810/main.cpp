#include <bits/stdc++.h>

using namespace std;

double sq(double a)
{
    return a*a;
}

int main()
{
    double x1,y1,x2,y2,x3,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    double side1,side2,side3;
    side1 = sqrt(sq(x1-x2) + sq(y1-y2));
    side2 = sqrt(sq(x1-x3) + sq(y1-y3));
    side3 = sqrt(sq(x2-x3) + sq(y2-y3));
    if(side1 + side3 > side2 && side1 + side2 > side3 && side3 + side2 > side1)
        cout<<abs(x1*y2+x2*y3+x3*y1 - x2*y1-x3*y2-x1*y3)/2;
    else
        cout<<"This triangle does not exist";
}
