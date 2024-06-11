def paint_board(n, m):
    board = [['B' if (i + j) % 2 == 0 else 'W' for j in range(m)] for i in range(n)]
    for row in board:
        print(''.join(row))

# Input reading
t = int(input().strip())
for _ in range(t):
    n, m = map(int, input().strip().split())
    paint_board(n, m)
