# write a program to implement the feature of text editor using stack which gives the option to add, delete and quit the text editor

user_text=input()
stack=[]
for i in user_text:
    stack.append(i)
while True:
    print("1. Add text")
    print("2. Delete text")
    print("3. Quit")
    choice=int(input("Enter your choice: "))
    if choice==1:
        text=input("Enter text to add: ")
        for i in text:
            stack.append(i)
        print("".join(stack))
    elif choice==2:
        text=input("Enter text to delete: ")
        if text in "".join(stack):
            for i in text:
                stack.remove(i)
            print("".join(stack))
        else:
            print("Text not found")
            print()
    elif choice==3:
        break
    else:
        print("Invalid choice")
        print()
print("".join(stack))
print()
