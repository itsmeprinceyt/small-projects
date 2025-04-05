import aspose.pdf as ap

def dec(fx):
    def mfx():
        print("----------------------")
        fx()
        print("----------------------")
    return mfx

@dec
def pdf_maker():
    document=ap.Document()
    page=document.pages.add()
    str=input("Enter what you want to write in the pdf: ")
    text_fragment = ap.text.TextFragment(str)
    page.paragraphs.add(text_fragment)
    str1=input("Save as: ")
    document.save(f"{str1}.pdf")

if __name__=="__main__":
    pdf_maker()