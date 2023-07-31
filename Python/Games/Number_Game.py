from ast import Try
from logging import exception
from operator import truediv

class Error(Exception):
    pass
class ValueTooSmallError(Error):
    pass
class ValueTooLargeError(Error):
    pass

#gues the number game
num=74

while True:
    try:
        i_num=int(input("GUESS THE NUMBER: "))
        if i_num<num:
            raise ValueTooSmallError
        elif i_num>num:
            raise ValueTooLargeError
        break
    except ValueTooSmallError:
        print("TRY SOME BIG NUMBER")
        print()
    except ValueTooLargeError:
        print("TRY SOME SMALL NUMBER")
        print()
print("CONGO!! RIGHT NUMBER")     