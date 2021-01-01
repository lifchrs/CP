autocmd BufNewFile *.cpp -r C:/Users/sundar/Desktop/Coding/template.cpp "Append template to new C++ files"
syntax on "adds syntax highlighting"
set tabstop=4
set nocompatible
set shiftwidth=4
set expandtab
set autoindent
set smartindent
set ruler
set showcmd
set incsearch
set shellslash
set number
set relativenumber
set cino+=L0 "Doesn't untab when typing colons"
colorscheme desert
syntax on
filetype indent on
"keybindings for { completion, "jk" for escape, ctrl-a to select all
inoremap {<CR>  {<CR>}<Esc>O
inoremap {}     {}
imap jk         <Esc>
map <C-a> <esc>ggVG<CR>
set belloff=all
set backspace=indent,eol,start
setlocal indentkeys-=:
autocmd filetype cpp nnoremap <F9> :w <bar> !g++ -DX -std=c++17 % -o %:r -Wl,--stack,268435456<CR> 
autocmd filetype cpp nnoremap <F10> :!%:r<CR> 
