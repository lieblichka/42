VAR=.

log:
	git log
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
	make clean_o
	make clean_a
	make put_all
	make stat
	make report
	make send
clean_o:
	find  . -maxdepth 3 -name "*.o" -print -delete 
clean_a:
	find  . -maxdepth 3 -name "*.a" -print -delete 
