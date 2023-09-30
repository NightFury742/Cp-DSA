#  write a program for string reversal using stack 

string=input()
stack=[]
for i in string:
    stack.append(i)
string=""
while stack:
    string+=stack.pop()
print(string)
