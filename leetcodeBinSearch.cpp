class Solution {
public:
    int search(vector<int>& nums, int target) {
    int n=nums.size();
    if(nums[(n-1)>>1]==target)
    {
        return ((n-1)>>1);
    }
    else
    {
        int low=0,high=n-1;
        while(1)
        {
            int mid=(low+((high-low)>>1));
            if(high<low)
            {
                return -1;
            }
            if(nums[mid]==target)
            {
                return mid;
            }
                if(nums[mid]<nums[0])
                {
                    if(target>=nums[0]||target<nums[mid])
                    {
                        high=mid-1;
                    }
                    else
                    {
                        low=mid+1;
                    }
                }
                else
                {
                    if(target>nums[mid]||target<nums[0])
                    {
                        low=mid+1;
                    }
                    else
                    {
                        high=mid-1;
                    }
                }
            }
    }
}
};
