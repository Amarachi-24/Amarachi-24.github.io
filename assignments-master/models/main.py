from book import Book
from article import Article
from digital_media import DigitalMedia

if __name__ == '__main__':
    print("Welcome to items")

    book = Book(1, "Rich dad poor dad", "Marowsky", "123245")
    article = Article(1, "A brief study of Hompopathietic", "Asriel", "Psychology")
    digital = DigitalMedia(1, "NFT", "CAsriel", "https://onlinelibrary.wiley.com/topic/browse/000024")

    print(book)
    print(article)
    print(digital)