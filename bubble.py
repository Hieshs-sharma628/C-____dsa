n=int(input("Enter the numbers of elements in array :: "))
print("Enter the elements of array :: ")
num=[]
p=1
for i in range(n):
    ele = int(input(f"A[{i+1}] = "))
    num.append(ele)

for i in range(n-1):
    print("\nPass number  : ",p)
    for j in range(n-i-1):
        print(f"{num[j]} is going to be compared with {num[j+1]}")
        if num[j] > num[j+1]:
            temp=num[j]
            num[j]=num[j+1]
            num[j+1]=temp
    p=p+1
print("\nSorted list is :: ",num)