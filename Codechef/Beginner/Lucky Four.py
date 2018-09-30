#Had to implement this in Python since its a lot easier.


num=int(input())
for i in range(num):


  string=input()
  b=len(string)
  c=0
  for x in range(b):
    m=int(string[x])
    if m==4:
      c=c+1
  print(c)
