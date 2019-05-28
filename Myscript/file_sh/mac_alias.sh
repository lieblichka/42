# mwuckert config :)
export PATH="$PATH:$HOME/.rvm/bin"
export CLICOLOR=1
export LSCOLORS=ExFxCxDxBxegedabagacad
export PS1="[%n% ]: "
cd ~/Desktop/
function width() { head -n 1 "$@" | tr ' ' '\n' | wc -l | tr -d ' ' ;}
function height() { cat "$@" | awk '{print $1}' | wc -l | tr -d ' ' ;}
function len_file(){ echo -n width '  '; width "$@" ;
echo -n height ' '; height "$@";}
alias p="pwd | rev | cut -d / -f 1 | rev"
alias c=clear
alias l="ls -1"
alias l_hidden="ls -1a"
alias desktop="cd ~/Desktop"
alias downloads="cd ~/Downloads"
alias battery="acpi | cut -d , -f 2 | tr -d ' '"
alias time="date | cut -d ' ' -f 5"
alias leak="~/Desktop/.link/leak"
alias black_style="export LSCOLORS=gxBxhxDxfxhxhxhxhxcxcx"
alias linux_style="export LSCOLORS=ExGxBxDxCxEgEdxbxgxcxd"
alias vm_boot="virtualbox --startvm "
alias path_fdf_macos="cd ~/Desktop/42/Projects/Fdf/MACOS"
alias path_ftprintf="cd ~/Desktop/42/Projects/Ft_printf/"
clear
