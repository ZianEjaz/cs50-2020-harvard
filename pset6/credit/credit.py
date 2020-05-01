def intToLi(num):
    numLi = []
    for i in num:
        numLi.append(int(i))
    return numLi

def cardCheck(num):
    #american express check
    if num[0] == 3 and (num[1] == 4 or num[1] ==7):
        print("AMEX")
    elif num[0] == 5 and (num[1] > 0 and num[1] < 6):
        print("MASTERCARD")
    elif num[0] == 4:
        print("VISA")
    else:
        print("INVALID")

cardNumber = input("please enter a card number : ")
cardLi = intToLi(cardNumber)
cardCheck(cardLi)