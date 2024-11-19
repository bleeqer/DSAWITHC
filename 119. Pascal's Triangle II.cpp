class Solution {
public:
    vector<int> getRow(int rowIndex) {
        // rowIndex가 0일 경우 첫 번째 행 반환
        if (rowIndex == 0) {
            return {1};
        }
        // Pascal's Triangle의 전체 행 생성 후 rowIndex 번째 행 반환
        return solution(rowIndex + 1)[rowIndex];
    }

    vector<vector<int>> solution(int rowIndex) {
        // rowIndex가 1일 경우 첫 번째 행 반환
        if (rowIndex == 1) {
            return {{1}};
        }

        // 이전 행들을 재귀적으로 생성
        vector<vector<int>> prevRows = solution(rowIndex - 1);

        // 새로운 행 초기화 (모든 값 1로 설정)
        vector<int> newRow(rowIndex, 1);

        // 새로운 행의 가운데 값을 이전 행의 값으로 계산
        for (int i = 1; i < rowIndex - 1; i++) {
            newRow[i] = prevRows.back()[i - 1] + prevRows.back()[i];
        }

        // 새로 계산된 행을 추가
        prevRows.push_back(newRow);

        return prevRows;
    }
};
