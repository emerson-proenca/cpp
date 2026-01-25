class Solution:
    def scoreOfString(self, s: str) -> int:
        previous = 0
        sum = 0

        for letter in s:
            number = ord(letter)
            if previous != 0:
                result = previous - number
                sum = sum + abs(result)
            previous = number

        return sum
