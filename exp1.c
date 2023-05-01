present working directory:
pwd
/Users/selenagomez

all the files in pwd:
 ~ % ls
1                Pictures
Adlm                Public
Applications            Untitled.txt
Desktop                exp8.c
Developer            java_error_in_studio.hprof
Documents            kavin
Downloads            kavin.class
Library                kavin.java
Movies                myfirstapp
Music

current directory:
 ~ % cd desktop
 desktop % ls
dbms
exp1.c
exp10_indexed.c
exp10_linked.c
exp10_seque.c
exp11_cscan.c
exp11_fcfs.c
exp11_scan.c
exp4_fcfs.c
exp4_sjf.c
exp5_prio.c
exp5_rr.c
exp6_producer.c
exp7_bankers.c
exp8_bf.c
exp8_ff.c
exp8_wf.c
exp9_fifo.c
exp9_lru.c
exp9_optimal.c
kavin
nmjbn

create folder/make directory:
 desktop % mkdir folder1

create files:
desktop % cd folder1
folder1 % ls
folder1 % touch file1 file2
folder1 % ls
file1    file2

delete files when you are inside folder:
folder1 % rm file1

delete file when you are outside folder:
folder1 % cd -
~/desktop
 desktop % rm folder1/file2

delete folder/remove directory:
folder1 % cd -
~/desktop
desktop % rmdir folder1

calender:
cal 2023

create file and change permission:
 ~ % cd desktop

desktop % touch k1
desktop % ls -l k1
-rw-r--r--  1  staff  0 May  1 17:26 k1

desktop % chmod u+x k1
desktop % ls -l k1
-rwxr--r--  1  staff  0 May  1 17:26 k1

desktop % chmod g+w k1
desktop % ls -l k1
-rwxrw-r--  1  staff  0 May  1 17:26 k1

 desktop % chmod o-r k1
 desktop % ls -l k1
-rwxrw----  1   staff  0 May  1 17:26 k1

desktop % chmod go+x k1
desktop % ls -l k1
-rwxrwx--x  1   staff  0 May  1 17:26 k1

desktop % chmod a-x k1
 desktop % ls -l k1
-rw-rw----  1   staff  0 May  1 17:26 k1

display username:
 desktop % whoami
selenagomez

display operating system:
desktop % uname
Linux

make a file using vi editor
desktop % vi file1
enter i to insert
enter :wq to save and esc

desktop % cat file1
apple
linux
unix
ios
c++

arrange is descending order:
sort -r file1
unix
linux
ios
c++
apple

arrange in ascending order:
sort -b file1
apple
c++
ios
linux
unix

display first 2 lines
desktop % head -2 file1
apple
linux

display last 2 lines
desktop % tail -2 file1
ios
c++

display words with a:
desktop % grep a file1
apple

