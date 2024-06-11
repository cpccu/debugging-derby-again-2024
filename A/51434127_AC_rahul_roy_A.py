inputs = []
outputs = []
k_max = 100
j_old = -1

for _ in range(int(input())):
    inputs.append(int(input()))



def find_k(k):
    if k >= 0:
        result = 2 ** k + find_k(k - 1)
       
    else:
        result = 0
    return result



for j in inputs:
    if j != j_old:
        for i in range(1, k_max):
            
            x = j / find_k(i)
            if int(x) == x:
                
                print(int(x))
                break
        j_old = j
    else:
        print(int(x))

