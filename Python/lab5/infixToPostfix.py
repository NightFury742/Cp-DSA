# write a program to convert infix expression to postfix expression using stack


exp=input()
stack=[]
postfix=""
for i in exp:
    if i.isalpha():
        postfix+=i
    elif i=="(":
        stack.append(i)
    elif i==")":
        while stack[-1]!="(":
            postfix+=stack.pop()
        stack.pop()
    else:
        while stack and stack[-1]!="(" and i in ["+","-","*","/"]:
            postfix+=stack.pop()
        stack.append(i)
while stack:
    postfix+=stack.pop()
print(postfix)

