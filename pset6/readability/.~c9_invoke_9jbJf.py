def lattersCount(string):
    latters = 0
    for i in string:
        if i >= "a" and i <= "z":
            latters += 1
    return latters 

def wordCount(string):
    words = 0
    for i in string:
        if i == " ":
            words += 1
    return words 

def sentenceCount(string):
    sentence = 0
    for i in string:
        if i == "." or i == "!" or i == "?":
            sentence += 1
    return sentence 
            

userInp = str(input("please enter a sentence :  "))

latters = lattersCount(userInp)
words = wordCount(userInp)
sentence = sentenceCount(userInp)
#print(latters, words, sentence)
L = latters * 100 / words
S = sentence * 100 / words
index = round(0.0588 * L - 0.296 * S - 15.8)

if (index < 1):
    print("Before Grade 1")

elif (index >= 16):
    print("Grade 16+")

else:
    print(f"Grade {index}")
