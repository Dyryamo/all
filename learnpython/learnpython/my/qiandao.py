#!/usr/bin/python3
import requests
headers = {
       "user-agent":"Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/64.0.3282.186 Safari/537.36"
   }
s = requests.session()
#s.post(url, **kwargs)
s.post('https://www.ctguqmx.com/account/ajax/login_process/', headers=headers, data={'user_name':'519233982@qq.com', 'password':'dyr520.'})
qd =s.get("https://www.ctguqmx.com/qiandao/", headers = headers )
#print(qd.text)
r=s.get("http://172.25.5.133/index.php/Qiandao/doQd")

with open('/home/zhong/Git/all/learnpython/learnpython/my/out.log', 'w') as f:
	f.write(r.text)


#ssh sun@172.25.1.105
#123456

#crontab
