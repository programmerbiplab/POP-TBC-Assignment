#Biplab Prasad Gajurel 25024641
def input_numbers():
  a = float(input("Enter first number:"))
  b = float(input("Enter second number:"))
  try:
   print(f"{a} / {b} is {a/b}")
  except ZeroDivisionError as exp:
   print(exp)
   print("\nCannot divide by zero\n")
   input_numbers()
input_numbers()