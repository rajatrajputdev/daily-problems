#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> &nums, int target)
{
    int low = 0;
    int high = nums.size() - 1;
    int mid = low + (high - low) / 2;
    while (low <= high)
    {
        if (nums[mid] == target)
        {
            return mid;
        }
        if (target > nums[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
        mid = low + (high - low) / 2;
    }
    return -1;
}

int main()
{
    int target;
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    cout << "Enter the element you want to find : ";
    cin >> target;
    int indexOfTarget = binarySearch(arr, target);
    if (indexOfTarget)
    {
        cout << "Target found at index " << indexOfTarget << "." << endl;
        return target;
    }
    cout << "Target not found in array." << endl;
    return 0;
}