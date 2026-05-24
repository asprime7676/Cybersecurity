a = input("Enter the number: ")

b = list(a)      # number ko list me convert kiya
c = b.copy()     # original list ka copy banaya

b.reverse()      # reverse kiya

if b == c:
    print("the given number are palindrome number")
else:
    print("the given number are NOT palindrome number")
