#include <iostream>

using namespace std;

// [PCCE 기출문제] 3번 / 수 나누기
void solution_340205() {
    int number;
    cin >> number;

    int answer = 0;

    while (number >= 10) {
        answer += number % 100;
        number /= 100;
    }

    cout << answer << endl;
}