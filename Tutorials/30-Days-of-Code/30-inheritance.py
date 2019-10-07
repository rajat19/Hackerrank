

class Student(Person):
    def __init__(self, fname, lname, id, scores):
        self.firstName = fname
        self.lastName = lname
        self.idNumber = id
        self.scores = scores

    def calculate(self):
        avg = sum(self.scores) / len(self.scores)
        if avg < 40: return 'T'
        if avg < 55: return 'D'
        if avg < 70: return 'P'
        if avg < 80: return 'A'
        if avg < 90: return 'E'
        return 'O'

