int searchInsert(int* nums, int numsSize, int target) 
{
    int l = 0; // 왼쪽 인덱스 초기화
    int r = numsSize - 1; // 오른쪽 인덱스 초기화

    while (l <= r) // 이진 탐색 수행
    {
        int mid = (l + r) / 2; // 중간 인덱스 계산
        
        if (nums[mid] < target) // target이 중간값보다 크면 오른쪽으로 이동
        {
            l = mid + 1;
        }
        else if (nums[mid] > target) // target이 중간값보다 작으면 왼쪽으로 이동
        {
            r = mid - 1;
        }
        else // target과 중간값이 같으면 위치 반환
        {
            return mid;
        }
    }    

    return l; // target이 없으면 삽입할 위치 반환
}
