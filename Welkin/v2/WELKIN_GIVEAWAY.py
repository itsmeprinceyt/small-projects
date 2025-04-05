import random
import time
from playsound import playsound

def div():
    print("\033[1;37;40m********************************\033[0m")

def colored_text(text, color_code):
    return f"\033[{color_code}m{text}\033[0m"

COLORS = {
    'red': '31',
    'green': '32',
    'yellow': '33',
    'blue': '34',
    'purple': '35',
    'cyan': '36',
}

div()
print(colored_text("WELKIN GIVEAWAY", COLORS['cyan']))
div()

Participants = []
while (Users := input(colored_text("Enter Participant's Name[Type \"gg\" to start]: ", COLORS['green']))) != "gg":
    Participants.append(Users)

div()
print(colored_text("ALL THE MEMBERS ARE BEING REGISTERED!", COLORS['yellow']))
div()

for i in range(20, 0, -1):
    print(colored_text(f"RAFFLE STARTING IN {i} second!", COLORS['red']))
    time.sleep(1)

div()
print(colored_text("ENTERED USERS ARE THE FOLLOWING...(=^.^=)", COLORS['purple']))
div()

for i, x in enumerate(Participants):
    print(colored_text(f"{i+1} - {x}", COLORS['blue']))

div()

String2 = input(colored_text("Type 'Yes' To Start!: ", COLORS['green']))
String3 = String2.lower()

if String3 == "yes":
    pass

div()

counter = len(Participants)
while True:
    yolo = input(colored_text("Start?: ", COLORS['green']))
    print("")

    for i in range(7):
        time.sleep(1)
        print(colored_text(f"{7-i} seconds for upcoming roll!", COLORS['yellow']))

    print("\n")
    print(colored_text(f"{counter} Participants Left | 🥸Program🔪: Thinking who should I kick....", COLORS['purple']))
    
    number = random.randint(0, len(Participants) - 1)
    print(colored_text(f"🤡Program🤡: !p oe hogaya tumhara toh {Participants[number]} 🔪", COLORS['red']))
    playsound('oe1.mp3')

    counter -= 1
    Participants.pop(number)

    if len(Participants) == 1:
        time.sleep(2)
        print(colored_text(f"So the winner of the Giveaway is......", COLORS['yellow']))
        time.sleep(2)
        break
    if len(Participants) == 0:
        time.sleep(2)
        print(colored_text(f"So the winner of the Giveaway is......", COLORS['yellow']))
        time.sleep(2)
        break

div()

for i in Participants:
    print(colored_text(f"🥳Congratulations! 🥳Winner of the Giveaway is🥳 >>>>>>{i}<<<<<<", COLORS['green']))
    print(colored_text("Please Message me your Game Details in Discord! Thank you for participating!", COLORS['cyan']))
    playsound('oe.mp3')

div()
