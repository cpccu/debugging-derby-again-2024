def create_good_coloring(n, m):
    board = [['B' if (i + j) % 2 == 0 else 'W' for j in range(m)] for i in range(n)]
    
    # Adjust to ensure B = W + 1
    if n % 2 == 0 and m % 2 == 0:
        board[0][0] = 'B'
        board[0][1] = 'B'
    elif n % 2 == 1:
        board[0][0] = 'B'
        board[1][0] = 'B'
    elif m % 2 == 1:
        board[0][0] = 'B'
        board[0][1] = 'B'
    
    return board

def solve(t, test_cases):
    results = []
    for n, m in test_cases:
        coloring = create_good_coloring(n, m)
        results.append(coloring)
    return results

# Read number of test cases
t = int(input().strip())
test_cases = []
for _ in range(t):
    n, m = map(int, input().strip().split())
    test_cases.append((n, m))

# Get results for all test cases
results = solve(t, test_cases)

# Print results for each test case
for result in results:
    for row in result:
        print(''.join(row))
