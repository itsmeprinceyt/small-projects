from PIL import Image
import pytesseract
import pyautogui

def read_screen_text(region=None):
    """
    Read text from a specified region on the screen using OCR.
    Args:
        region (tuple): (x, y, width, height) for the region to capture.
    Returns:
        str: Extracted text.
    """
    screenshot = pyautogui.screenshot(region=region)
    text = pytesseract.image_to_string(screenshot, lang='eng')
    return text

# Define the region where the card drop message appears (x, y, width, height)
card_message_region = (400, 300, 600, 100)  # Adjust based on your screen layout

# Example usage:
text = read_screen_text(region=card_message_region)
print("Screen Text:", text)

if "dropped" in text.lower():
    print("Cards detected via text!")
else:
    print("No card drop message found.")
