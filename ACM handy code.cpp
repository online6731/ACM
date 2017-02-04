/***************** FINDING DIVISORS OF N ****************/
// This function get number N and vector A then compute DIVISORS OF N and put them in A
// Time complexity : O(2 * sqrt(n))

void find_Divisors(long long N, vector <long long>& A) {
    for (long long i = 1; i < sqrt(N); i++)
        if (N % i == 0)
            A.push_back(i);

    for (long long i = sqrt(N); i > 0; i--)
        if (N % i == 0)
            A.push_back(N / i);
}
/********************************************************/


/***************** PRIMILITY TEST ***********************/
// This function get number N return true if N was prime otherwise return false
// Time complexity : O(sqrt(n))

bool is_Prime(long long N) {
    for (long i = 2; i <= sqrt(N); i++) if (N % i == 0) return false;
    return (N == 1 ? false : true);
}
/********************************************************/

/** getline(cin, string) : Input a string with spaces **/

/** ios::sync_with_stdio(false) ************************/

/** __builtin_popcount(n) ******************************/

/** copy(a, a + n, ostream_iterator<int>(cout, "  ")) **/

/***************** Binomial Coefficient ****************/
// This function get number N ans M then return C(n, m)
// Time complexity : O(N * M * (N - M))

long long Choose(long long N, long long M) {
    if (N < M) return 0;
    long long ans = 1;
    for (long i = 1; i <= N; i++) ans *= i;
    for (long i = 1; i <= M; i++) ans /= i;
    for (long i = 1; i <= N - M; i++) ans /= i;
    return ans;
}
/********************************************************/

/***************** Catalan Numbers **********************/
// This function get number N then return nth of Catalan Numbers
// Time complexity : O(N)

long long Catalan(long long N){
    if(N == 0)
        return 1;
    return (((4 * N - 2) * Catalan(N - 1)) / (N + 1));
}
/********************************************************/

/*************** Greatest Common Divisors ***************/
// This function get number A and B then return gcd(A, B)
// Time complexity : O(log(A + B))

long long GCD (long long A, long long B) {
    while(B) {
        swap(A, B);
        B = A % B;
    }
    return A;
}
/********************************************************/

/*********************** Power **************************/
// This function get number A and B then return A ^ B
// Time complexity : O(log(B))

long double Power(long double a, int n){
    long double ans = 1;
    while (n) {
        if (n % 2 == 1) ans *= a;
        a *= a;
        n /= 2;
    }
    return ans;
}
/********************************************************/

/*********************** horner *************************/
// This function get number n and array of coefficients and return answer!!
// Time complexity : O(n)

long double horner_function(int n, double coefficients[], double x) {
    long double y = 0;
    for (int i = n; i >= 0; i--) y = coefficients[i] + y * x;
    return y;
}
/********************************************************/
