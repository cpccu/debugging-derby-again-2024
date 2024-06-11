def main():
    t = int(input())
    for _ in range(t):
        n, m = map(int, input().split())
        a = [['a'] * (m + 1) for _ in range(n + 1)]
        a[1][1] = 'W'
        for i in range(1, n + 1):
            for j in range(1, m + 1):
                if i != 1 or j != 1:
                    a[i][j] = 'B'
        for i in range(1, n + 1):
            print(''.join(a[i][1:]))

if __name__ == "__main__":
    main()
