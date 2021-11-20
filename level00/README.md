First level on snow-crash, basically you try a ``ls`` in the home folder, unfortunately there is nothing.

Then, I tried a command to find all files created by the user ``level00`` or ``flag00`` :
```bash
find / -user flag00 2>/dev/null | grep -v "proc"
/usr/sbin/john
/rofs/usr/sbin/john
```

Now I have a file which a can read a crypted password!
```bash
cat /usr/sbin/john
cdiiddwpgswtgt
```

I used a decrypter website (https://www.dcode.fr/) and got the uncrypted password :
```bash
After ROT 15 : cdiiddwpgswtgt
Original password : nottoohardhere
```

Finally I just need to log as ``flag00`` and get the flag.
```bash
su flag00
Password: nottoohardhere
Don't forget to launch getflag !
```

```bash
getflag
Check flag.Here is your token : x24ti5gi3x0ol2eh4esiuxias
```
