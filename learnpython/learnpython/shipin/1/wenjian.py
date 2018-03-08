#此程序学习文件
"""
r 只读
w 只写
a 追加
rb 二进制只读
wb 二进制只写
ab 二进制追加
r+ 打开文件读写
w+ 	
"""
f = open("test.txt","a")
f.write("hello world")
f.close()
f = open("test.txt","r")
p=f.read()
f.close()
print(p)

