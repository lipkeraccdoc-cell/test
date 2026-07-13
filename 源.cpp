#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// 反转字符串中 [start, end] 范围内的字符
void reverseRange(string& s, int start, int end) {
    while (start < end) {
        swap(s[start], s[end]);
        start++;
        end--;
    }
}

// 将字符串左移 k 位（三次反转法）
void rotateString(string& s, int k) {
    int n = s.size();
    if (k == 0 || n == 0) return;
    k %= n;  // 处理 k > n 的情况
    reverseRange(s, 0, k - 1);     // 反转前 k 个字符
    reverseRange(s, k, n - 1);     // 反转剩余字符
    reverseRange(s, 0, n - 1);     // 整体反转
}

int main() {
    string s = "abcdefgh";  // 示例输入
    int k = 3;
    string a = "";
    a = s + "lsy";
    rotateString(s, k);
    cout << s << endl;  // 输出结果应为 "456123"
    cout << a << endl;
    return 0;
}