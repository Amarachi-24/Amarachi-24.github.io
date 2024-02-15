import uuid

class Item:
    def __init__(self,title,author,type):
        self.id = str(uuid.uuid4().fields[-1])[:5]
        self.title = title
        self.author = author
        self.type = type

    def __str__(self):
        return "Id: {0}, Title: {1}, Author: {2}, Type: {3}".format(self.id, self.title, self.author, self.type)