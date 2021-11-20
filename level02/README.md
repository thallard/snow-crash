In the home folder we have a record packet data `level02` which can be read with Wireshark.
We need to transfer the file to the VM on our session with:
```bash
scp -P 4242 level02@127.0.0.1:~/level02.pcap .
```

With Wireshark, there is a functionnality which allow to follow TCP streams to get their content :
![alt text](https://i.imgur.com/dQN0BLz.png)


We get the flag02's password : `ft_waNDREL0L`

```
su flag02
Password: ft_waNDReL0L
Don't forget to launch getflag !
```

```
getflag
Check flag.Here is your token : kooda2puivaav1idi4f57q8iq
```
