sleep 2
echo "found " | tr -d "\n"
find ~/ -maxdepth 1 -type f -name ".vimrc" -print -delete | rev | cut -d '/' -f 1 | rev 
sleep 2
cp ~/Desktop/42/Myscript/file_sh/vim.sh  ~/.vimrc
echo "reload .vimrc"