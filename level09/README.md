We have a `level09` and a file `token` with a encrypted token by `level09` executable.
```bash
./level09 token
tpmhr

./level09 aaaaa
abcde
```

We need to reverse the executable, I created a script for that :
```c
#include <unistd.h>
#include <stdio.h>

int main()
{
    const char *str = "f4kmm6p|=\202\177p\202n\203\202DB\203Du{\177\214\211";
    for (int i = 0; i < strlen(str); i++)
        printf("%c", str[i] - i);
}

```

Which gave me the correct password for the flag09:
```
su flag09
Password: f3iji1ju5yuevaus41q1afiuq
Don't forget to launch getflag !
```

```
getflag
Check flag.Here is your token : s5cAJpM8ev6XHw998pRWG728z
```
