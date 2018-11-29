#include <iostream>
#include <math.h>
using namespace std;

double func(double x);

int main() {
    double x1=.7;
    double x2=.8;
    double midpt;
    double test;

    // The following lines are a for loop that was used to find the general
    // range to start from.
    /* for(int i=0; i<20; i++){
       double val = 0 + (i*.1);
        cout << func(val) << endl;
    } //closes for(i) loop */

    for (int j=0; j<60; j++) {

        midpt=(x1+x2)/2;
        test= func(x1)*func(midpt);
        if (test < 0) { x2 = midpt; }
        else { x1 = midpt; }
    }

    cout << midpt;
    return 0;
}

double func(double x) {
    return cos(x)-x;
}; //closes function