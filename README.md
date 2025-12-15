# aic8800dc

I have updated the code based on the solution given in a tp-link [community post](https://community.tp-link.com/en/home/forum/topic/713458?replyId=1645862).  
Tested on Linux kernel 6.17.0-8-generic on Kubuntu OS.

### Important
Before installing the driver, delete all aic8800-related folders under /lib/firmware. Using an incorrect firmware version may cause the system to freeze.

### Installation Steps
#### Copy udev rules:

Copy the aic.rules file to /lib/udev/rules.d/:

```bash
sudo cp aic.rules /lib/udev/rules.d/
```

#### Copy firmware:

Copy the aic8800DC folder from ./fw to /lib/firmware/:

```bash
sudo cp -r ./fw/aic8800DC /lib/firmware/
```
#### Navigate to the driver directory:

Change to the drivers/aic8800 directory:

```bash
cd ./drivers/aic8800
```

#### Compile and Install the Driver:

First, compile the driver:

```bash
make
```
Then, install the driver:

```bash
sudo make install
```

For any kernel updates, you'll need to reinstall the driver:

```bash
make clean
make
sudo make install
```

### Load the Driver
After installation, load the driver with the following command:

```bash
sudo modprobe aic8800_fdrv
```

### Verify the Module is Active
Check if the module is loaded correctly:

```bash
lsmod | grep aic
```
You should see output similar to:

```bash
aic8800_fdrv    536576  0
cfg80211        1146880 1   aic8800_fdrv
aic_load_fw     69632   1   aic8800_fdrv
usbcore         348160  10  xhci_hcd,ehci_pci,usbhid,usb_storage,ehci_hcd,xhci_pci,uas,aic_load_fw,uhci_hcd,aic8800_fdrv
```

After that, plug in your USB wireless network card.

### Verify Wi-Fi Device is Active
To check if the Wi-Fi interface is recognized, run:

```bash
iwconfig
```
If the device is recognized as a storage device, switch the mode using usb_modeswitch:

```bash
sudo apt install usb-modeswitch usb-modeswitch-data
```
```bash
sudo usb_modeswitch \
  -v 0xa69c \
  -p 0x5721 \
  -M "5553424312345678000000000000061b000000020000000000000000000000"
```

If the device is still not active, check the kernel logs for any errors related to the driver:

```bash
sudo dmesg
```
