import uuid
from datetime import datetime as d

class Transaction:
    def __init__(self,item_id,member_id, txn_date=None):
        self.id = str(uuid.uuid4().fields[-1])[:5]
        self.item_id = item_id
        self.member_id = member_id
        self.txn_date = txn_date if txn_date else d.now() 

    def __str__(self):
        return "id: {0}, item_id: {1}, member_id: {2}, txn_date: {3} ".format(self.id, self.item_id, self.member_id, self.txn_date)
    
    def toCSV(self):
        return "{0},{1},{2},{3}".format(self.id, self.item_id, self.member_id, self.txn_date)
