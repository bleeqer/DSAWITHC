class Solution {
public:
    string convertToTitle(int columnNumber) {
        string answer = ""; // 결과 문자열 초기화

        while (columnNumber > 0) { // 숫자가 0보다 클 때까지 반복
            columnNumber--; // 1 감소 (0-기반으로 변환)
            answer = char(columnNumber % 26 + 'A') + answer; // 현재 자리 문자 추가
            columnNumber /= 26; // 상위 자리 계산
        }

        return answer; // 결과 반환
    }
};
