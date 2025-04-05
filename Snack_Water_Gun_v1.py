import random
c=[1,2,3]
i=[1,2,3]
s="Snake"
w="Water"
g="Gun"
# 1-> Snack
# 2-> Water
# 3-> Gun
print("Welcome to Snack / Water / Gun Game!")
print("**************************************",end="")
print("\nHow This Game Works?")
print("**************************************",end="")
print("\n•Snack Drinks Water\n•Water Breaks The Gun\n•Gun Kills the Snack!\n•As simple as that!")
print("**************************************")
men=0
while men==0:
    print("Start The Game: ")
    print("\n1. Play")
    print("2. Exit")
    print("**************************************")
    input_MU=int(input("Enter input: "))
    print("**************************************")
    match input_MU:
        case 1:
            computer_choice=random.choice(c)
            inputU=int(input("Choose from the following\n1. Snake\n2. Water\n3. Gun\n\nEnter your option: "))
            print("**************************************")
            if inputU==1 and computer_choice==1:
                print("My Choice {}\nComputer Choice {}\nResult: Tie".format(s,s))
            if inputU==1 and computer_choice==2:
                print("My Choice {}\nComputer Choice {}\nResult: I Won".format(s,w))
            if inputU==1 and computer_choice==3:
                print("My Choice {}\nComputer Choice {}\nResult: I Lost".format(s,g))
            if inputU==2 and computer_choice==1:
                print("My Choice {}\nComputer Choice {}\nResult: I Lost".format(s,w))
            if inputU==2 and computer_choice==2:
                print("My Choice {}\nComputer Choice {}\nResult: Tie".format(w,w))
            if inputU==2 and computer_choice==3:
                print("My choice {}\nComputer Choice {}\nResult: I Win".format(w,g))
            if inputU==3 and computer_choice==1:
                print("My Choice {}\nComputer Choice {}\nResult: I Win".format(g,s))
            if inputU==3 and computer_choice==2:
                print("My Choice {}\nComputer Choice {}\nResult: I Lost".format(g,w))    
            if inputU==3 and computer_choice==3:
                print("My Choice {}\nComputer Choice {}\nResult: Tie".format(g,g))
            print("**************************************")
        case 2:
            men=1
            break
        case _:
            print("Enter valid input")
            print("**************************************")

        
