# FearThree-Macropad
A simple and open source 3 key hand-wired macro pad with QMK and VIA Support.  

  
![](https://i.imgur.com/zvou6rN.jpg)  
A FearThree Built with L+F Gateron Yellows, PLA case, and [GMK Dogethink v2 Artisans](https://dogethink.com/)

# Parts & Software Required  

* Pro Micro / Elite-C 
* Micro USB / USB-C Cable 
* 3 MX Switches  
* 3 MX Keycaps
* Access to a 3d Printer & slicing software
* The 3d Printed Case
* 4 M2x16mm Screws
* Small Piece of Electrical Tape
* Small Hookup Wire
* Solder & Solder Iron
* Some electrical Tape
* [QMK Toolbox](https://github.com/qmk/qmk_toolbox/releases)
* Optional but recommended: [VIA](https://caniusevia.com/)



# Build Guide

## Step 1: Printing the parts 

First you are going to need to print the parts of the case out.  I used PLA on my Prusa mini with the following settings:  
```
0.15mm QUALITY Preset in PrusaSlicer With the following Modifications:
* 10% infill
* Gyroid infill pattern
```
The parts are quite small, so you should be able to print all of the parts in one go.

The stls are located in the repo [HERE](https://github.com/fearherbs1/FearThree-Macropad/tree/main/3d%20models/STL) and the Fusion 360 files are located [HERE](https://github.com/fearherbs1/FearThree-Macropad/tree/main/3d%20models/Fusion360%20Files) if you would like to modify the case.   [psst: you can get a fusion360 license for free with a student email!](https://www.autodesk.com/education/edu-software/overview?sorting=featured&page=1)   

Once the parts are printed out, I recommend doing a quick test fit for the parts as shown below, the pro micro should loosly fit in its corrosponding hole and not be too hard to remove and the mx switches should click into the switchplate.

![](https://i.imgur.com/dM6NVa7.jpg)  


## Step 2: Flashing The Promicro

Download [QMK toolbox](https://github.com/qmk/qmk_toolbox/releases) and the [corrosponding firmware file](https://github.com/fearherbs1/FearThree-Macropad/tree/main/firmware/compiled%20hex%20files) you would like to use.   


 I **highly** suggest you use the VIA version, `FearThree_default_via.hex`, for easy key remapping without having to re-compile the firmware.

If you would like to create a keymap in QMK The Keyboard Folder is located in the repo [HERE](https://github.com/fearherbs1/FearThree-Macropad/tree/main/firmware/qmk%20source/FearThree)

Once you have chosen your firmware, open QMK toolbox and plug the pro micro into your computer.  

Select your firmware file and select `atmega32u4` for your MCU aswell as check the `Auto-Flash` Checkbox:  

![](https://i.imgur.com/jRC7ozp.png)

Then using a paperclip or some tweasers, quicky short the RST and GND pins on the pro micro twice while it is pluged into your computer. This should allow QMK toolbox to flash the firmware. It may not work and qmk toolbox may show `Acess denied`. If this happenes, just keep shorting those pins, retrying the process until it works.   

Once the firmware is flashed you should get a message that looks like the following:  

![](https://i.imgur.com/nbqd57n.png)


## Step 3: Wiring The Switches

Now that our pro micro is ready we can begin to wire up our switches.  

### Wiring Diagram:  

Luckily since we only need to wire up three switches, there is no need for any diodes as the pro micro has plenty of pins for us to use.

![](https://i.imgur.com/JioVO2a.png)


### Wiring Step 1:

First, install your desired switches into the switchplate and prepare a piece of hookup wire, if you have multiple colors to use it definitely aids in not mixing wires up. 

This first piece of wire will be the black on in the diagram, our ground. This wire will connect to a pin on all 3 switches and connnect to the ground pin on our pro micro. 

Using a wire striper, remove the shielding of the wire where it needs to connect to the switches and solder it, as seen below:

![](https://i.imgur.com/YIHFi33.jpg)

### Wiring Step 2:

Once the ground wire is done, cut 3 more pices of wire and solder them to each switch, cable management can be improved by making the red wire shorter than the green wire and the green wire shorter than the yellow one:

![](https://i.imgur.com/ltGJ1lm.jpg)

### Wiring Step 3:

Next we can strip the end of each wire and solder it to its corrosponding pin on the promicro:

![](https://i.imgur.com/PsI8FYZ.jpg)