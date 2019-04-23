sleep 2
echo "found " | tr -d "\n"
find ~/ -maxdepth 1 -type f -name ".bashrc" -print -delete | rev | cut -d '/' -f 1 | rev 
sleep 2
cp ~/Desktop/42/Myscript/file_sh/alias.sh  ~/.bashrc
echo "reload .bashrc"
