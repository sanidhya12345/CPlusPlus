class Solution {
    public boolean checkSubarraySum(int[] nums, int k) {
       int n = nums.length, prefSum = 0;
        Map<Integer, Integer> map = new HashMap<>();
        map.put(0, 0);

        for (int i = 0; i < n; i++) {
            prefSum = (prefSum + nums[i]) % k;
            if (map.containsKey(prefSum)) {
                if (i + 1 - map.get(prefSum) >= 2) {
                    return true;
                }
            } else {
                map.put(prefSum, i + 1);
            }
        }

        return false;
    }
}