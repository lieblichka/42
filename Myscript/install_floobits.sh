floobits=$(sed -n '/Floobits/=' ~/.vimrc)
if [ "$floobits" = "" ]
then
rm -rf ~/.vim/bundle/floobits-vim
git clone https://github.com/Floobits/floobits-vim ~/.vim/bundle/floobits-vim
awk -v v=$(sed -n '/Plugin/=' ~/.vimrc) 'NR==v+1{print "Bundle '\''Floobits/floobits-vim'\''"}7' ~/.vimrc > .floo
#cp .floo ~/.vimrc
#rm .floo
mv .floo ~/.vimrc
cp file_json/floorc.json ~/.floorc.json
vim +PluginInstall
fi
