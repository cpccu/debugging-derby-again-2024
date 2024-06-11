def paint_board(n, m):
    # Generate the colored board
    board = [['B' if (i + j) % 2 == 0 else 'W' for j in range(m)] for i in range(n)]
    # Print each row of the board
    for row in board:
        print(''.join(row))

# Input reading
t = int(input().strip())  # Read the number of test cases
# Iterate over each test case
for _ in range(t):
    # Read the dimensions of the board for the current test case
    n, m = map(int, input().strip().split())
    # Call the function to paint and print the board
    paint_board(n, m)
