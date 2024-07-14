// Approach 1;
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n - 1; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if (nums[i] > nums[j]) {
                    std::swap(nums[i], nums[j]);
                }
            }
        }
    }
};

// TC : o(n**2)

//Approach 2: 3 Dutch National Flag algorithm
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int mid =0;
        int high =nums.size()-1;
        int low =0;
        while(mid<=high){
            if(nums[mid]==2){
                int temp = nums[mid];
                nums[mid] = nums[high];
                nums[high]=temp;
                high--;
            }
            else if(nums[mid]==0){
                int temp =nums[mid];
                nums[mid]=nums[low];
                nums[low]=temp;
                low++;
                mid++;
            }
            else{
                mid++;
            }
        }
        return;
    }
};

// TC : o(n);