from time import time_ns

n=int(input("Give me a number: "))
start=time_ns()
bin=""

if n==0:
    print(0)

while n>0:
    bin+=f"{n%2}"
    n//=2
    
print(bin[::-1])
print(f"\nTime taken: {time_ns()-start}ns.")