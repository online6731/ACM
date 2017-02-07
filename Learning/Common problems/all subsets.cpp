/// finding and printing all subsets of a set
#include <bits/stdc++.h>
using namespace std;

string toBinary (int n){
    string code = "";
    do {
        code.push_back(n % 2 + '0');
    } while (n /= 2);
    reverse(code.begin(), code.end());
    return code;
}

void printSubset (int a[], int n) {
    string code = toBinary(n);
    for (int i = 1; i < code.size(); i++)
        if (code[i] == '1') cout << a[i - 1] << " ";
}

int main(){
    int n;
    cin >> n;
    int numbers[n];
    for (int i = 0; i < n; i++) cin >> numbers[i];
    for (int i = (1 << n); i < (1 << n + 1); i++) {
        cout << i - (1 << n) + 1 << ": ";
        printSubset(numbers, i);
        cout << endl;
    }
    return 0;
}
