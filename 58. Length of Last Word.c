int lengthOfLastWord(char* s) 
{
    int len = 1; // 마지막 단어의 길이를 저장할 변수 초기화
    for (int i = 1; s[i]; i++) // 문자열을 끝까지 순회
    {
        if (s[i] == ' ') // 공백일 경우 건너뜀
        {
            continue;
        }
        if (s[i - 1] == ' ') // 이전 문자가 공백이면 새로운 단어 시작
        {
            len = 0; // 길이 초기화
        }
        len++; // 단어 길이 증가
    }    

    return len; // 마지막 단어의 길이 반환
}
