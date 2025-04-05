import random
c=[1,2,3]
i=[1,2,3]
r="Rock"
p="Paper"
s="Scissor"
# 1-> Rock
# 2-> Paper
# 3-> Scissor
print("Welcome to [Rock / Paper / Scissor] Game!")
print("**************************************",end="")
print("\nHow This Game Works?")
print("**************************************",end="")
print("\n•Paper Captures The Rock!\n•Rock Destroys Scissor!\n•Scissor Cuts Paper!\n\n•As simple as that!")
print("**************************************")
men=0
while men==0:
    print("Start The Game: ")
    print("\nPress 1 To Play")
    print("Press 2 To Exit")
    print("**************************************")
    input_MU=int(input("Enter input: "))
    print("**************************************")
    match input_MU:
        case 1:
            computer_choice=random.choice(c)
            inputU=int(input("Choose from the following\n1. Rock\n2. Paper\n3. Scissor\n\nEnter your option: "))
            print("**************************************")
            if inputU==1 and computer_choice==1:
                print("My Choice -> {}\nComputer Choice -> {}\nResult: Tie".format(r,r))
            if inputU==1 and computer_choice==2:
                print("My Choice -> {}\nComputer Choice -> {}\nResult: I Lost".format(r,p))
            if inputU==1 and computer_choice==3:
                print("My Choice -> {}\nComputer Choice -> {}\nResult: I Won".format(r,s))
            if inputU==2 and computer_choice==1:
                print("My Choice -> {}\nComputer Choice -> {}\nResult: I Won".format(p,r))
            if inputU==2 and computer_choice==2:
                print("My Choice -> {}\nComputer Choice -> {}\nResult: Tie".format(p,p))
            if inputU==2 and computer_choice==3:
                print("My choice -> {}\nComputer Choice -> {}\nResult: I Lost".format(p,s))
            if inputU==3 and computer_choice==1:
                print("My Choice -> {}\nComputer Choice -> {}\nResult: I Lost".format(s,r))
            if inputU==3 and computer_choice==2:
                print("My Choice -> {}\nComputer Choice -> {}\nResult: I Won".format(s,p))    
            if inputU==3 and computer_choice==3:
                print("My Choice -> {}\nComputer Choice -> {}\nResult: Tie".format(s,s))
            print("**************************************")
        case 2:
            men=1
            break
        case _:
            print("Enter valid input")
            print("**************************************")

        
