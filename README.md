# UDP Sender & Receiver from Scratch (C)

This project demonstrates a **basic UDP sender and receiver written from scratch in C** using low-level socket programming.  
The program sends a UDP message from your computer to a **mobile phone** acting as a UDP receiver.

---

## Requirements

### Mobile as a reciever/server
- An **Android phone**
- Any **UDP receiver / UDP server app** from the Play Store  
  (e.g., UDP Receiver, UDP Server, Packet Sender)

---

## Setup Instructions

### 1. Install a UDP Receiver App
- Install any UDP receiver/server app on your phone
- Set it to listen on port **1212** (or update the port in the code)

---

### 2. Find Your Phone’s IP Address
- Make sure your **phone and PC are on the same Wi-Fi network**
- On Android:
  - Settings → just search IP address
- Example: `192.168.1.7`

---

### 3. Replace Phone IP in Code

In the source file, replace:

sin.sin_addr.s_addr = inet_addr("YOUR_PHONEs_IP");

with:
Copy code
```c
sin.sin_addr.s_addr = inet_addr("192.168.1.7");
```
(use your phone’s actual IP address)
4. Compile
bash
```c
gcc udp.c -o udp
```
5. Run
bash
```c
./udp
Enter a message in the terminal
```

The message will be received by the phone
If the phone sends a reply, it will be printed in the terminal

### Notes
Uses UDP (connectionless protocol) — no handshake, no delivery guarantee
Designed for local network testing
Firewalls may block UDP traffic on some systems

### Purpose
This project is intended for learning socket programming fundamentals, including:
UDP sockets
Message sending and receiving
Client–server communication without TCP

#### !~ Thats a wrap ~! 

