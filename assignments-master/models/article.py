from models.item import Item

class Article(Item):
    type = "article"

    def __init__(self,title,author, subject):
        Item.__init__(self,title,author,self.type)
        self.subject = subject

    def __str__(self):
        return "Id: {0}, Title: {1}, Author: {2}, Subject : {3}".format(self.id, self.title, self.author, self.subject)
    
    def toCSV(self):
        return "{0},{1},{2},{3},{4}".format(self.type,self.id, self.title, self.author, self.subject)