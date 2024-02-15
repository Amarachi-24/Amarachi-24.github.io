#!/usr/bin/env python

import argparse
from ast import parse
import sys
from tabulate import tabulate
from library import Library
from models.article import Article
from models.book import Book
from models.digital_media import DigitalMedia


class LibraryCLI:

    def __init__(self):
        self.library = Library()

        parser = argparse.ArgumentParser(
            description='Library Mgmt System using CLI',
            usage='''python cli.py <command> [<args>]

Commands are:
   browse     Browse all the items in library
   member     Browse all the members in library
   borrow     Select the items to borrow by item id and member id
   deliver    Return the borrowed item by txn id
   add        Add items (book,article,digital media) in library
   edit       Edit item by item id
   delete     Delete item by item id

''')
        parser.add_argument('command', help='Subcommand to run')
        # parse_args defaults to [1:] for args, but you need to
        # exclude the rest of the args too, or validation will fail
        args = parser.parse_args(sys.argv[1:2])
        if not hasattr(self, args.command):
            print('Unrecognized command')
            parser.print_help()
            exit(1)
        # use dispatch pattern to invoke method with same name
        getattr(self, args.command)()

    def browse(self):
        parser = argparse.ArgumentParser(
            description='Browse all the items in library')
    
        args = parser.parse_args(sys.argv[2:])
        itemsss = self.library.browse_items()
    
        print('Browsing {0} items in library:\n'.format(str(len(itemsss))))
        
        print(tabulate(itemsss,headers=["type","id","title","author","misc"]))
    
    def member(self):
        parser = argparse.ArgumentParser(
            description='Browse all members in library')
    
        args = parser.parse_args(sys.argv[2:])
        members = self.library.browse_members()
    
        print('Browsing {0} members in library:\n'.format(str(len(members))))
        
        print(tabulate(members,headers=["id","name","membership_date"]))

    def borrow(self):
        parser = argparse.ArgumentParser(
            description='Borrow the item by item id and member id')
        # prefixing the argument with -- means it's optional
        parser.add_argument('-i','--item',help='item id to borrow')
        parser.add_argument('-m','--member',help='member id to borrow')

        # now that we're inside a subcommand, ignore the first
        # TWO argvs, ie the command (git) and the subcommand (commit)
        args = parser.parse_args(sys.argv[2:])
        item_id = args.item
        member_id = args.member
        print('Borrowing item with id ={0} and member with id ={1}'.format(item_id, member_id))

        self.library.borrow(item_id, member_id)
    
    def deliver(self):
        parser = argparse.ArgumentParser(
            description='Return the borrowed item by txn id')
        # prefixing the argument with -- means it's optional
        parser.add_argument('-ti','--txn_id',help='Transaction id to return book associated with transaction')

        # now that we're inside a subcommand, ignore the first
        # TWO argvs, ie the command (git) and the subcommand (commit)
        args = parser.parse_args(sys.argv[2:])
        txn_id = args.txn_id
        print('Returning item with txn id ={0}'.format(txn_id))

        print(self.library.deliver(txn_id))
        print('Successfully delivered item ')

    def add(self):
        parser = argparse.ArgumentParser(
            description='Add items (book,article,digital media) in library')
        # prefixing the argument with -- means it's optional
        parser.add_argument('-t','--type',help='Type of item to add: book/article/digital_media')
        parser.add_argument('-p','--payload',help='Payload of item in CSV. Eg:Rich dad poor dad,Robert Kiyosaki,123245 ')

        # now that we're inside a subcommand, ignore the first
        # TWO argvs, ie the command (git) and the subcommand (commit)
        args = parser.parse_args(sys.argv[2:])

        type = args.type
        payload = args.payload
        item = self.parse_payload(type, payload)
        print('Adding Item : {0}'.format(str(item.toCSV())))
        
        self.library.add_item_library(item)
    
    def edit(self):
        parser = argparse.ArgumentParser(
            description='Edit item by item id')
        parser.add_argument('-i','--id',help='Id of item to edit')
        parser.add_argument('-t','--type',help='Type of item to add: book/article/digital_media')
        parser.add_argument('-p','--payload',help='Payload of item in CSV. Eg:Rich dad poor dad,Robert Kiyosaki,123245 ')

        # now that we're inside a subcommand, ignore the first
        # TWO argvs, ie the command (git) and the subcommand (commit)
        args = parser.parse_args(sys.argv[2:])

        id = args.id
        type = args.type
        payload = args.payload
        item = self.parse_payload(type, payload)
        print('Editing item with {0}'.format(str(item)))
        self.library.edit_item_library(id, item)

    def delete(self):
        parser = argparse.ArgumentParser(
            description='Delete item by item id')
        parser.add_argument('-i','--id',help='Id of item to edit')

        # now that we're inside a subcommand, ignore the first
        # TWO argvs, ie the command (git) and the subcommand (commit)
        args = parser.parse_args(sys.argv[2:])
        item_id = args.id
        self.library.del_item_library(item_id)
        print("Successfully delete with item id ", item_id)
    

    def parse_payload(self, type, payload):
        items = payload.split(",")
        if type == "book":
            return Book(items[0],items[1], items[2])
        elif type == "article":
            return Article(items[0],items[1], items[2])
        elif type == "digital_media":
            return DigitalMedia(items[0],items[1], items[2])
        else:
            raise Exception("Type should be either book,article or digital_media")

if __name__ == '__main__':
    LibraryCLI()