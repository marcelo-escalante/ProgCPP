def isprime(m):
    if m < 2:
        return False
    for i in range(2,m):
        if m%i == 0:
            return False
    return True

counter = 0
n = 100000

for i in range(2,n):
    if isprime(i):
        #print(i)
        counter += 1
        
print(counter)
