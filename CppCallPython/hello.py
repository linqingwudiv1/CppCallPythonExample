class math:
    def __init__(self):
        self.test = '<test>'
    def add(self, num1, num2):
        print (self)
        print ("add functin start:", self.test)
        print (num1 + num2)

        print ("add functin end:<", self.test + ">")
        return num1 + num2

    def subtract(self, num1, num2):
        print (self)
        print ("sub functin :")
        print (num1 - num2)
        return num1 - num2