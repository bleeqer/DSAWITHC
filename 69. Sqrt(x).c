int mySqrt(int x) 
{
    // x가 0 또는 1인 경우, 제곱근은 x 자신이므로 그대로 반환
    if (x == 0 || x == 1)
    {
        return x;
    }

    // 이진 탐색을 위한 변수 초기화
    long start = 1;     // 탐색 범위의 시작
    long end = x;       // 탐색 범위의 끝
    long mid;           // 중간 값
    long temp;          // 중간 값의 제곱을 저장

    // 이진 탐색 수행
    while (start <= end)
    {
        // 중간 값 계산
        mid = (start + end) / 2;

        // 중간 값의 제곱을 temp에 저장
        temp = mid * mid;

        // temp가 x와 같으면 정확한 제곱근을 찾은 것
        if (temp == x)
        {
            end = mid;  // 결과로 end 값을 설정
            break;      // 탐색 종료
        }
        // temp가 x보다 크면 mid의 제곱이 너무 크므로 탐색 범위를 줄임
        else if (temp > x)
        {
            end = mid - 1;
        }
        // temp가 x보다 작으면 mid의 제곱이 너무 작으므로 탐색 범위를 늘림
        else
        {
            start = mid + 1;
        }
    }

    // 정수 제곱근 값을 반환
    return (int) end;
}
