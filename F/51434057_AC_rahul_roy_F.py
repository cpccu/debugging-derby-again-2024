def main():
    t = int(input())
    for _ in range(t):
        c = 0
        pos = pos2 = -1
        s = input().strip()
        for i in range(len(s)):
            if s[i] == '1':
                pos = i
                break
        for i in range(len(s) - 1, pos, -1):
            if s[i] == '1':
                pos2 = i
                break
        for i in range(pos, pos2):
            if s[i] == '0':
                c += 1
        print(c)

if __name__ == "__main__":
    main()
