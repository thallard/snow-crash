## Bypass a file with an executable

When you try to execute ``level08`` with ``token`` file :
```bash
./level08 token
You may not access 'token'
```

I used ``strings`` on the executable to find more info, I saw :

```
strstr
token
```

It seems that the executable is checking the filename, if the name is token, it dont read it.

You need just to rename the ``token`` file, with ``chmod +w .`` and ``mv token pwnd``.

```bash
./level08 pwnd
quif5eloekouj29ke0vouxean
```

It gave you the login of the flag08, you just need to log :

```bash
su flag08
Password: 
Don't forget to launch getflag !
```
```bash
getflag
Check flag.Here is your token : 25749xKZ8L7DkSCwJkT9dyv6f
```
