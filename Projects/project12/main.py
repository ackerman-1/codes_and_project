from logo import art
import random


def rand_num():

    global random_number
    random_number = random.randint(1, 100)


def compare(a):
    global random_number
    if a < random_number:
        print('too low')
    elif a > random_number:
        print('Too high')
    else:
        print(f"You got the number correct, the number is {a}")
        exit(0)


def main():
    print(art)
    rand_num()
    print("Welcome to the number guessing game, type 'easy' for easy mode 'hard' for hard")
    choice = input()
    if (choice == 'easy' or 'EASY'):
        chance = 10
    else:
        chance = 5

    while (chance > 0):

        user_num = int(input('put ur guess: '))
        compare(user_num)
        chance = chance-1


main()
