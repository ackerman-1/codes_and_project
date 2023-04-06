import hashlib
from rough import message1
from rough import message2
# Read the messages and their hash values from files
# with open('message1.txt', 'r') as f1:
#     message1 = f1.read().encode()

# with open('message2.txt', 'r') as f2:
#     message2 = f2.read().encode()

with open('hash.txt', 'r') as f3:
    target_hash = f3.read().strip()

# Try all possible combinations of the two messages until a hash collision is found
for i in range(len(message1)):
    for j in range(len(message2)):
        new_message1 = message1[:i] + message2[j:]
        new_message2 = message2[:j] + message1[i:]
        new_hash1 = hashlib.sha256(new_message1).hexdigest()
        new_hash2 = hashlib.sha256(new_message2).hexdigest()
        if new_hash1 == new_hash2 == target_hash:
            # Collision found!
            print(
                f'Collision found:\n{new_message1}\n{new_message2}\nFlag: abcdefg')
            break
    else:
        continue
    break
