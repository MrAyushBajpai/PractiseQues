from typing import List

class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        """
        Do not return anything, modify nums1 in-place instead.
        """
        i = m - 1
        j = n - 1
        k = n + m - 1

        while j >= 0:
            if i >= 0 and nums1[i] > nums2[j]:
                nums1[k] = nums1[i]
                i -= 1
            else:
                nums1[k] = nums2[j]
                j -= 1
            k -= 1


def main():
    sol = Solution()

    # Sample Case 1
    nums1 = [1, 2, 3, 0, 0, 0]
    nums2 = [2, 5, 6]
    sol.merge(nums1, 3, nums2, 3)
    print("Case 1:", nums1)  # Expected: [1, 2, 2, 3, 5, 6]

    # Sample Case 2: nums1 initially empty
    nums1 = [0]
    nums2 = [1]
    sol.merge(nums1, 0, nums2, 1)
    print("Case 2:", nums1)  # Expected: [1]

    # Sample Case 3: nums2 empty
    nums1 = [1]
    nums2 = []
    sol.merge(nums1, 1, nums2, 0)
    print("Case 3:", nums1)  # Expected: [1]

    # Sample Case 4: different sizes
    nums1 = [4, 5, 6, 0, 0, 0]
    nums2 = [1, 2, 3]
    sol.merge(nums1, 3, nums2, 3)
    print("Case 4:", nums1)  # Expected: [1, 2, 3, 4, 5, 6]


if __name__ == "__main__":
    main()
