"BASIC"
set tabstop=4	"размер табуляции"
set colorcolumn=80
set smartindent " - автоматически ставит отступы в нужных местах "
set number "нумерация строк"
"set foldcolumn=2 "отступ от левой части окна ""
set mouse=a "включает поддержку мыши в vim"
set shiftwidth=4 
set textwidth=80 
set wrapmargin=80
"-------"

"EDIT"
set cursorline 		"ПОДСВЕТКА ПО ГОРИЗОНТАЛИ"
set cursorcolumn	"ПОДСВЕТКА ПО ВЕРТИКАЛИ"

"SEARCH"
set	ignorecase	"Игнорирование регистра при поиске"
set	smartcase	"Игнорирование регистра при поиске"
set hlsearch	"Подсветка результатов поиска"
set incsearch	"Показывает первое вхождение при вводе шаблона"
"--------"

"WILDMENU"
set wildmenu
set wildmode=list:longest


syntax on
colorscheme pablo
:highlight Comment ctermfg=6

" :ls - список текущих буферов"
" :bn - перейти к предыдущему буферу"
" :bp - перейти к следующему буферу"
" :bw - удаляет текущий буфер"
" :b + tab  - перейти к выбранному буферу"
" ctrl+n - автодополнение "
" :%s/text/newtext/ - replace text in file "
" /word - поиск нужных слов"
" ESC + V + NUM_OF_STRING_AFTER_CURRENT + jq <===> EXAMPLE : v7jgq "  
