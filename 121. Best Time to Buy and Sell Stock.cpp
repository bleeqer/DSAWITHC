class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // 첫 번째 날의 주가를 매수 가격으로 설정
        int buyPrice = prices[0];
        int profit = 0; // 최대 이익 초기화

        // 주가 배열을 순회하며 최대 이익 계산
        for (int i = 1; i < prices.size(); i++) {
            // 현재 주가가 더 낮으면 매수 가격 갱신
            if (prices[i] < buyPrice) {
                buyPrice = prices[i];
            }

            // 최대 이익 갱신
            profit = max(profit, prices[i] - buyPrice);
        }

        return profit; // 계산된 최대 이익 반환
    }
};
