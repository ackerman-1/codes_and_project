import hashlib
message1 = "The flag is 23F-Hj!-9989".encode()
message2 = "The flax is 23F-Hj!-9989".encode()
# message2 = "Titan".encode()
hash1 = hashlib.sha256(message1).hexdigest()
hash2 = hashlib.sha256(message2).hexdigest()
print(hash1)
print(hash2)
