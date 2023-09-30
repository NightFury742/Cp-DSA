# write a program to evaluate given postfix expression using stack

exp=input()
stack=[]
for i in exp:
    if i.isalpha():
        stack.append(int(input("Enter value for "+i+": ")))
    else:
        a=stack.pop()
        b=stack.pop()
        if i=="+":
            stack.append(a+b)
        elif i=="-":
            stack.append(b-a)
        elif i=="*":
            stack.append(a*b)
        elif i=="/":
            stack.append(b/a)
print(stack.pop())

# Output:
# Enter value for a: 2
# Enter value for b: 3
# Enter value for c: 4
# Enter value for d: 5
# ab+cd-*
# -3
# Enter value for a: 2
# Enter value for b: 3
# Enter value for c: 4
# Enter value for d: 5
# ab+cd-*

# give me a test case
# 2 3 + 4 5 - *
# -3

