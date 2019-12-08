@SET PATH=%PATH%;C:\Program Files (x86)\Graphviz2.38\bin

for %%f in (gv/*.gv) do dot -Tpng gv/%%f -o img/%%f.png
pause
