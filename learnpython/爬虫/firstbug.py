import requests
from bs4 import BeautifulSoup

res = requests.get('https://www.ctguqmx.com/')
res.encoding='utf-8'
soup=BeautifulSoup(res.text,'lxml')
news = soup.select('ul.nav > li > a')
print(news)
for it in news:
	print(it.get_text())

"t"
ul.nav:nth-child(3) > li:nth-child(1) > a:nth-child(1)
"""

