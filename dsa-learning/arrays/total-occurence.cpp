#include <iostream>
#include <vector>
using namespace std;

int firstOcc(vector<int> &nums, int target)
{
    int low = 0;
    int high = nums.size() - 1;
    int mid = low + (high - low) / 2;
    int ans = -1;
    while (low <= high)
    {
        if (nums[mid] == target)
        {
            ans = mid;
            high = mid - 1;
        }
        else if (target > nums[mid])
        {
            low = mid + 1;
        }
        else if(target < nums[mid])
        {
            high = mid - 1;
        }
        mid = low + (high - low) / 2;
    }
    return ans;
}

int lastOcc(vector<int> &nums, int target)
{
    int low = 0;
    int high = nums.size() - 1;
    int mid = low + (high - low) / 2;
    int ans = -1;
    while (low <= high)
    {
        if (nums[mid] == target)
        {
            ans = mid;
            low = mid + 1;
        }
        else if (target > nums[mid])
        {
            low = mid + 1;
        }
        else if(target < nums[mid])
        {
            high = mid - 1;
        }
        mid = low + (high - low) / 2;
    }
    return ans;
}

int main()
{
    // program initialisation
    int target;
    vector<int> arr = {1, 2, 3, 3,4, 5, 6};
    cout << "Enter the element you want to find : ";
    cin >> target;

    // program execution
    int firstOccurence = firstOcc(arr, target);
    int lastOccurence = lastOcc(arr, target);
    cout << lastOccurence - firstOccurence + 1 << endl;
    return 0;
}