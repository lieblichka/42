# mwuckert config :)
export PATH="$PATH:$HOME/.rvm/bin"
export CLICOLOR=1
export LSCOLORS=ExFxCxDxBxegedabagacad
export PS1="[%n% ]: "
cd ~/Desktop/
alias p="pwd | rev | cut -d / -f 1 | rev"
alias c=clear
alias l="ls -1"
alias l_hidden="ls -1a"
alias desktop="cd ~/Desktop"
alias downloads="cd ~/Downloads"
alias battery="acpi | cut -d , -f 2 | tr -d ' '"
alias time="date | cut -d ' ' -f 5"
alias leak="~/Deskop/.link/leak"
alias black_style="export LSCOLORS=gxBxhxDxfxhxhxhxhxcxcx"
alias linux_style="export LSCOLORS=ExGxBxDxCxEgEdxbxgxcxd"
clear
