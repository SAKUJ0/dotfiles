#!/bin/bash

dir=~/dotfiles
files="vimrc vim zshrc"

cd $dir

for file in $files; do
   rm -rf ~/.$file
   ln -s $dir/$file ~/.$file
done
