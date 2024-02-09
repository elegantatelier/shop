import pyautogui
import random
import time
import random
import string
import nltk
nltk.download('punkt')


def get_random_words(words):
    return random.choice(words)

filename = "C:\new\wordfile.txt"
file = open(filename,"r",encoding="utf-8")
text = file.read()
text = text.replace("\n"," ")
tokenizer = nltk.data.load("tokenizers/punkt/english.pickle")
words = nltk.tokenize.word_tokenize(text)

n=0
for i in range(60):
    
        pyautogui.moveTo(x=200, y=50,duration=1)
        pyautogui.click(x=200, y=50,duration=2)
        pyautogui.typewrite(get_random_words(words))
        pyautogui.hotkey('enter')
        time.sleep(random.uniform(5,6))
        if i == 35 or i == 59:
            pyautogui.moveTo(x=1578, y=54,duration=1)
            pyautogui.click(x=1578, y=54,duration=2)
            pyautogui.moveTo(x=1411, y=155,duration=1)
            pyautogui.click(x=1411, y=155,duration=2)
time.sleep(random.uniform(0.5,10))


