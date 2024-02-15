from models.item import Item

class Book(Item):
    type = "book"
    def __init__(self,title,author, isbn):
        Item.__init__(self,title,author,self.type)
        self.ISBN = isbn

    def __str__(self):
        return "Id: {0}, Title: {1}, Author: {2}, ISBN : {3}".format(self.id, self.title, self.author, self.ISBN)

    def toCSV(self):
        return "{0},{1},{2},{3},{4}".format(self.type,self.id, self.title, self.author, self.ISBN)