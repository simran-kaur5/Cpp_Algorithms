#include<iostream>
#include<vector>
using namespace std;

// Function to calculate the maximum profit from stock prices
int maxProfit(vector<int>& prices) {
    int maxProfit = 0; // Initialize the maximum profit to 0
    int bestBuy = prices[0]; // Assume the first day's price is the best buying price initially

    // Traverse the prices from the second day onward
    for(int i = 1; i < prices.size(); i++) {
        // If selling on the current day gives a profit, update maxProfit
        if(prices[i] > bestBuy) {
            maxProfit = max(maxProfit, prices[i] - bestBuy); // Calculate profit and update maxProfit
        }
        // Update the best buying price if a lower price is found
        bestBuy = min(bestBuy, prices[i]);
    }

    return maxProfit; // Return the maximum profit
}

int main() {
    // Vector representing stock prices on different days
    vector<int> prices = {7, 1, 5, 3, 6, 4};

    // Call the function to calculate maximum profit
    int ans = maxProfit(prices);

    // Display the result
    cout << "The max profit is " << ans;

    return 0; // End of program
}
