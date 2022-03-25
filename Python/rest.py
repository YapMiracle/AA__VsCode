# a = input().split(" ")
# b = []
# for i in a:
#     i = int(i)
#     b.append(i)
# b.sort()
# def isDengCha(arr):
#     cha = arr[1] - arr[0]
#     for i in range(len(arr)-1):
#         if arr[i+1] - arr[i] != cha:
#             return False
#     return True
# print(isDengCha(b))
# def twonums_sum(n, lst: list):
#     for i in lst:
#         if n-i in lst:
#             print(f"({lst.index(i)},{lst.index(n-i)})")
#             return
#     print("not found")
# lst = [1, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 15, 18, 19, 20, 21, 29, 34, 54, 65]
# n = int(input())
# twonums_sum(n, lst)
# print(2 in lst)
def splitLst(lst):
    tmp = []
    n = 0
    for i in range(len(lst)-1):
        if lst[i] != lst[i+1]:
            tmp.append(lst[n:i+1])
            n = i+1
    tmp.append(lst[n:])
    for i in tmp:
        if i != tmp[len(tmp)-1]:
            print(i, end = ",")
        else:
            print(i)
a = eval(input())
# [0,0,0,1,1,2,3,3,3,2,3,3,0,0]
splitLst(a)
# print()