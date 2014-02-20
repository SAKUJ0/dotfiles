
" debn on
filetype plugin on
filetype indent on
syn on
set number
set hlsearch
set autoindent
set autochdir
set expandtab
set shiftwidth=3
set softtabstop=3
set enc=utf-8

map <F7> :!make<CR>
map <F8> :!g++ -I/usr/include/eigen2/ -o %< %<CR>
map <F9> :!./%<<CR>

" vim-latexsuite
let g:tex_flavor='latex'
set grepprg=grep\ -nH\ $*

" tagfiles
set tags+=~/.vim/tags/cpp
set tags+=~/.vim/tags/root
map <C-F12> :!ctags -R --sort=yes --c++-kinds=+pl --fields=+iaS --extra=+q .<CR>
" taglist
map <C-F10> :TlistAddFilesRecursive ./ *.c*<CR>:TlistAddFilesRecursive ./
" *.C*<CR>:TlistAddFilesRecursive ./ *.h*<CR>
map <C-F11> :TlistToggle<CR>

" OmniCppComplete
set nocp " no-compatible
let OmniCpp_NamespaceSearch = 1
let OmniCpp_GlobalScopeSearch = 1
let OmniCpp_ShowAccess = 1
let OmniCpp_ShowPrototypeInAbbr = 1 " show function parameters
let OmniCpp_MayCompleteDot = 1 " autocomplete after .
let OmniCpp_MayCompleteArrow = 1 " autocomplete after ->
let OmniCpp_MayCompleteScope = 1 " autocomplete after ::
let OmniCpp_DefaultNamespaces = ["std", "_GLIBCXX_STD"]
" automatically open and close the popup menu / preview window
au CursorMovedI,InsertLeave * if pumvisible() == 0|silent! pclose|endif
set completeopt=menuone,menu,longest,preview