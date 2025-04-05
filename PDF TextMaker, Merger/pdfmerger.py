from pypdf import PdfWriter
from pdfmaker import pdf_maker
import os
print("----------------------")
print("Small PDF Manager")
print("----------------------")
while True:
    print("Enter 1 To Make A File: ")
    print("Enter 2 To Merge: ")
    print("----------------------")
    UI=int(input("Enter your input:"))
    if UI == 1:
        pdf_maker()
    if UI == 2:
        break
print("----------------------")
print("Files found")
print("----------------------")
pdfl=[]
cl=os.listdir()
for i in cl:
    if i.endswith(".pdf"):
        pdfl.append(i)
        print(i)

merger= PdfWriter()
for pdf in pdfl:
    merger.append(pdf)
merger.write("Merge/Merged_doc.pdf")
merger.close
print("----------------------")
print("Merging  has been done")

