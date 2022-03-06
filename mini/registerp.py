#!C:\Program Files\Python310\python.exe
print("content-type:text/html\r\n\r\n")
import cgi
form=cgi.FieldStorage()
a=form.getvalue('fname')
b=form.getvalue('lname')
c=form.getvalue('uname')
d=form.getvalue('pass')
e=form.getvalue('email')
f=form.getvalue('mno')
g=form.getvalue('ct')
print(a,b,c,d,e,f,g)


