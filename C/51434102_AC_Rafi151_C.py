def find_triangle_sides(t, test_cases):
    results = []
    for i in range(t):
        a, b, c, d = test_cases[i]
        # x, y, z
        x = b
        y = c
        z = c
        results.append((x, y, z))
    return results

# Reading input
t = int(input().strip())
test_cases = []
for _ in range(t):
    a, b, c, d = map(int, input().strip().split())
    test_cases.append((a, b, c, d))

# Getting results
results = find_triangle_sides(t, test_cases)

# Printing results
for result in results:
    print(result[0], result[1], result[2])
