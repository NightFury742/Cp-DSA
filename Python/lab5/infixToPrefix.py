#  write a program to convert infix expression to pretfix expression using stack

exp=input()
stack=[]
prefix=""
for i in exp:
    if i.isalpha():
        prefix+=i
    elif i=="(":
        stack.append(i)
    elif i==")":
        while stack[-1]!="(":
            prefix+=stack.pop()
        stack.pop()
    else:
        while stack and stack[-1]!="(" and i in ["+","-","*","/"]:
            prefix+=stack.pop()
        stack.append(i)
while stack:
    prefix+=stack.pop()
print(prefix[::-1])
