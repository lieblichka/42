# mwuckert config :)
export PATH="$PATH:$HOME/.rvm/bin"
export PS1="[\u]: "
cd $(cat ~/.wdir)
function pid() { ps aux |grep "$@"|grep -v grep |awk {'print $2'};}
function work() { if [ "$1" = "this" ]; then echo $(pwd) > ~/.wdir; \
echo 'work-dir:' $(p); else cd $(cat ~/.wdir); echo 'current-dir:' $(p);fi;}
alias ls='ls --color=auto'
alias p="pwd | rev | cut -d / -f 1 | rev"
alias c=clear
alias l="ls -1"
alias back="cd .."
alias l_hidden="ls -1a"
alias desktop="cd ~/Desktop"
alias downloads="cd ~/Downloads"
alias battery="acpi | cut -d , -f 2 | tr -d ' '"
alias time="date | awk '{print \$4}'"
alias time24="date +'%H:%M %d.%m.%Y'"
alias brightness-high="sudo tee /sys/class/backlight/radeon_bl0/brightness <<< 255"
alias brightness-middle="sudo tee /sys/class/backlight/radeon_bl0/brightness <<< 155"
alias brightness-low="sudo tee /sys/class/backlight/radeon_bl0/brightness <<< 55"
alias brightness-ultra="sudo tee /sys/class/backlight/radeon_bl0/brightness <<< 15"
alias brightness-extra="sudo tee /sys/class/backlight/radeon_bl0/brightness <<< 5"
alias leak="sh ~/Desktop/.link/leak"
alias wifi_stat="netctl status"
alias wifi_connect="sudo netctl start"
alias browser="exec firefox &"
alias audio="alsamixer"
alias temp="acpi -t | cut -d ' ' -f 4"
alias temp_exact="sensors | grep high | awk '{print \$2}'"
alias vm_boot="VBoxManage startvm "
alias vm_reset="VBoxManage controlvm \$1 reset"
alias vm_poweroff="VBoxManage controlvm \$1 poweroff"
alias telegram="telegram-desktop &"
alias norminette="~/Desktop/42/Utilites/norminette/norminette"
clear
