set nocompatible			" be iMproved, required
filetype off				" required

set rtp+=~/.vim/bundle/Vundle.vim
call vundle#begin()
Plugin 'VundleVim/Vundle.vim'

call vundle#end()

set exrc	" - искать дополнительный .vimrc в текущей директории "
set secure	" - запрет внешним .vimrc писать что-либо в файлы и "
			" - выполнять команды шелла "

set colorcolumn=80
set tabstop=4
set smartindent " - автоматически ставит отступы в нужных местах "

syntax on
colorscheme pablo

" ctrl+n - автодополнение "
" %s/text/newtext/ - replace text in file "
