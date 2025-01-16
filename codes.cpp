#include <iostream>
#include <vector>
#include <algorithm>

void findMinMaxSum(const std::vector<int>& arr) {
    long long totalSum = 0;
    for (int num : arr) {
        totalSum += num;
    }

    long long minSum = totalSum - *std::max_element(arr.begin(), arr.end());
    long long maxSum = totalSum - *std::min_element(arr.begin(), arr.end());

    std::cout << minSum << " " << maxSum << std::endl;
}

int main() {
    std::vector<int> arr(5);
    for (int i = 0; i < 5; ++i) {
        std::cin >> arr[i];
    }

    findMinMaxSum(arr);

    return 0;
}