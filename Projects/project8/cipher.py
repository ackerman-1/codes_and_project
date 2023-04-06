from art import logo

print(logo)
alphabet = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
            'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']


def caesar(text, shift):

    cipher_text = ''
    for i in text:
        if i.isalpha():
            text_index = alphabet.index(i)
            if (direction == 'encode'):
                new_index = text_index + (shift % 26)
            else:
                new_index = text_index - (shift % 26)
            new_letter = alphabet[new_index]
            cipher_text = cipher_text+new_letter
        else:
            cipher_text = cipher_text+i
    print(f"The desired text is {cipher_text}")


choice = False
while choice == False:
    direction = input(
        "Type 'encode' to encrypt, type 'decode' to decrypt:\n")
    text = input("Type your message:\n").lower()
    shift = int(input("Type the shift number:\n"))
    caesar(text, shift)
    query = input("Do you want to go again?\n Type yes or no: ")
    if query == ('yes' or 'YES' or 'Yes'):
        choice = False
    else:
        choice = True
