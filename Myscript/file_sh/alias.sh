# mwuckert config :)
export PATH="$PATH:$HOME/.rvm/bin"
export PS1="[\u]: "
cd ~/Desktop/
alias ls='ls --color=auto'
alias p="pwd | rev | cut -d / -f 1 | rev"
alias c=clear
alias l="ls -1"
alias l_hidden="ls -1a"
alias desktop="cd ~/Desktop"
alias downloads="cd ~/Downloads"
alias battery="acpi | cut -d , -f 2 | tr -d ' '"
alias time="date | cut -d ' ' -f 4"
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
clear
