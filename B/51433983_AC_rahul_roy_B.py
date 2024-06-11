def main():
    t = int(input())
    for _ in range(t):
        sum1 = sum2 = 0
        n = int(input())
        if n % 4 != 0:
            print("NO")
        else:
            print("YES")
            for i in range(2, n + 1, 2):
                print(i, end=" ")
                sum1 += i
            for i in range(1, n - 2, 2):
                print(i, end=" ")
                sum2 += i
            print(sum1 - sum2)

if __name__ == "__main__":
    main()
