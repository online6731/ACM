#include <bits/stdc++.h>
using namespace std;
long long recurcive_factoriel (long long n) {
    return (n > 1 ? n * recurcive_factoriel (n - 1) : 1);
}
long long recursive_sum (long long n) {
    return (n > 1 ? n + recursive_sum(n - 1) : 1);
}
long long recursive_gcd (long long a, long long b) {
    if (a < b) swap(a, b);
    return (b != 0 ? recursive_gcd(b, a - b) : a);
}
long long recursive_choose (long long a, long long b) {
    return (b == 0 || a == b ? 1 : a < b ? 0 : recursive_choose(a - 1, b - 1) + recursive_choose(a - 1, b));
}
long long recursive_fast_power (long long a, long long b) {
    return (b == 0 ? 1 : recursive_fast_power(a * a, b / 2) * (b % 2 == 1 ? a : 1));
}
long long recursive_power (long long a, long long b) {
    return (b == 0 ? 1 : a * recursive_power(a, b - 1));
}

int main() {
    int n, m;
    while (cin >> n >> m && m + n != 0) cout << recursive_gcd (n, m) << endl;
    return 0;
}
