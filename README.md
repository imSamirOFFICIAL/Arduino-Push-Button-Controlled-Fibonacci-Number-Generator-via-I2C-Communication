# Push Button Controlled Fibonacci Number Generator via I2C Communication using Arduino Uno in Proteus
A push button is connected to the 1st Arduino (Master). Each time the push button is pressed, a number is sent to the 2nd Arduino (Slave) via I2C communication. The received numbers are then displayed on the Serial Monitor of the 2nd Arduino. The values sent from the transmitter Arduino follow the following pattern: 0, 1, 1, 2, 3, 5, 8, 13...... (Fibonacci sequence)

<p align="center"><img src="https://user-images.githubusercontent.com/52858312/246877870-e5c23c1d-a790-4704-b9af-d3774d793356.png"width=65% height=65%></p>

# How to run this?
Now, first clone the repository. Then, inside the `Master` folder, open the `Master.ino` file in the Arduino IDE. If the `Arduino IDE` is opening for the first time on your operating system, after opening the Experiment.ino file, go to `File` > `Preferences` > tick the `Compile` option beside `Show verbose output during`. Then, click `OK`. (No need to repeat this task from the second time onwards.)

Now, click the `Verify` button located in the upper left corner, and from the output, copy the following path: `C:\Users\Username\AppData\Local\Temp\arduino\sketches\XXXXXXXXXX/Master.ino.elf`.

![Screenshot](https://github.com/imSamirOFFICIAL/Arduino-Push-Button-Controlled-Fibonacci-Number-Generator-via-I2C-Communication/assets/52858312/b4e7b4f6-33b6-4625-8cfd-621727a2a750)

Next, open the `Experiment.pdsprj` file in Proteus. Double-click on `Left Arduino Uno` and paste the `...Master.ino.elf` link into the `Program File` field. Then, click `OK`.

![Screenshot](https://github.com/imSamirOFFICIAL/Arduino-Push-Button-Controlled-Fibonacci-Number-Generator-via-I2C-Communication/assets/52858312/19931b06-d7f4-469a-892e-2967833b58c2)

Then, inside the `Slave` folder, open the `Slave.ino` file in the Arduino IDE.

Now, click the `Verify` button located in the upper left corner, and from the output, copy the following path: `C:\Users\Username\AppData\Local\Temp\arduino\sketches\XXXXXXXXXX/Slave.ino.elf`.

![Screenshot](https://github.com/imSamirOFFICIAL/Arduino-Push-Button-Controlled-Fibonacci-Number-Generator-via-I2C-Communication/assets/52858312/8375b988-1392-4bd6-9db0-32096bcccb34)

Next, go back to Proteus and double-click on `Right Arduino Uno` and paste the `...Slave.ino.elf` link into the `Program File` field. Then, click `OK`.

![Screenshot](https://github.com/imSamirOFFICIAL/Arduino-Push-Button-Controlled-Fibonacci-Number-Generator-via-I2C-Communication/assets/52858312/04334a74-dc69-451a-8044-dcf15d76d89d)

Boom! Everything is set up properly. Now, just click the `Run` button located in the bottom left corner and simulate the experiment.

# Note
After running the simulation, a `Virtual Terminal` will pop up. The master Arduino, equipped with a push button, generated a sequence of Fibonacci numbers with each press of the button. These numbers were then transmitted to the slave Arduino, which displayed them on the Serial Monitor.

<p align="center"><img src="https://user-images.githubusercontent.com/52858312/246881269-422bd9fe-a9c1-4ba9-8085-9d9889410337.png"width=35% height=35%></p>
