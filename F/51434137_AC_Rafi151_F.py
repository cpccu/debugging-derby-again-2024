def min_zeros_to_erase(s):
    # Find the first and last occurrence of '1'
    first_one = s.find('1')
    last_one = s.rfind('1')
    
    if first_one == -1:
        # No '1' in the string, nothing to erase
        return 0
    
    # Count '0's between first_one and last_one
    zeros_to_erase = s[first_one:last_one + 1].count('0')
    
    return zeros_to_erase

# Read number of test cases
t = int(input().strip())
results = []

# Process each test case
for _ in range(t):
    s = input().strip()
    results.append(min_zeros_to_erase(s))

# Print results for each test case
for result in results:
    print(result)
