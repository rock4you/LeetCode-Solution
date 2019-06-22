

class Solution {
    public int[] twoSum(int[] nums, int target) {
		HashMap <Integer,Integer> amap = new HashMap();
		int[] index = new int [2];
		for(int i=0;i<nums.length;i++)
		{
			amap.put(nums[i], i);
		}
		for(int i=0;i<nums.length;i++)
		{
			if(amap.containsKey(target-nums[i]) && nums[i]!=(target/2))
			{
				index[0]=i;
				index[1]=amap.get(target-nums[i]);
				break;
			}
		}
		return index;
    }
}
