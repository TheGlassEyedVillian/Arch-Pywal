call plug#begin('~/.config/nvim/plugged')
Plug 'junegunn/goyo.vim'
Plug 'PotatoesMaster/i3-vim-syntax'
Plug 'dylanaraps/wal.vim'
call plug#end()

set number relativenumber

autocmd BufWritePost *.c !gcc % -lm
autocmd BufWritePost *.cpp !g++ % -lm
autocmd BufWritePost ~/.Xresources !xrdb ~/.Xresources
autocmd BufWritePost ~/.config/i3/config !i3-msg restart

colorscheme wal
