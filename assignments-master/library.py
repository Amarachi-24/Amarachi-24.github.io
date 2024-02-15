from file_utils import delete_item, write_file, read_file
from models.transaction import Transaction

class Library:

    def __init__(self):
        pass

    def add_item_library(self, item):
        return write_file("items.txt", str(item.toCSV())+"\n")

    def del_item_library(self, item_id):
        return delete_item("items.txt", item_id)
    
    def edit_item_library(self, item_id, model):
        delete_item("items.txt", item_id)
        self.add_item_library(model)

    def browse_items(self):
        items = []
        lines = read_file("items.txt")
        for line in lines:
            items.append(line.split(","))

        return items
    
    def browse_members(self):
        items = []
        lines = read_file("members.txt")
        for line in lines:
            items.append(line.split(","))

        return items

    def borrow(self, item_id, member_id):
        # TODO : validate item id and member id
        txn = Transaction(item_id, member_id)
        return self.write_file("borrowings.txt", str(txn.toCSV())+"\n")
    
    def deliver(self, txn_id):
        # TODO : validate item id and member id
        # items = []
        # lines = read_file('borrowings.txt')
        # for line in lines:
        #     items.append(line.split(","))

        return delete_item("borrowings.txt", txn_id)

    def get_index_by_id(self, items, item_id, member_id):
        # TODO : validate item id and member id
        for i,item in enumerate(items):
            if item[1] == item_id and item[2] == member_id:
                return i

        return -1