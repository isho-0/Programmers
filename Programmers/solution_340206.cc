#include <iostream>

using namespace std;

// [PCCE 기출문제] 2번 / 각도 합치기
void solution_340206() {
    int angle1;
    int angle2;
    cin >> angle1 >> angle2;

    int sum_angle = (angle1 + angle2) % 360;
    cout << sum_angle << endl;
}