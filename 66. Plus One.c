int* plusOne(int* digits, int digitsSize, int* returnSize) 
{
        // 배열의 끝에서부터 1을 더하는 연산 수행
        for (int i = digitsSize - 1; i >= 0; --i)
        {
            if (digits[i] == 9) // 9인 경우 자리 올림, 현재 위치를 0으로 설정
            {
                digits[i] = 0;
            }
            else 
            {
                digits[i] += 1; // 9가 아니면 1을 더하고 반환
                *returnSize = digitsSize; // 결과 배열의 크기 설정
                return digits;
            }
        }

        // 모든 자리가 9였던 경우 배열 크기를 하나 늘려 새 배열 생성
        int* answer = malloc((digitsSize + 1) * sizeof(int));
        memcpy(answer + 1, digits, digitsSize * sizeof(int)); // 기존 배열 복사
        answer[0] = 1; // 첫 번째 자리수를 1로 설정
        *returnSize = digitsSize + 1; // 결과 배열의 크기 설정
        return answer; // 새로운 배열 반환
}
