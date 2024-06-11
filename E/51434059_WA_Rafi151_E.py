def find_longest_palindrome(n, m, strings):
    used = [False] * n
    pairs = []
    middle = ""
    
    # Dictionary to find reverse string pairs efficiently
    string_dict = {s: i for i, s in enumerate(strings)}
    
    # Find all pairs and possible middle palindrome
    for i in range(n):
        if used[i]:
            continue
        rev = strings[i][::-1]
        if rev in string_dict and not used[string_dict[rev]] and string_dict[rev] != i:
            pairs.append((strings[i], rev))
            used[i] = True
            used[string_dict[rev]] = True
    
    for i in range(n):
        if not used[i] and strings[i] == strings[i][::-1]:
            middle = strings[i]
            break
    
    # Construct the final palindrome string
    left_part = "".join(p[0] for p in pairs)
    right_part = "".join(p[1] for p in pairs)[::-1]
    
    palindrome = left_part + middle + right_part
    return len(palindrome), palindrome

# Example usage:
n, m = map(int, input().split())
strings = [input().strip() for _ in range(n)]

length, palindrome = find_longest_palindrome(n, m, strings)
print(length)
if length > 0:
    print(palindrome)
