import string
import random

def encode(s):
    print(f"\nYour Entered String is -> {s} <-\n")
    if len(s)<3:
        print(f"Your Encrypted Data -> {s} <- is : {s[::-1]}\n\n")
    else:
        first=s[:1]
        second=s[1:len(s)]
        done=[]
        done.append(second+first)
        letters=[]
        for i in range(7):
            letters.append(random.choice(string.ascii_letters))
        for i in range(3):
            done.insert(i,letters[i])
        done.append(letters[4])
        done.append(letters[5])
        done.append(letters[6])
        for i in done:
            print(i,end="",sep="")
        
    print("\n\n")

def decode(s):
    print(f"\nYour Entered String is -> {s} <-\n")
    if len(s)<3:
        print(f"Your Decrypted Data -> {s} <- is: {s[::-1]}\n\n")
    else:
        res=s[3:len(s)-3]
        fl=res[-1]
        result=fl+res
        print(f"Your Decrypted Data -> {s} <- is : {result[0:len(result)-1]}\n\n")
        

while(True):
    print("Decrypter & Encrypter\n")
    try:
        a=int(input("1. Encrypt\n2. Decrypt\n3. Exit\n\nEnter your choice: "))
    except:
        print("Enter Numbers!")
    match(a):
        case 1:
            str=input("Enter your string to encrypt: ")
            encode(str)
        case 2:
            str=input("Enter your string to decrypt: ")
            decode(str)
        case 3:
            break
        case _:
            print("Invalid Input")