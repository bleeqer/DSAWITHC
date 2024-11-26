class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans = 0;
        for (char c : columnTitle) {
            int x = c - 'A' + 1; // 알파벳을 숫자로 변환 ('A'->1, 'B'->2, ...)
            ans = ans * 26 + x;  // 자릿수 변환 (26진수 방식)
        }
        return ans;
    }
};
