/// finding sum of two HEX number
#include <bits/stdc++.h>
using namespace std;
string sum(string firstNum, string secondNum) {
    for (int i = firstNum.size() - 1, j = secondNum.size() - 1; i >= 0 || j >= 0; i--, j--) {
        firstNum[i] += (j >= 0 ? secondNum[j] - (secondNum[j] > '9' ? 'A' : '0') : '0')
        if ('9' < firstNum[i] && firstNum[i] < 'A') firstNum[i] += 7;
        if ('F' < firstNum[i] && 0 < i) {
            firstNum[i - 1]++;
            firstNum[i] = firstNum[i] - 'F' + '0' - 1;
        }
        else if (firstNum[i] > 'F' && i == 0) {
            firstNum[i] = firstNum[i] - 'F' + '0' - 1;
            if ('9' < firstNum[i] && firstNum[i] < 'A') firstNum[i] -= 7;
            firstNum = "1" + firstNum;
        }
    }
    return firstNum;
}
int main(){
    string num1, num2, answer;
    cout << "Input two your numbers in Hex form." << endl;
    cout << "First Number: ";
    cin >> num1;
    cout << "Second Number: ";
    cin >> num2;
    answer = sum(num1, num2);
    cout << answer;
    return 0;
}
