def is_palindrome(s):
    return s == s[::-1]

def longest_palindrome(n, m, strings):
    # Dictionary to find pairs of reverse strings
    index_map = {}
    for i, s in enumerate(strings):
        index_map[s] = i
    
    used = [False] * n
    left = []
    right = []
    center = ""
    
    for i, s in enumerate(strings):
        if used[i]:
            continue
        
        reverse_s = s[::-1]
        
        if reverse_s in index_map and not used[index_map[reverse_s]]:
            j = index_map[reverse_s]
            if i != j:
                used[i] = True
                used[j] = True
                left.append(s)
                right.append(reverse_s)
    
    for i, s in enumerate(strings):
        if not used[i] and is_palindrome(s):
            center = s
            break
    
    # Construct the longest palindrome
    result = ''.join(left) + center + ''.join(right[::-1])
    
    # Output the length of the longest palindrome
    print(len(result))
    
    # Output the longest palindrome string
    if result:
        print(result)

# Input reading
t = int(input().strip())
test_cases = []
for _ in range(t):
    n, m = map(int, input().strip().split())
    strings = [input().strip() for _ in range(n)]
    longest_palindrome(n, m, strings)
