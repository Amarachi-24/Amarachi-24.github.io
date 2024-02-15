import uuid

class Member:
    def __init__(self, id,name, membership_date):
        self.id = str(uuid.uuid4().fields[-1])[:5]
        self.name = name
        self.membership_date = membership_date

    def __str__(self):
        return "Id: {0}, Name: {1}, Membership Date: {2} ".format(self.id, self.name, self.membership_date)
    
    def toCSV(self):
        return "{0},{1},{2}".format(self.id, self.name, self.membership_date)