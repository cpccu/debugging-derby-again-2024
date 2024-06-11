def construct_balanced_array(n):
    if (n // 2) % 2 != 0:
        return "NO"
    
    first_half = [2 * i for i in range(1, (n // 2) + 1)]
    second_half = [2 * i - 1 for i in range(1, n // 2)]
    sum_first_half = sum(first_half)
    sum_second_half = sum(second_half)
    
    second_half.append(sum_first_half - sum_second_half)
    
    return "YES\n" + " ".join(map(str, first_half + second_half))

# Read number of test cases
t = int(input().strip())
results = []

# Process each test case
for _ in range(t):
    n = int(input().strip())
    results.append(construct_balanced_array(n))

# Print results for each test case
for result in results:
    print(result)
