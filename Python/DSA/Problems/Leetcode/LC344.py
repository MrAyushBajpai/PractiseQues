from typing import List

class Solution:
    def reverseString(self, s: List[str]) -> None:
        """
        Do not return anything, modify s in-place instead.
        """
        l, r = 0, len(s) - 1
        while l < r:
            temp = s[l]
            s[l] = s[r]
            s[r] = temp
            l += 1
            r -= 1


# ------------------- Sample Main -------------------

def run_test_case(arr: List[str]):
    print("Original :", arr)
    Solution().reverseString(arr)
    print("Reversed :", arr)
    print("-" * 30)


if __name__ == "__main__":
    # Test Case 1
    run_test_case(["h", "e", "l", "l", "o"])

    # Test Case 2
    run_test_case(["H", "a", "n", "n", "a", "h"])

    # Edge Case: single element
    run_test_case(["A"])

    # Edge Case: empty list
    run_test_case([])

    # Even length
    run_test_case(["1", "2", "3", "4"])

    # Odd length
    run_test_case(["a", "b", "c", "d", "e"])
