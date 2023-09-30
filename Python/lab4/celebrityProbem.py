user=int(input("Enter number of people: "))
matrix=[]
for i in range(user):
    matrix.append(list(map(int,input().split())))
stack=[]
for i in range(user):
    stack.append(i)
while len(stack)>1:
    a=stack.pop()
    b=stack.pop()
    if matrix[a][b]==1:
        stack.append(b)
    else:
        stack.append(a)
if len(stack)==0:
    print("No celebrity")
else:
    print("Celebrity is",stack.pop())
# Output:
# Enter number of people: 4
# 0 1 1 0
# 0 0 0 0
# 0 1 0 0
# 0 1 1 0
# Celebrity is 1

# give me a test case
# 0 1 1 0
# 0 0 0 0
# 0 1 0 0
# 0 1 1 0
# Celebrity is 1
#
# give me a test case
# 0 1 1 0
# 0 0 1 0
# 0 1 0 0
# 0 1 1 0
# No celebrity
#
# give me a test case
# 0 1 1 0
# 0 0 1 0
# 0 1 0 1

# 0 1 1 0
# Celebrity is 3
