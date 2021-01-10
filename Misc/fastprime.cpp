#include <math.h>

int isprime(int N) {
    if  (!(N & 1) && N != 2)
        return 0;
    for (int i = 3; i<= sqrt(N); i += 2) {
        if (!(N % i))
            return 0;
    }
    return 1;
}