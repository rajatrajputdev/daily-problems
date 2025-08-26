#include <iostream>
#include <vector>
using namespace std;
    int pivotIndex(vector<int>& nums) {
        int total = 0;
        for (int n : nums) total += n;

        int leftSum = 0;
        for (int i = 0; i < nums.size(); i++) {
            int rightSum = total - leftSum - nums[i];
            if (leftSum == rightSum) {
                return i;
            }
            leftSum += nums[i];
        }
        return -1;
    }

int main()
{
    // program initialisation
    int target;
    vector<int> arr = {1,7,3,6,5,6};
    cout << "Enter the element you want to find : ";
    cin >> target;

    // program execution
    int indexOfTarget = pivotIndex(arr);

    cout << indexOfTarget;
    return 0;
}