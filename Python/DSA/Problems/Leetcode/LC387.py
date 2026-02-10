class Solution:
    def firstUniqChar(self, s: str) -> int:
        freq = dict()
        for ch in s:
            freq[ch] = freq.get(ch, 0) + 1
        
        for i, ch in enumerate(s):
            if freq[ch] == 1:
                return i
        
        return -1


def main():
    sol = Solution()
    
    test_cases = [
        "leetcode",      # expected 0
        "loveleetcode",  # expected 2
        "aabb",          # expected -1
        "z",             # expected 0
        ""               # expected -1
    ]
    
    for s in test_cases:
        result = sol.firstUniqChar(s)
        print(f"Input: {s!r} -> Output: {result}")


if __name__ == "__main__":
    main()
