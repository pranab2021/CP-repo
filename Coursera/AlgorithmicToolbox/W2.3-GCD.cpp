#include <iostream>
using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b); 
     
}

int main()
{
    int a , b;
    cin >> a >> b;

    //here a>b or b>a does not matter
    //because a will be the greater in the algo's 1st recursion. for example:-
    //gcd(25,100)
    //=gcd(100,25) here 25%100=25
    cout<<gcd(a, b);
    return 0;
}

/*
    let d be the GCD of a & b 
    let a>b
    now    a/b   =>    a   =   a'  +   bq
    
    dividing both sides by d

=>  a/d   =   (a'  +   bq)/d
=>  a/d   =   a'/d  +   q*(b/d)

    a/d and b/d are in p/q form where q=1 since d is their GCD
    
=>  a/d   -   q*(b/d) =   a'/d
=>  X = a'/d where X is a positive integer

    this also implies that a'/d is also an integer (in p/q form where q=1)

    so it is proved that the remainder of  a/b i.e. is also divisible by the gcd of a and b
    i.e. a,b,c have common gcd (that you are going to get it at the end of calculation ---- consider example2)

    so instead of doing gcd(a,b) {considering a>b} we can do gcd(b,a') {here we cant do gcd gcd(a',b)  because a'<b}
    further repeating this same we ultimately get the remainder part to be 0 i.e. in the last gcd i.e. gcd(x,y) where 
    the remainder part is 0 i.e gcd(x,y) = gcd (x,0) where x will be the gcd of gcd(a,b).

    The largest common divisor of k and zero is k. So gcd(k, 0) = gcd(0,k) = k.

    Example1
    gcd(100,25)
    =gcd(25,0) here 100%25=0
    where 25 is the gcd(100,25)

    Example2
    gcd(100,70)
    =gcd(70,30)
    =gcd(30,10)
    =gcd(10,0)

    here we get the gcd=10.
    Observation:- all the remainders and those numbers a & b have the same GCD. 
    i.e., 100, 70, 30, 10, 0 have gcd=10

*/
