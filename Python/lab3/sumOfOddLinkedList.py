# write a program which finds and returns the sum of all odd numbers in a linked list

l_size=int(input("Enter size of linked list: "))
l=[]
for i in range(l_size):
    l.append(int(input("Enter value: ")))
sum=0
for i in l:
    if i%2==1:
        sum+=i
print("Sum of odd numbers is",sum)
# Output:
# Enter size of linked list: 5
# Enter value: 1
# Enter value: 2
# Enter value: 3
# Enter value: 4
# Enter value: 5
# Sum of odd numbers is 9
#