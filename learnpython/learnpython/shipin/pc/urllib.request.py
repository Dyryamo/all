# coding=utf-8
import urllib2
url_agent ={
    "url-agent":"Mozilla/5.0 (X11; Ubuntu; Linux x86_64; rv:57.0) Gecko/20100101 Firefox/57.0"
}
request = urllib2.Request("http://www.baidu.com",headers = url_agent)
reponse = urllib2.urlopen(request)
html = reponse.read()
print html
