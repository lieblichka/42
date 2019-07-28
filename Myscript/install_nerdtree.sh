floobits=$(sed -n '/scrooloose/=' ~/.vimrc)
if [ "$floobits" = "" ]
then
rm -rf ~/.vim/bundle/nerdtree-vim
git clone ttps://github.com/scrooloose/nerdtree.git ~/.vim/bundle/nerdtree
awk -v v=$(sed -n '/Plugin/=' ~/.vimrc) 'NR==v+1{print "Bundle '\''scrooloose/nerdtree'\''"}7' ~/.vimrc > .floo
#cp .floo ~/.vimrc
#rm .floo
mv .floo ~/.vimrc
vim +PluginInstall
fi
