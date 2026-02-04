class Solution:
    def isPalindrome(self, s: str) -> bool:
        l, r = 0, len(s) - 1

        while l < r:
            if not s[l].isalnum():
                l += 1
                continue

            if not s[r].isalnum():
                r -= 1
                continue

            if s[l].lower() != s[r].lower():
                return False
            
            l += 1
            r -= 1

        return True


if __name__ == "__main__":
    sol = Solution()

    test_cases = [
        ("A man, a plan, a canal: Panama", True),  # classic palindrome
        ("race a car", False),                     # not a palindrome
        ("", True),                                # empty string
        (" ", True),                               # only spaces
        (".,", True),                              # only symbols
        ("0P", False),                             # digit vs letter
        ("Madam", True),                           # mixed case
        ("No 'x' in Nixon", True),                 # punctuation + case
        ("12321", True),                           # numeric palindrome
        ("1231", False),                           # numeric non-palindrome
    ]

    for s, expected in test_cases:
        result = sol.isPalindrome(s)
        print(f"Input: {s!r:35} Expected: {expected}  Got: {result}  -> {'PASS' if result == expected else 'FAIL'}")
