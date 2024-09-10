int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int max_cnt = 0;
    int cnt = 0;

    for (size_t i = 0; i < numsSize; i++) {
        if (nums[i] == 1) cnt++;
        else {
            if (max_cnt < cnt) max_cnt = cnt; 
            cnt = 0;
        }
    }
    
    if (max_cnt < cnt) max_cnt = cnt;
    
    return max_cnt; 
}