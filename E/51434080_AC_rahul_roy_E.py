def main():
    n, m = map(int, input().split())
    st = [input() for _ in range(n)]

    ans, v, v1, v2 = [], [], [], []
    chk = [False] * 1005

    for i in range(n):
        for j in range(n):
            s2 = st[j][::-1]
            if i != j and not chk[i] and not chk[j] and st[i] == s2:
                v.append(st[i])
                v1.append(st[j])
                chk[i] = True
                chk[j] = True
                break

    for i in range(n):
        s2 = st[i][::-1]
        if not chk[i] and st[i] == s2:
            v2.append(st[i])
            break

    if not v and not v2:
        print(0)
    else:
        if v:
            ans.extend(v)
        if v2:
            ans.extend(v2)
        if v1:
            ans.extend(reversed(v1))

        s3 = ''.join(ans)
        print(len(s3))
        print(s3)

if __name__ == "__main__":
    main()
