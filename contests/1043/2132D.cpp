#include <bits/stdc++.h>
using namespace std;

long long sumDigits(long long n) {
    if (n <= 0) return 0;
    
    string s = to_string(n);
    
    long long res = 0;
    int len = s.size();
    
    for (int i = 0; i < len; i++) {
        int d = s[i] - '0';
    
        long long left = 0;
        if (i > 0) left = stoll(s.substr(0, i));
    
        long long right = 0;
        if (i + 1 < len) right = stoll(s.substr(i + 1));
    
        long long p10 = pow(10, len - i - 1);

        res += left * 45 * p10;
        res += d * (right + 1);
        res += (d * (d - 1) / 2) * p10;
    }
    return res;
}

long long solve(long long k) {
    long long len = 1;
    long long cnt = 9;
    long long digits = cnt * len;

    long long totDig = 0;
    long long totSum = 0;
    long long start = 1;

    while (k > digits) {
        totDig += digits;
        totSum += sumDigits(start + cnt - 1) - sumDigits(start - 1);
        k -= digits;

        start *= 10;
        len++;
        cnt *= 10;
        digits = cnt * len;
    }

    long long taken = (k + len - 1) / len;
    long long lastNum = start + taken - 1;

    totSum += sumDigits(lastNum - 1) - sumDigits(start - 1);

    long long used_digits = (taken - 1) * len;
    long long rem = k - used_digits;

    string last = to_string(lastNum);
    
    for (int i = 0; i < rem; i++) {
        totSum += last[i] - '0';
    }

    return totSum;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long k;
        cin >> k;
        cout << solve(k) << "\n";
    }

    return 0;
}
