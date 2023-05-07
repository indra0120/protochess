from time import time

n=int(input("Give me a number: "))
start=time()
bin=""

if n==0:
    print(0)

while n>0:
    bin+=f"{n%2}"
    n//=2
    
print(bin[::-1])
print("\nTime taken:", time()-start)