#include <iostream>
#include <vector>
using namespace std;

vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
    int n1 = nums1.size();
    int n2 = nums2.size();

    int i = 0;
    int j = 0;
    vector<int> unionarr;

    while (i < n1 && j < n2) {
        if (nums1[i] <= nums2[j]) {
            if (unionarr.empty() || unionarr.back() != nums1[i]) {
                unionarr.push_back(nums1[i]);
            }
            i++;
        } else {
            if (unionarr.empty() || unionarr.back() != nums2[j]) {
                unionarr.push_back(nums2[j]);
            }
            j++;
        }
    }

    while (i < n1) {
        if (unionarr.empty() || unionarr.back() != nums1[i]) {
            unionarr.push_back(nums1[i]);
        }
        i++;
    }

    while (j < n2) {
        if (unionarr.empty() || unionarr.back() != nums2[j]) {
            unionarr.push_back(nums2[j]);
        }
        j++;
    }

    return unionarr;
}

int main() {
    vector<int> nums1 = {1, 2, 4, 5};
    vector<int> nums2 = {2, 3, 5, 6};

    vector<int> result = unionArray(nums1, nums2);

    cout << "Union of arrays: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}