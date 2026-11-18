// rodcutter.c++
// Bryce W. Frazier
// Started: 2026_11_17
#include <algorithm>
#include <cstddef>
#include <vector>

using std::vector;
using std::size_t;

// Recursive Algorithm
size_t recursive_rod(size_t len, vector<size_t> price) {
    // Base Case
    if (len <= 0) { return 0; }

    // Recursive Case
    size_t maxProfit = 0;
    for (size_t i = 1; i <= len; ++i){
        size_t profit = price[i] + recursive_rod(len-i, price);
        maxProfit = std::max(maxProfit, profit);
    }
    return maxProfit;
}

size_t recursive_rod(vector<size_t> price) {
    size_t len = price.size()-1;

    if (len <=0) { return 0; }
    return recursive_rod(len, price);
}

int main() {
    vector<size_t> price = {0, 1, 5, 8, 9};  // Size 5 to support rods up to length 4

    return recursive_rod(price);
}
