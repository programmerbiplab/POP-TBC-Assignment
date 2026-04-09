#Biplab Prasad Gajurel 25024641
def read_mark():
    mark = int(input("Enter your POP In-class tests mark: "))
    if mark < 0 or mark > 500:
        raise ValueError("Invalid mark")
    return mark

try:
   a = ['a', 'b', 'c']
   print (a[4])
except LookupError:
   print ("Index Error Exception: list index out of range")
else:
  print ("No error!")