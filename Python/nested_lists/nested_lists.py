if __name__ == '__main__':
    # Create a students list
    students = list()

    # Create the set to store the scores
    scores = set()

    for _ in range(int(input())):
        name = input()
        score = float(input())

        # Create a list of each student
        student = [name, score]

        # Add each student score to a set
        scores.add(score)

        # Add each student list to the general students list
        students.append(student)

    # Order the set of students scores
    ordered_scores = sorted(scores)

    # Get the second lowest from the student scores
    second_lowest_score = ordered_scores[1]

    # Print the student names with the second lowest score
    for student in sorted(students):
        if student[1] == second_lowest_score:
            print(student[0])
