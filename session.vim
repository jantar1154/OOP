let SessionLoad = 1
let s:so_save = &g:so | let s:siso_save = &g:siso | setg so=0 siso=0 | setl so=-1 siso=-1
let v:this_session=expand("<sfile>:p")
silent only
silent tabonly
cd ~/Documents/OOP
if expand('%') == '' && !&modified && line('$') <= 1 && getline(1) == ''
  let s:wipebuf = bufnr('%')
endif
let s:shortmess_save = &shortmess
if &shortmess =~ 'A'
  set shortmess=aoOA
else
  set shortmess=aoO
endif
badd +1 src/animal.cpp
badd +1 src/animal.h
badd +1 src/main.cpp
badd +1 src/shelter.cpp
badd +22 src/shelter.h
badd +11 src/inventory/inventory.h
badd +1 src/inventory/inventory.cpp
badd +1 src/inventory/inventory_item.h
badd +1 src/person/admin.cpp
badd +3 src/inventory/inventory_item.cpp
badd +0 src/person/admin.h
badd +0 src/person/adopter.h
badd +0 src/person/person.cpp
badd +0 src/person/person.h
badd +1 src/person/employee.h
badd +0 src/person/adopter.cpp
badd +0 src/person/employee.cpp
argglobal
%argdel
$argadd src/animal.cpp
$argadd src/animal.h
$argadd src/inventory/
$argadd src/main.cpp
$argadd src/person/
$argadd src/shelter.cpp
$argadd src/shelter.h
set stal=2
tabnew +setlocal\ bufhidden=wipe
tabnew +setlocal\ bufhidden=wipe
tabnew +setlocal\ bufhidden=wipe
tabnew +setlocal\ bufhidden=wipe
tabnew +setlocal\ bufhidden=wipe
tabnew +setlocal\ bufhidden=wipe
tabnew +setlocal\ bufhidden=wipe
tabrewind
edit src/main.cpp
argglobal
4argu
balt src/animal.cpp
setlocal fdm=manual
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
silent! normal! zE
let &fdl = &fdl
let s:l = 1 - ((0 * winheight(0) + 17) / 34)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
tabnext
edit src/person/person.h
argglobal
6argu
if bufexists(fnamemodify("src/person/person.h", ":p")) | buffer src/person/person.h | else | edit src/person/person.h | endif
if &buftype ==# 'terminal'
  silent file src/person/person.h
endif
setlocal fdm=manual
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
silent! normal! zE
let &fdl = &fdl
let s:l = 17 - ((16 * winheight(0) + 17) / 34)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 17
normal! 0
tabnext
edit src/person/adopter.h
argglobal
if bufexists(fnamemodify("src/person/adopter.h", ":p")) | buffer src/person/adopter.h | else | edit src/person/adopter.h | endif
if &buftype ==# 'terminal'
  silent file src/person/adopter.h
endif
setlocal fdm=manual
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
silent! normal! zE
let &fdl = &fdl
let s:l = 19 - ((18 * winheight(0) + 17) / 34)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 19
normal! 05|
tabnext
edit src/person/adopter.cpp
argglobal
if bufexists(fnamemodify("src/person/adopter.cpp", ":p")) | buffer src/person/adopter.cpp | else | edit src/person/adopter.cpp | endif
if &buftype ==# 'terminal'
  silent file src/person/adopter.cpp
endif
balt src/animal.cpp
setlocal fdm=manual
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
silent! normal! zE
let &fdl = &fdl
let s:l = 1 - ((0 * winheight(0) + 17) / 34)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
tabnext
edit src/person/employee.h
argglobal
if bufexists(fnamemodify("src/person/employee.h", ":p")) | buffer src/person/employee.h | else | edit src/person/employee.h | endif
if &buftype ==# 'terminal'
  silent file src/person/employee.h
endif
setlocal fdm=manual
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
silent! normal! zE
let &fdl = &fdl
let s:l = 1 - ((0 * winheight(0) + 17) / 34)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
tabnext
edit src/person/employee.cpp
argglobal
if bufexists(fnamemodify("src/person/employee.cpp", ":p")) | buffer src/person/employee.cpp | else | edit src/person/employee.cpp | endif
if &buftype ==# 'terminal'
  silent file src/person/employee.cpp
endif
balt src/person/employee.h
setlocal fdm=manual
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
silent! normal! zE
let &fdl = &fdl
let s:l = 1 - ((0 * winheight(0) + 17) / 34)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
tabnext
edit src/person/admin.h
argglobal
if bufexists(fnamemodify("src/person/admin.h", ":p")) | buffer src/person/admin.h | else | edit src/person/admin.h | endif
if &buftype ==# 'terminal'
  silent file src/person/admin.h
endif
setlocal fdm=manual
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
silent! normal! zE
let &fdl = &fdl
let s:l = 1 - ((0 * winheight(0) + 17) / 34)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
tabnext
edit src/person/admin.cpp
argglobal
if bufexists(fnamemodify("src/person/admin.cpp", ":p")) | buffer src/person/admin.cpp | else | edit src/person/admin.cpp | endif
if &buftype ==# 'terminal'
  silent file src/person/admin.cpp
endif
setlocal fdm=manual
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
silent! normal! zE
let &fdl = &fdl
let s:l = 1 - ((0 * winheight(0) + 17) / 34)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
tabnext 3
set stal=1
if exists('s:wipebuf') && len(win_findbuf(s:wipebuf)) == 0 && getbufvar(s:wipebuf, '&buftype') isnot# 'terminal'
  silent exe 'bwipe ' . s:wipebuf
endif
unlet! s:wipebuf
set winheight=1 winwidth=20
let &shortmess = s:shortmess_save
let s:sx = expand("<sfile>:p:r")."x.vim"
if filereadable(s:sx)
  exe "source " . fnameescape(s:sx)
endif
let &g:so = s:so_save | let &g:siso = s:siso_save
set hlsearch
nohlsearch
doautoall SessionLoadPost
unlet SessionLoad
" vim: set ft=vim :
