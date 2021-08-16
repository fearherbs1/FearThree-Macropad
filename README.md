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


