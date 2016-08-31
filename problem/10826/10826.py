n = input()
a = 1
b = 0
c = 0
for i in range(2,n+1):
    c = a + b
    b = a
    a = c
if n==0: print '0'
else: print a
