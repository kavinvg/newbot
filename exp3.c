
display os version:
% sw_vers
ProductName:        macOS
ProductVersion:        13.3
BuildVersion:        22E252

display release number
uname -r
22.4.0

display kernam version:
uname -v
Darwin Kernel Version 22.4.0: Mon Mar  6 20:59:28 PST 2023; root:xnu-8796.101.5~3/RELEASE_ARM64_T6000

Display current shell, home directory, OS type,the Current path setting,the Current working director:
echo -e "the current shell: $SHELL "
the current shell: /bin/zsh

echo -e "the home directory : $HOME"
the home directory : /Users/luisaevans

display os type:
echo -e "the OS type: $OSTYPE"
the OS type: darwin22.0

echo -e "the Current path setting: $PATH"
the Current path setting: /usr/local/bin:/System/Cryptexes/App/usr/bin:/usr/bin:/bin:/usr/sbin:/sbin:/Library/Apple/usr/bin:/var/run/com.apple.security.cryptexd/codex.system/bootstrap/usr/local/bin:/var/run/com.apple.security.cryptexd/codex.system/bootstrap/usr/bin:/var/run/com.apple.security.cryptexd/codex.system/bootstrap/usr/appleinternal/bin:/Users/luisaevans/Developer/flutter/bin

echo -e "the Current working directory:$(pwd)"
the Current working directory:/Users/luisaevans

date:
date
Mon May  1 19:29:52 IST 2023

calender of this month:
cal
     May 2023
Su Mo Tu We Th Fr Sa
   1  2  3  4  5  6
7  8  9 10 11 12 13
14 15 16 17 18 19 20
21 22 23 24 25 26 27
28 29 30 31

Username:
whoami
luisaevans

Top 5 processes in memory:
top -o +%MEM | head -12

First 3 long listing of user:
% ls -l | head -3

total 2301760
-rw-r--r--   1 kavingirigosavi  staff          50 Mar 21 22:24 1
drwxrwxrwx   3 kavingirigosavi  staff          96 Jun 20  2022 Adlm

