import random
from art import logo
print(logo)
sum_comp = 0
sum_user = 0


def card_draw():

    cards = {1: "A", 2: "2", 3: "3", 4: "4", 5: "5", 6: "6",
             7: "7", 8: "8", 9: "9", 10: "J", 10: "Q", 10: "K"}
    return random.choice(list(cards.values())), random.choice(list(cards.keys()))


user_list = []
comp_list = []


def initial_card_distribution():
    global sum_comp, sum_user
    user_list.append(card_draw())
    user_list.append(card_draw())
    comp_list.append(card_draw())
    comp_list.append(card_draw())

    sum_comp = comp_list[0][1] + comp_list[1][1]
    sum_user = user_list[0][1] + user_list[1][1]


def main():
    initial_card_distribution()
    global sum_user
    global sum_comp
    print(f"The value of the first card of computer is {comp_list[0][0]}")
    choice = (input("Do you want to pick the card? \nType Hit or Stand ")).lower()
    if choice == "hit":
        print("The user chose Yes")  # write further code to get an extra card
    else:
        print("The user chose No")  # write further code to start the compare


def end():
    global sum_comp
    global sum_user
    flag1 = True
    if sum_user > sum_comp:
        flag1 = True
    elif sum_user > 21:
        flag1 = False
    elif sum_comp > 21:
        flag1 = True
    else:
        flag1 = False
    if flag1:
        print("You are the winner")
    else:
        print("The computer is the winner")
