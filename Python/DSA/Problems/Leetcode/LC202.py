class Solution:
    def isHappy(self, n: int) -> bool:
        def next_num(x: int) -> int:
            s = 0
            while x > 0:
                x, d = divmod(x, 10)
                s += d * d
            return s

        slow = n
        fast = next_num(n)

        while fast != 1 and slow != fast:
            slow = next_num(slow)
            fast = next_num(next_num(fast))

        return fast == 1


if __name__ == "__main__":
    sol = Solution()

    # Sample test cases
    test_cases = [
        1,    # happy (trivial)
        7,    # happy
        10,   # happy (1² + 0² = 1)
        19,   # happy (classic example)
        2,    # unhappy
        3,    # unhappy
        4,    # unhappy (enters known cycle)
        100,  # happy
    ]

    for n in test_cases:
        print(f"{n}: {sol.isHappy(n)}")
