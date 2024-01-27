#!/bin/bash

curl -fLo ~/.vim/autoload/plug.vim --create-dirs \
    			https://raw.githubusercontent.com/junegunn/vim-plug/master/plug.vim
cp ./file_sh/vimrc ~/.vimrc
vim --cmd 'set number' \
     -c 'set tabstop=4' \
     -c 'PlugInstall'

