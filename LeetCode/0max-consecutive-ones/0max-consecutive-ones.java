class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
        int max_cnt = 0, count = 0;
        for (int num : nums) {
            if (num == 1) max_cnt = Math.max(max_cnt, ++count);
            else count = 0;
        }
        return max_cnt;
    }
}