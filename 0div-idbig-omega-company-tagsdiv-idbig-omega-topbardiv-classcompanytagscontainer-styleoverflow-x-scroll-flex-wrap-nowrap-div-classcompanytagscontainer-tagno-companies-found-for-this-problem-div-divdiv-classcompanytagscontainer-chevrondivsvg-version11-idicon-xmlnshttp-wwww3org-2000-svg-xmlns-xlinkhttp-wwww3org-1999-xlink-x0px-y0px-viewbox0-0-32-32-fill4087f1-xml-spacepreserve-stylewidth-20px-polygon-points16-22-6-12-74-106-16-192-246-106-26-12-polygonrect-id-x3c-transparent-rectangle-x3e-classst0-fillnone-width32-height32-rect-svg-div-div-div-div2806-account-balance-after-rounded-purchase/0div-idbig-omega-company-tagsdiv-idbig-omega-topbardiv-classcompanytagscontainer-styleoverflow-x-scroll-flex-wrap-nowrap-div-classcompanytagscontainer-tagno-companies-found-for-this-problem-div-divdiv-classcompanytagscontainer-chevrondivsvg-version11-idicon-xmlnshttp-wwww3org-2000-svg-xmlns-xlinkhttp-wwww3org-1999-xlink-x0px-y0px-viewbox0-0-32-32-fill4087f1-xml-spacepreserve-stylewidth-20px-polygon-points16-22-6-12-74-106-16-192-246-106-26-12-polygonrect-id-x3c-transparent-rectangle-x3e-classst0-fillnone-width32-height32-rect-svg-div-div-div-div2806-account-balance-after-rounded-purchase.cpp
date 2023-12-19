class Solution {
public:
    int accountBalanceAfterPurchase(int purchaseAmount) {
        int roundedAmount;
        int remainder = purchaseAmount % 10;
        if (remainder >= 5) {
            roundedAmount = purchaseAmount + (10 - remainder);
        } else {
            roundedAmount = purchaseAmount - remainder;
        }

        return 100 - roundedAmount;
    }
};
