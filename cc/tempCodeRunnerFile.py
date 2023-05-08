import subprocess
import random

# Define the command to execute the C++ program
command = ['./my_program']

# Define the number of test cases to generate
num_tests = 10

# Generate random test cases
tests = [(random.randint(1, 100),) for _ in range(num_tests)]

# Open a subprocess to execute the C++ program
with subprocess.Popen(command, stdin=subprocess.PIPE, stdout=subprocess.PIPE) as process:
    # Pass each input to the program and collect its output
    for test in tests:
        # Pass the input to the program and read its output
        input_str = ' '.join(str(i) for i in test) + "\n"
        process.stdin.write(input_str.encode())
        output_str = process.stdout.readline().decode().strip()

        # Print the input and output for reference
        print(f'Input: {test}\nOutput: {output_str}\n')
