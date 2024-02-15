# Library Management CLI

**Get started**
Get started by installing required library.
`pip install -r requirements.txt`



## CLI Commands
CLI has the following commands

    usage: python cli.py <command> [<args>]
    
    Commands are:
       browse     Browse all the items in library
       member     Browse all the members in library
       borrow     Select the items to borrow by item id and member id
       deliver    Return the borrowed item by txn id
       add        Add items (book,article,digital media) in library
       edit       Edit item by item id
       delete     Delete item by item id

### Commands
1. browse
    `python cli.py browse`
2. member
    `python cli.py member`
3. borrow
    `python cli.py borrow -i 13991 -m 11368`
    - i : item id
    - m : member id
5. deliver
    `python cli.py deliver -ti 25763`
    - ti : Transaction id

6. add
    `python cli.py add -t book -p "Outliers,Malcolm Gladwell,23455"`
    - t : type of item (book/article/digital_media)
    - p : payload in comma seperate value. Eg : “Some article,manish,2222”

7. edit
    `python cli.py edit -i 13991 -t book -p "Some article,manish,2222"`
    - i : item id
    - t : type of item (book/article/digital_media)
    - p : payload in comma seperate value. Eg : “Some article,manish,2222”
8. delete
    `python cli.py delete -i 82765`
    - i : item id