# Zephyr RTOS example

This example uses the ClearBlade Cloud IoT Device SDK for Embedded C to connect a Zephyr native_posix board application to the [ClearBlade Cloud IoT Core MQTT bridge](https://cloud.google.com/iot/docs/how-tos/mqtt-bridge#iot-core-mqtt-auth-run-cpp).

## Getting started
Follow the steps below to connect the Zephyr application to the MQTT bridge.

Before you begin, generate a [public/private key pair](https://clearblade.atlassian.net/wiki/spaces/IC/pages/2202763333/Creating+key+pairs), store the private key in the `examples/zephyr_native_posix/zephyr` directory, and name the key `ec_private.pem`.

1. Run `make PRESET=ZEPHYR` in the repository's root directory. This command includes a `git clone` of the Zephyr repository, sets Zephyr required environment variables, and auto-generates `.h` files that the Zephyr BSP requires.

2. From the root directory, generate the Zephyr native_posix board application.

```
cd examples/zephyr_native_posix/build \
make
```

3. Run the following command to connect to Cloud IoT Core and issue a `PUBLISH` message every five seconds.

<pre>
zephyr/zephyr.exe -testargs -p <i><b>PROJECT_ID</b></i> -d projects/<i><b>PROJECT_ID</b></i>/locations/<i><b>REGION</b></i>/registries/<i><b>REGISTRY_ID</b></i>/devices/<i><b>DEVICE_ID</b></i> -t /devices/<i><b>DEVICE_ID</b></i>/state
</pre>

## Troubleshooting

### Installing dependencies 

You may be missing build requirements if you encounter the `Configuring incomplete, errors occurred!` error. Install the `device-tree-compiler` and `gperf` packages using the appropriate tools for your environment. For example, in Linux, you can use `apt-get` as follows:

```bash
sudo apt-get install device-tree-compiler gperf
```

### Setting up internet access on the native_posix board
By default, the Zephyr application claims IP 192.0.2.1 and is in the same subnet with the `zeth` virtual network adapter at IP 192.0.2.2. This subnet must be connected to the internet. 

To ensure internet connectivity, run the [socket HTTP GET example](https://docs.zephyrproject.org/latest/samples/net/sockets/http_get/README.html).

Read the following references to start the `zeth` virtual network adapter and connect the subnet to the internet (see the Zephyr instructions).
- [Networking with native_posix board](https://docs.zephyrproject.org/latest/guides/networking/native_posix_setup.html)
- [Setting up Zephyr and NAT and masquerading on host to access internet](https://docs.zephyrproject.org/latest/guides/networking/qemu_setup.html#setting-up-zephyr-and-nat-masquerading-on-host-to-access-internet) 

### Setting up the Zephyr development system

Another way to set environment variables is by permanently setting up the Zephyr environment in your terminal. To permanently install the Zephyr environment, follow the [Set up a development system](https://docs.zephyrproject.org/latest/getting_started/index.html#set-up-a-development-system) instructions.

### Validating Cloud IoT Core credentials

Build the [MQTT client example](https://github.com/ClearBlade/iot-device-sdk-embedded-c/tree/master/examples/iot_core_mqtt_client) to validate your Cloud IoT Core credentials.
