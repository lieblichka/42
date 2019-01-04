# mwuckert config :)
export PATH="$PATH:$HOME/.rvm/bin"
export PS1="[\u]: "
cd ~/Desktop/
alias p="pwd | rev | cut -d / -f 1 | rev"
alias c=clear
alias l="ls -1"
alias desktop="cd ~/Desktop"
alias downloads="cd ~/Downloads"
alias battery="acpi | cut -d , -f 2 | tr -d ' '"
clear
