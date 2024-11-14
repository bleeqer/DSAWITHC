int scoreOfString(char* s)
{
    int answer = 0; // 문자열의 점수를 저장할 변수 초기화
    for (int i = 1; s[i] != '\0'; i++) // 문자열의 끝까지 반복
    {
        answer += abs(s[i] - s[i - 1]); // 인접한 문자 간의 차이의 절댓값을 더함
    }
    
    return answer; // 계산된 점수 반환
}
