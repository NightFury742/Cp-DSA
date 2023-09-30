# write a python program to find teh maximum value in a linked list and replace it with the given unmber . assume that linked liost contains only integer numbers 
# and have only one maximum number.

l_size=int(input("Enter size of linked list: "))
l=[]
for i in range(l_size):
    l.append(int(input("Enter value: ")))
max_value=max(l)
print("Maximum value is",max_value)
replace_value=int(input("Enter value to replace: "))
for i in range(l_size):
    if l[i]==max_value:
        l[i]=replace_value
        break
print("New linked list is",l)
# Output:
# Enter size of linked list: 5
# Enter value: 1
# Enter value: 2
# Enter value: 3
# Enter value: 4
# Enter value: 5
# Maximum value is 5
# Enter value to replace: 10
# New linked list is [1, 2, 3, 4, 10]

