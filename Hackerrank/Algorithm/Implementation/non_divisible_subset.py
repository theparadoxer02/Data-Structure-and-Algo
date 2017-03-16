def sumoflist(array):
  sum = 0
  for i in array:
    sum = sum + i
  return sum

def find_subsets(so_far, rest,count):
  print 'parameters', so_far, rest
  if sumoflist(so_far)%3 == 0:
    count=count+1
  elif sumoflist(rest)%3 == 0:
    count =  count + 1
  print sumoflist(so_far),sumoflist(rest)
  if not rest:
      print so_far
  else:
      find_subsets(so_far + [rest[0]], rest[1:])

count = 0

find_subsets([],[1,7,2,4])