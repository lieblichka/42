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
changes:
	make stat
	make put_all
	make stat
	make report
	make send
