def is_palindrome(s):
    return s == s[::-1]

def longest_palindrome(n, m, strings):
    # Dictionary to find pairs of reverse strings
    pairs = {}
    for i, s in enumerate(strings):
        if s[::-1] in pairs:
            pairs[s[::-1]].append(s)
        else:
            pairs[s[::-1]] = [s]
    
    left = ""
    right = ""
    center = ""
    
    for s in strings:
        if is_palindrome(s):
            center = s
            break
    
    for s in strings:
        if s in pairs:
            left += pairs[s][0]
            right = pairs[s][1] + right
            pairs.pop(s)
    
    # Construct the longest palindrome
    palindrome = left + center + right
    
    # Output the length of the longest palindrome
    print(len(palindrome))
    
    # Output the longest palindrome string
    if palindrome:
        print(palindrome)
    else:
        print()

# Input reading
n, m = map(int, input().split())
strings = [input().strip() for _ in range(n)]
longest_palindrome(n, m, strings)
