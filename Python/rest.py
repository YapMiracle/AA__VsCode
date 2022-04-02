# a=int(input())
# i=1
# ans=0
# for i in range(1, 101):
#     if (i%6!=0) and (str(a) not in str(i)):
#         print(i, end=",")
#         ans+=1
#     else:
#         continue
#     if ans%10==0:
#         print()
# a=eval(input())
# a=list(a)
# max1=-1
# for i in range(len(a)):
#     for j in range(i, len(a)):
#         max1=max(a[j]-a[i], max1)
# print(max1)
# def func():
#     print("输入:")
#     a=input("输入数字（<Enter> 退出）:")
#     b=[]
#     while a!='':
#         b.append(int(a))
#         a=input("输入数字（<Enter> 退出）:")
#     print("输出")
#     try:
#         print(f"数字的平均值为:{round(sum(b)/len(b), 1)}")
#     except ZeroDivisionError:
#         func()
# func()
# def isolate(a):
#     c=[]
#     while a!=0:
#         c.append(a%10)
#         a//=10
#     return c
# def squareSum(c):
#     sum=0
#     for i in c:
#         sum+=i**2
#     return sum
def isHappyNumber(a: int)->bool:
    def next_sum(a):
        total_sum=0
        while a>0:
            a, b=divmod(a, 10)
            total_sum+=b**2
        return total_sum
    se=set()
    while a!=1 and a not in se:
        se.add(a)
        a=next_sum(a)
    return a==1
print(isHappyNumber(44))