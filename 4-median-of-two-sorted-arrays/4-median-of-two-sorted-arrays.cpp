class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i = 0;
        int j = 0;

    vector<int> arr3;
    int arr1_size = nums1.size();
    int arr2_size = nums2.size();
    while (i < arr1_size && j < arr2_size) {
        if (nums1[i] < nums2[j]) {

            arr3.push_back(nums1[i]);
            i++;
           
        } else {

            arr3.push_back(nums2[j]);
            
            j++;

        }

    }
    for (; i < arr1_size; ++i) {

        arr3.push_back(nums1[i]);
    }
    for (; j < arr2_size; ++j) {

        arr3.push_back(nums2[j]);
    }

    
    int size = arr3.size() - 1;
    double med = 0;
    if (size % 2 == 0) {
        med = arr3[size / 2];
        return med;
    }
    med = (arr3[size/2]+arr3[(size/2)+1])/2.0;
    return med;
    }
};