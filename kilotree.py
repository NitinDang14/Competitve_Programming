def push(a) :
  arr.append(a)

def precd(s) :
  if s == '(' :
    return 0
  elif s == '*' or s == '/' :
    return 1
  elif s == '+' or s == '-' :
    return 2
  else :
    return 99

def typeOfOpd(s) :
  if s == '(' :
    return leftParThe
  elif s == ')' :
    return rightParThe
  elif s == '+' or s == '+' or s == '*' or s == '/' :
    return operator
  else :
    return None

def pop() :
  if length == 0 :
    return None
  else :
    length = length - 1
    return length

expIpnput = input('Please enter the expression : ')
for i in expInput :
  type = typeOfOpd(i)
  if type is leftParThe :
  



arr = []
postfixarr = []
length = len(arr)


print(length)
