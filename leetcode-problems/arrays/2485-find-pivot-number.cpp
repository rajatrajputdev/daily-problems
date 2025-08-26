#include <bits/stdc++.h>
using namespace std;

int pivotIndex(vector<int> &nums)
{
    int total = 0;
    for (int n : nums)
        total += n;

    int leftSum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        int rightSum = total - leftSum - nums[i];
        if (leftSum == rightSum)
        {
            return i;
        }
        leftSum += nums[i];
    }
    return -1;
}

int pivotInteger(int n)
{
    vector<int> arr;
    for (int i = 1; i <= n; i++)
    {
        arr.push_back(i);
    }
    int pivotI = pivotIndex(arr);
    if (pivotI == -1)
        return -1; // no pivot
    return arr[pivotI];
}

int main()
{
    // Example 1: Pivot Index
    vector<int> nums = {1, 7, 3, 6, 5, 6};
    int idx = pivotIndex(nums);
    if (idx != -1)
        cout << "Pivot index in nums: " << idx << " (value = " << nums[idx] << ")" << endl;
    else
        cout << "No pivot index found in nums" << endl;

    // Example 2: Pivot Integer
    int n = 8;
    int pivot = pivotInteger(n);
    if (pivot != -1)
        cout << "Pivot integer in 1.." << n << " is: " << pivot << endl;
    else
        cout << "No pivot integer found in 1.." << n << endl;

    return 0;
}
