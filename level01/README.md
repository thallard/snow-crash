Same as the previous level, I checked file where I can read/write, unfortunately I found nothing except a file `/etc/passwd` :
```bash
cat /etc/passwd
[...]
flag01:42hDRfypTqqnw:3001:3001::/home/flag/flag01:/bin/bash
[...]
```

We find an encrypted password from flag01 user, I searched for a tool which can decrypt it, I found John the Ripper (https://fr.wikipedia.org/wiki/John_the_Ripper) :
```bash
echo flag01:42hDRfypTqqnw:3001:3001::/home/flag/flag01:/bin/bash > passwd
john --show passwd
flag01:abcdefg:3001:3001::/home/flag/flag01:/bin/bash

1 password hash cracked, 0 left
```

Now we have flag password :
```
su flag01
Password: abcdefg
Don't forget to launch getflag !
```

```
getflag
Check flag.Here is your token : f2av5il02puano7naaf6adaaf
```
