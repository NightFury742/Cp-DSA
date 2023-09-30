class node:
    def __init__(self,data):
        self.data=data
        self.ref=None
    
class linkedList:
    def __init__(self):
        self.head=None


#   PRINTING A LINKED LIST
    def print_LL(self):

        if self.head is None:
            print("LL is empty")
        else:
            n=self.head

            while(n):
                print(n.data)
                n=n.ref


# ADD ELEMENTS TO THE BEGINING OF A LINKED LIST     
    def add_begin(self, data):
        new_node=node(data)
        new_node.ref=self.head
        self.head=new_node  


# ADD ELEMENTS TO THE END OF A LINKED LIST     
    def add_end(self, data):
        new_node=node(data)

        if self.head is None:
            # new_node.ref=self.head    no need to add this kyunki node class mei ref already None set hai
            self.head=new_node      
        else:
            # new_node.ref=None
            n=self.head
            while(n.ref):
                n=n.ref
            n.ref=new_node



# ADD ELEMENTS AFTER A NODE OF A LINKED LIST     
    def add_after(self, data, x):
        n=self.head
        while(n):
            if n.data==x:
                break
            n=n.ref
        
        if(n==None):
            print("node is not present in LL ")
        else:
            new_node=node(data)
            new_node.ref=n.ref
            n.ref=new_node


# ADD ELEMENTS BEFORE A NODE OF A LINKED LIST     
    def add_before(self, data, x):
        n=self.head

        if n is None:
            print("LL is empty")
            return

        if x==n.data:
            new_node=node(data)
            new_node.ref=self.head
            self.head=new_node  

        
        else:
            while(n):
                if n.ref.data==x:
                    break
                n=n.ref
        
            if(n==None):
                print("node is not present in LL ")
            else:
                new_node=node(data)
                new_node.ref=n.ref
                n.ref=new_node


# DELETE FIRST ELEMENT  OF A LINKED LIST     
    def delete_begin(self):

        if self.head==None:
            return "LL is empty"
        self.head=self.head.ref


# DELETE last ELEMENT  OF A LINKED LIST     
    def delete_end(self):
        n=self.head
        if self.head==None:
            return "LL is empty"
      
        while(n.ref.ref!=None):
            n=n.ref
        n.ref=None
            
       


LL1=linkedList()
LL1.add_begin(100)
LL1.add_begin(200)
LL1.add_begin(300)
LL1.delete_end()
LL1.delete_end()
# LL1.add_end(2.5)
# LL1.add_begin(300)
# LL1.add_after(4.5,300)
# LL1.add_before(5000,300)
LL1.print_LL( ) # print(LL1)   prints the location of the object in memory