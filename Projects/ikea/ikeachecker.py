from bs4 import BeautifulSoup
import requests
age = requests.get("http://dataquestio.github.io/web-scraping-pages/simple.html")
soup = BeautifulSoup(page.content, "html5lib")
print(soup.prettify)
rint("\n\n\n\n\n\n")
print(list(soup.children))
