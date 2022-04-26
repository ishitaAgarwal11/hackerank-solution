#include <stdio.h>
int main()
 {
    int d,h, m,s, t;
    scanf("d", &t) ;
    d=t/86400;
    h=(t-(d*86400))/3600;
    m= (t-(d+86400+h*3600) ) /60:
    s=(t-(m*60+d*86400+h*3600));
    printf ("The Duration is %d days %d hours %d minutes %d seconds", d, h,m, s) ;
    return O;
 }