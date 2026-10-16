class Solution:

    def encode(self, strs: List[str]) -> str:
        encoded_string = []
        for s in strs:
            encoded_string.append(f"{len(s)}#{s}")
        return "".join(encoded_string)


    def decode(self, s: str) -> List[str]:
        decoded_strings = []
        
        i = 0
        while i < len(s):
            num = s[i]
            j = i + 1
            while s[j] != '#':
                num += s[j]
                j+=1
            
            start = j + 1
            num = int(num)
            decoded_strings.append(s[start: start + num])
            i = start + num 
                
            
        return decoded_strings
