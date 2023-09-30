s="(A - B/C) * (A/K-L)"
s=s.strip('(')
s=s.strip(')')
print(s[::-1])


# # a = list(map(int,input().split()))
# # t = int(input())

# # l=0
# # r=len(a) - 1
# # m=0
# # while(l<=r):
# #     m=(r+l)//2

# #     if a[m] == t:
# #         break
# #     elif a[m] < t:
# #         l = m + 1
# #     else:
# #         r = m - 1
# # else:
# #     m=-1
# # print(m)




# def binary_search(arr, x):
#     low = 0
#     high = len(arr) - 1
#     mid = 0
 
#     while low <= high:
 
#         mid = (high + low) // 2
 
#         # If x is greater, ignore left half
#         if arr[mid] == x:
#             return mid
#         elif arr[mid] < x:
#             low = mid + 1
#         else:
#             high = mid - 1
#     # If we reach here, then the element was not present
#     return -1


# arr = list(map(int,input().split()))
# x = int(input())
# result = binary_search(arr, x)
# if result != -1:
#     print("Element is present at index", str(result))
# else:
#     print("Element is not present in array")

# # def GCD(a,b):
# #     if b==0:
# #         return a
# #     else:
# #         return GCD(b,a%b)
# # a= int(input())
# # b= int(input())
# # print(GCD(a,b))

# # l=[122,3,4,567]
# # l.sort(reverse=True)
# # print(l)

# # linear search recursive approach

# # ans="Not found"
# # def Liner_Search(lst,to_search,index):
# #     if index == len(lst):
# #         return
# #     if lst[index]==to_search:
# #         global ans
# #         ans="Found"
# #     Liner_Search(lst,to_search,index+1)
# # a = list(map(int,input().split()))
# # t = int(input())
# # i = 0
# # Liner_Search(a,t,i)
# # print(ans)