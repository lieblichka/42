sleep 2
echo "found " | tr -d "\n"
find ~/ -maxdepth 1 -type f -name ".zshrc" -print -delete | rev | cut -d '/' -f 1 | rev 
sleep 2
cp ~/Desktop/42/Myscript/file_sh/mac_alias.sh  ~/.zshrc
echo "reload .zshrc"
sh ./reload_config_files.sh 
sleep 2
echo "reload config files"
