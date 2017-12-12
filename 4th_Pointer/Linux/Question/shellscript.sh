cd [1]Variable_Pointer
ls | xargs sed -i -e 's/\/\*here\*\/.*\/\*here\*\//\/\*here\*\/\/\*here\*\//g'
cd ..

cd [2]Array_Pointer
ls | xargs sed -i -e 's/\/\*here\*\/.*\/\*here\*\//\/\*here\*\/\/\*here\*\//g'
cd ..

cd [3]String_Pointer
ls | xargs sed -i -e 's/\/\*here\*\/.*\/\*here\*\//\/\*here\*\/\/\*here\*\//g'
cd ..

cd [4]Struct_Pointer
ls | xargs sed -i -e 's/\/\*here\*\/.*\/\*here\*\//\/\*here\*\/\/\*here\*\//g'
cd ..

cd [5]Function_Pointer
ls | xargs sed -i -e 's/\/\*here\*\/.*\/\*here\*\//\/\*here\*\/\/\*here\*\//g'
cd ..

