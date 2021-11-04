### home_automation

home automation project elaborated in arduino, the complete material with connection diagram is shared

### Electronic assembly:

### Relay module connections with arduino and fan:

![alt text](https://github.com/jnates/home_automation/blob/main/connections/screen1.png)

### Connections for alarm with ultrasonic sensor:

![alt text](https://github.com/jnates/home_automation/blob/main/connections/screen2.png)

### Connection of relay modules with 110v bulbs and arduino:

![alt text](https://github.com/jnates/home_automation/blob/main/connections/screen3.png)

### Bluetooth module connection:

![alt text](https://github.com/jnates/home_automation/blob/main/connections/screen4.png)

### Note: the module used in the project was the HC-05

For correct communication between the Arduino, the HC-05 bluetooth module and the device
bluetooth master, which in this case will be a cell phone, the following must be done
setting.
The bluetooth module comes by default established like this: Name HC-05, slave mode,
with pairing code of 1234 (Password) and speed of 9600 baud. East
module has 4 working states, connected state, disconnected state, AT1 mode and
AT2 mode; For the configuration, enter the AT1 or AT2 mode.
Using the "Command Prompt" or "Putty.exe" program you can perform the
module configuration, since it is configured by AT command (AT1 or AT2 mode),
when communication with AT commands is obtained, the name change is performed
if you wish, password, communication speed and especially the job role, to
this project requires the role of slave.
