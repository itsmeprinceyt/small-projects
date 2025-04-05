import win32com.client
def div():
    print("---------------")
speaker=win32com.client.Dispatch("SAPI.SpVoice")
div()
print("Text To Speech")
while True:
    div()
    s=input("Enter what you want me to speak: ")
    speaker.Speak(s)
    div()
    print("Enter 1 to continue\nEnter 0 to exit")
    div()
    ui=int(input("Enter your input:"))
    if ui == 0:
        break