int removeDuplicates(vector<int>& nums) {
        if(!nums.size()) return 0;
        int lastNumber, i, j;
        for(i = 1, j = 1, lastNumber = nums[0]; i < nums.size();i++)
            if(nums[i] > lastNumber){ // Strictly greater
                lastNumber = nums[i];
                swap(nums[i], nums[j++]);
            }
        return j;
    }
