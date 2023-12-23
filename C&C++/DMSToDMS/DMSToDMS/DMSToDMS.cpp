#include<iostream>
using namespace std;

typedef struct 
{
	int d,m;
	double s;
}DMSAngle;

void DMSToDMS(double dmsAngle, DMSAngle* dms)
{
    dmsAngle = dmsAngle * 10000;
    int sAngle = (int)dmsAngle;
    dms->d = sAngle / 10000;
    dms->m = (sAngle - dms->d * 10000) / 100;
    dms->s = dmsAngle - dms->d * 10000 - dms->m * 100;
}

int main() {
    double a = 1.40000,b= 13.14520, c=13.14521;
    DMSAngle dmsAngle_a;
    DMSToDMS(a, &dmsAngle_a);

    DMSAngle dmsAngle_b;
    DMSToDMS(b, &dmsAngle_b);

    DMSAngle dmsAngle_c;
    DMSToDMS(c, &dmsAngle_c);

    cout<<dmsAngle_a.d<<" "<<dmsAngle_a.m<<" "<<dmsAngle_a.s<<endl;
    cout<<dmsAngle_b.d<<" "<<dmsAngle_b.m<<" "<<dmsAngle_b.s<<endl;
    cout<<dmsAngle_c.d<<" "<<dmsAngle_c.m<<" "<<dmsAngle_c.s<<endl;
    return 0;
}