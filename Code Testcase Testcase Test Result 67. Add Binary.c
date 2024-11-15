char* addBinary(char* a, char* b) 
{
    int i = strlen(a);  // a의 길이
    int j = strlen(b);  // b의 길이
    int k = fmax(i, j) + 2;  // 결과 문자열의 최대 길이
    int temp = 0;
    char* answer = (char*) malloc(sizeof(char) * k);  // 결과 배열 할당
    
    answer[--k] = '\0';  // 문자열 끝에 널 문자 추가

    while (i > 0 || j > 0 || temp > 0)  // i, j가 0보다 크거나 남은 carry가 있는 동안 반복
    {
        if (i > 0)
        {
            temp += a[--i] - '0';  // a의 마지막 자리 숫자를 temp에 추가
        }

        if (j > 0)
        {
            temp += b[--j] - '0';  // b의 마지막 자리 숫자를 temp에 추가
        }

        answer[--k] = temp % 2 + '0';  // 2로 나눈 나머지를 결과 문자열에 추가
        temp /= 2;  // 다음 자리로 carry를 넘김
    }

    return answer + k;  // 필요한 경우 선행 0 제거 후 반환
}
