def solve(t, test_cases):
    results = []
    for n in test_cases:
        k = 2
        while True:
            divisor = (1 << k) - 1  # This is 2^k - 1
            if n % divisor == 0:
                x = n // divisor
                results.append(x)
                break
            k += 1
    return results

# Example usage:
t = int(input().strip())
test_cases = [int(input().strip()) for _ in range(t)]
results = solve(t, test_cases)
for result in results:
    print(result)
