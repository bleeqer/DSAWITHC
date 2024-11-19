class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0; // 결과를 저장할 변수 초기화

        // 배열의 모든 숫자에 대해 XOR 연산 수행
        for (int num : nums) {
            result ^= num; // 현재 숫자와 결과값을 XOR
        }

        return result; // 단일 숫자 반환
    }
};
