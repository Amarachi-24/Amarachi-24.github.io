from models.item import Item

class DigitalMedia(Item):
    def __init__(self,title, author, web_url):
        Item.__init__(self,title,author,"digital_media")
        self.web_url = web_url

    def __str__(self):
        return "Id: {0}, Title: {1}, Author: {2}, Web Url : {3}".format(self.id, self.title, self.author, self.web_url)

    def toCSV(self):
        return "{0},{1},{2},{3},{4}".format(self.type,self.id, self.title, self.author, self.web_url)