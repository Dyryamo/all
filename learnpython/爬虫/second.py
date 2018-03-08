#-*-coding:utf-8-*-
import requests
from bs4 import BeautifulSoup
res = requests.get("http://www.ctguqmx.com/")
encoding = "utf-8"
soup = BeautifulSoup(res.text,"lxml")
#news=soup.select("div.aw-item div.aw-item:nth-of-type(2) > div:nth-of-type(2) > h4:nth-of-type(2) > a")
news = soup.select('html body div.aw-container-wrap div.container div.row div.aw-content-wrap.clearfix div.col-sm-12.col-md-9.aw-main-content div.aw-mod.aw-explore-list div.mod-body div.aw-common-list div.aw-item div.aw-question-content h4 a')
#print(soup.text)
#news = soup.select('span.text-color-999')
#print(news)
#hots = soup.select("#sort_control_hot")
#waits = soup.select("li > a")
#encoding  = 'utf-8'

#print(res.text)
for new in news:
	print(new)
#	print(hot)
#	print(waits)
