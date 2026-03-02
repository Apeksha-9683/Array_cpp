// class Solution {
// public:
//     int search(vector<int>& nums, int target) {
//         int st= 0;
//         int end = nums.size() - 1;

//         while (st <= end) {
//             int mid = (st + end) / 2;

//             // Target found
//             if (nums[mid] == target)
//                 return mid;

//             // LEFT HALF IS SORTED
            
//                 // Target lies in left half
//             else if (nums[mid]>target))
//                     end = mid - 1;
//             else if(nums[mid]<target)
//                     st = mid + 1;
//             }
//             // RIGHT HALF IS SORTED
            
//         }

//         return -1; // Not found
//     }
// };


//wrong becoz after rotating it won't be sorted

#include<iostream>
