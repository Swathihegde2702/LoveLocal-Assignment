#include <stdio.h>
#include <stdlib.h>

int* majority_element(int* nums, int numsSize, int* returnSize) {
    int candidate1 = 0, count1 = 0;
    int candidate2 = 1, count2 = 0;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == candidate1) {
            count1++;
        } else if (nums[i] == candidate2) {
            count2++;
        } else if (count1 == 0) {
            candidate1 = nums[i];
            count1 = 1;
        } else if (count2 == 0) {
            candidate2 = nums[i];
            count2 = 1;
        } else {
            count1--;
            count2--;
        }
    }

    count1 = count2 = 0;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == candidate1) {
            count1++;
        } else if (nums[i] == candidate2) {
            count2++;
        }
    }

    int threshold = numsSize / 3;
    int* result = malloc(2 * sizeof(int));
    int index = 0;

    if (count1 > threshold) {
        result[index++] = candidate1;
    }
    if (count2 > threshold) {
        result[index++] = candidate2;
    }

    *returnSize = index;
    return result;
}

int main() {
    int nums1[] = {3, 2, 3};
    int nums2[] = {1};
    int nums3[] = {1, 2};

    int returnSize;

    int* result1 = majority_element(nums1, sizeof(nums1) / sizeof(nums1[0]), &returnSize);
    printf("Output 1: [");
    for (int i = 0; i < returnSize; i++) {
        printf("%d ", result1[i]);
    }
    printf("]\n");
    free(result1);

    int* result2 = majority_element(nums2, sizeof(nums2) / sizeof(nums2[0]), &returnSize);
    printf("Output 2: [");
    for (int i = 0; i < returnSize; i++) {
        printf("%d ", result2[i]);
    }
    printf("]\n");
    free(result2);

    int* result3 = majority_element(nums3, sizeof(nums3) / sizeof(nums3[0]), &returnSize);
    printf("Output 3: [");
    for (int i = 0; i < returnSize; i++) {
        printf("%d ", result3[i]);
    }
    printf("]\n");
    free(result3);

    return 0;
}
	
