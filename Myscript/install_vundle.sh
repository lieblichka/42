#find ~/ -type d -maxdepth 1 -name ".vim" -print -delete | rev | cut -d / -f 1 | \
#	rev
#find ~/ -type d -maxdepth 1 -name "floobits" -print -delete| rev | cut -d / -f 1 | \
#	rev
rm -rf ~/.vim
mkdir ~/.vim
mkdir ~/.vim/bundle
git clone https://github.com/VundleVim/Vundle.vim.git ~/.vim/bundle/Vundle.vim
