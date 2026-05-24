print("Enter your 5 subjects marks")
phy = float(input("1.Physics: "))
chem = float(input("2.Chemistry: "))
math = float(input("3.Mathematics: "))
hin = float(input("4.Hindi: "))
eng = float(input("5.English: "))
total = phy + chem + math + hin + eng
percentage = (total * 100) / 500
print("Your Report card 👍")
print("Total marks obtain by You:", total)
print("Your Percentage is:", percentage)
if percentage >= 90:
    print("Your grade is: A")
elif percentage >= 80 and percentage < 90:
    print("Your grade is: B")
elif percentage >= 70 and percentage < 80:
    print("Your grade is: C")
elif percentage >= 60 and percentage < 70:
    print("Your grade is: D")
elif percentage > 33 and percentage < 60:
    print("Your grade is: F")
elif percentage == 33:
    print("You just passed 🤣😂")
    print("I think your are a backbencher 😂🤣🤣")
else:
    print("Your are failed in your exam 😫👎")
    print("try again for your exam")
    print("thank you")