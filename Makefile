VAR=.

stat:
	git status
report:
	git commit -m 'push'
send:
	git push
update:
	git pull
put_all:
	git add $(VAR)
