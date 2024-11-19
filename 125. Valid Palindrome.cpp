class Solution {
public:
    bool isPalindrome(string s) {
        int start = 0;          // 시작 포인터
        int end = s.size() - 1; // 끝 포인터

        while (start <= end) {
            // 시작 포인터가 알파벳/숫자가 아니면 다음 문자로 이동
            if (!isalnum(s[start])) {
                start++;
                continue;
            }

            // 끝 포인터가 알파벳/숫자가 아니면 이전 문자로 이동
            if (!isalnum(s[end])) {
                end--;
                continue;
            }

            // 대소문자를 무시하며 두 문자가 다른 경우 펠린드롬이 아님
            if (tolower(s[start]) != tolower(s[end])) {
                return false;
            }

            // 포인터 이동
            start++;
            end--;
        }

        return true; // 모든 문자가 일치하면 펠린드롬
    }
};
