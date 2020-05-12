class Solution {
public:
    
    int partition(vector<int> & arr, int start, int end) {
        
        int pivot = arr[end];
        int i = start - 1;
        
        for(int j = start; j < end; ++j) {
            if(pivot <= arr[j]) {
                ++i;
                swap(arr[i], arr[j]);
            }
        }
        
        swap(arr[i + 1], arr[end]);
        
        return (i + 1);
    }
    
    int quickSelect(vector<int> &arr, int start, int end, int k) {
        
        int partitioningIndex = partition(arr, start, end);
        
        if(partitioningIndex == k - 1) {
            return arr[k - 1];
        } else if (partitioningIndex > k - 1) {
            return quickSelect(arr, start, partitioningIndex - 1, k);
        } else {
            return quickSelect(arr, partitioningIndex + 1, end, k);
        }
        
        return INT_MIN;
    }
    
    int findKthLargest(vector<int>& arr, int k) {
        return quickSelect(arr, 0, arr.size() - 1, k);
    }
};
