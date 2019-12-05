#include <iostream>
using namespace std;

int main() {
    int N;
    int F;
    while (true) {
        cout << "歡迎來到溫度轉換系統";
        cout << "請輸入你要查詢的攝氏溫度\n";
        cin >> N;
        F = N * 9 / 5 + 32;
        cout << "華氏溫度是" << F << "\n";
    }
}// 學號6555349
