/* C++ Program to search an element
   in a sorted and pivoted array*/
#include <bits/stdc++.h>
using namespace std;

/* Standard Binary Search function*/
int search(vector<int>& nums, int target) {
    // support variables
    int len = nums.size(), l = 0, r = len, mid;
    // finding the pivot
    while (l < r) {
        mid = (l + r) / 2;
        // current element > first elemen: we move the window right
        if (nums[mid] >= nums[0]) l = mid + 1;
        // otherwise we move it left
        else r = mid;
    }
    // checking for edge case - pivot at the end = sorted vector
    if (l == len) l = 0;
    // preparing for the next BS: target is between pivot and the last element
    if (target >= nums[l] && target <= nums.back()) r = len;
    // target is between the first element and the one before pivot
    else r = l, l = 0;
    // all other cases
    // finding the element
    while (l < r) {
        mid = (l + r) / 2;
        // mid matches the target element: we return it
        if (nums[mid] == target) return mid;
        // mid matches an element smaller than target: we move the window right
        else if (nums[mid] < target) l = mid + 1;
        // otherwise we move it left
        else r = mid;
    }
    return nums[l] == target ? l : -1;
}

int main()
{
    vector<int> arr={4, 5, 6, 7, 8, 9, 1, 2, 3 };

    cout<<"\nEnter the key: ";
    int key;
    cin>>key;

    // Function calling
    cout << "Index of the element is : " << search(arr, key);

    return 0;
}
