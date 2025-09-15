class Solution:
    def canBeTypedWords(self, text: str, brokenLetters: str) -> int:
        broken = set(brokenLetters)   # put broken letters in a set for quick lookup
        count = 0

        for word in text.split(" "):  # split text into words
            if all(ch not in broken for ch in word):  # check if word is valid
                count += 1
        return count