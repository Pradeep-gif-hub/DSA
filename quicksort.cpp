#include<iostream>//Time complexity is NlogN and spaxce complexity is 0(1);;
#include<vector>
using namespace std;

class Solution {
public:
    void quickSort(vector<int>& arr, int low, int high) {
        if (low < high) {
            int pivotIndex = partition(arr, low, high);
            quickSort(arr, low, pivotIndex - 1);
            quickSort(arr, pivotIndex + 1, high);
        }
    }

private:
    int partition(vector<int>& arr, int low, int high) {
        int pivot = arr[low];
        int i = low;
        int j = high;

        while (i < j) {
            while (i <= high - 1 && arr[i] <= pivot) i++;
            while (j >= low + 1 && arr[j] > pivot) j--;
            if (i < j) swap(arr[i], arr[j]);
        }

        swap(arr[low], arr[j]);
        return j;
    }
};

int main() {
    vector<int> nums = {7, 4, 1, 5, 3};

    Solution s;
    s.quickSort(nums, 0, nums.size() - 1);

    cout << "Sorted array: ";
    for (int x : nums) cout << x << " ";
    cout << endl;

    return 0;
}
