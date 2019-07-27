#find ~/ -type d -maxdepth 1 -name ".vim" -print -delete | rev | cut -d / -f 1 | \
#	rev
#find ~/ -type d -maxdepth 1 -name "floobits" -print -delete| rev | cut -d / -f 1 | \
#	rev
rm -rf ~/.vim
rm -rf ~/floobits
mkdir ~/.vim
mkdir ~/.vim/bundle
cp file_sh/vim_vundle_floobits.sh ~/.vimrc
git clone https://github.com/VundleVim/Vundle.vim.git ~/.vim/bundle/Vundle.vim
git clone https://github.com/Floobits/floobits-vim  ~/.vim/bundle/floobits-vim
