student_scores = {
    "Harry": 81,
    "Ron": 78,
    "Hermione": 99,
    "Draco": 74,
    "Neville": 62,
}
# 🚨 Don't change the code above 👆


def grader(grade):
    if (grade > 90 and grade < 100):
        return "Outstanding"
    elif (grade > 80 and grade < 91):
        return "Exceeds Expectations"
    elif (grade > 70 and grade < 81):
        return "Acceptable"
    else:
        return "Fail"


student_grades = []
for i in student_scores:
    student_grades.append(student_scores.keys(),
                          grader(student_scores.values()))


# TODO-1: Create an empty dictionary called student_grades.


# TODO-2: Write your code below to add the grades to student_grades.👇


# 🚨 Don't change the code below 👇
print(student_grades)
