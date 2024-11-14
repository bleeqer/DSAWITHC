double* convertTemperature(double celsius, int* returnSize) 
{
    *returnSize = 2;  // 반환 배열 크기 설정
    double* answer = (double*) malloc(sizeof(double) * *returnSize); // 메모리 할당
    answer[0] = celsius + 273.15;        // 섭씨 -> 켈빈
    answer[1] = celsius * 1.8 + 32.0;    // 섭씨 -> 화씨
    return answer;  // 결과 반환
}
