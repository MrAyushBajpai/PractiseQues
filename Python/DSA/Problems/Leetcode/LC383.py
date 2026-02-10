class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        if len(ransomNote) > len(magazine):
            return False

        freq = [0] * 26
        base = ord('a')

        for ch in magazine:
            freq[ord(ch) - base] += 1
        
        for ch in ransomNote:
            idx = ord(ch) - base
            if freq[idx] == 0:
                return False
            freq[idx] -= 1
        
        return True


def main():
    sol = Solution()

    test_cases = [
        ("a", "b", False),
        ("aa", "ab", False),
        ("aa", "aab", True),
        ("abc", "cbad", True),
        ("hello", "helo", False),
    ]

    for ransomNote, magazine, expected in test_cases:
        result = sol.canConstruct(ransomNote, magazine)
        print(f"ransomNote='{ransomNote}', magazine='{magazine}' -> {result} (expected {expected})")


if __name__ == "__main__":
    main()
