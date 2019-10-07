

/**
*   Return the second largest number in the array.
*   @param {Number[]} nums - An array of numbers.
*   @return {Number} The second largest number in the array.
**/
function getSecondLargest(nums) {
    // Complete the function
    let la, sl;
    if (nums[0] > nums[1]) {
        la = nums[0]; sl = nums[1];
    }
    else {
        la = nums[1]; sl = nums[0];
    }
    for (let i = 2; i < nums.length; i++) {
        if (nums[i] > la) {
            sl = la;
            la = nums[i];
        }
        else if (nums[i] > sl && nums[i] != la) {
            sl = nums[i];
        }
    }
    return sl;
}

