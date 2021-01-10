#include <cassert>
#include <iostream>

int fibonacci_naive(int n) {
    if (n <= 1) return n;

    return fibonacci_naive(n - 1) + fibonacci_naive(n - 2);
}

int fibonacci_fast(int n) {
    if (n <= 1) return n;

    int a = 0, b = 1, c;
    for (int i = 0; i < n - 1; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}

int fibonacci_fast2(int n) {
    int f[n + 2];
    f[0] = 0;
    f[1] = 1;

    for (int i = 2; i <= n; i++) {
        f[i] = f[i - 1] + f[i - 2];
    }
    return f[n];
}

void test_solution() {
    assert(fibonacci_fast(3) == 2);
    assert(fibonacci_fast(10) == 55);
    for (int n = 0; n < 20; ++n)
        assert(fibonacci_fast(n) == fibonacci_naive(n));
}

int main() {
    int n = 0;
    std::cin >> n;

    // std::cout << fibonacci_naive(n) << '\n';
    // test_solution();
    // std::cout << fibonacci_fast(n) << '\n';
    std::cout << fibonacci_fast2(n) << '\n';
    return 0;
}


//    uncomment the line with a call to test_solution, compile the program, and
//    run it. This will ensure that your efficient algorithm returns the same as
//    the naive one for small values of n.