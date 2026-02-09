from typing import List

class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False
        
        counter = [0] * 26

        for i in range(len(s)):
            counter[ord(s[i]) - ord('a')] += 1
            counter[ord(t[i]) - ord('a')] -= 1
        
        return all(c == 0 for c in counter)


def main():
    sol = Solution()

    test_cases = [
        ("anagram", "nagaram", True),   # basic valid anagram
        ("rat", "car", False),          # different characters
        ("listen", "silent", True),     # common anagram example
        ("aacc", "ccac", False),        # frequency mismatch
        ("", "", True),                 # empty strings
        ("a", "a", True),               # single char equal
        ("ab", "a", False),             # different lengths
    ]

    for s, t, expected in test_cases:
        result = sol.isAnagram(s, t)
        print(f"isAnagram({s!r}, {t!r}) = {result} | expected = {expected}")


if __name__ == "__main__":
    main()
