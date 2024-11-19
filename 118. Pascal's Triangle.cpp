class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        // numRows가 0일 경우 빈 벡터 반환
        if (numRows == 0) {
            return {};
        }

        // numRows가 1일 경우 첫 번째 행 {{1}} 반환
        if (numRows == 1) {
            return {{1}};
        }

        // 이전 행들을 재귀적으로 생성
        vector<vector<int>> prevRows = generate(numRows - 1);
        // 새로운 행 초기화 (모든 값 1로 설정)
        vector<int> newRow(numRows, 1);

        // 새로운 행의 가운데 값을 이전 행의 값으로 계산
        for (int i = 1; i < numRows - 1; i++) {
            newRow[i] = prevRows.back()[i - 1] + prevRows.back()[i];
        }

        // 새로 계산된 행을 추가
        prevRows.push_back(newRow);
        return prevRows;
    }
};
