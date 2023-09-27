class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        s_len  = len(s)
        for i in range(s_len):
            if s[i] == '[' or s[i] == '{' or s[i] == '(' :
                stack.append(s[i])
            else:
                if stack:
                    if s[i] == ']' and stack[-1] == '[':
                        stack.pop()
                    elif s[i] == '}' and stack[-1] == '{':
                        stack.pop()
                    elif s[i] == ')' and stack[-1] == '(':
                        stack.pop()
                    else:
                        return False
                else:
                    return False
            
        if not stack:
            return True
        