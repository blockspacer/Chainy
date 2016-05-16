*Chainy McChainface*, a chain to symbol-list gateway.

Example build process under UPA supported MSVC versions with `nmake` support:
```
mkdir build
cd build
cmake -G "NMake Makefiles" ..
nmake
```

Example execution (from the same `build/` directory):
```
bin\Chainy.exe --symbol-path=..\config\symbols.txt --vmodule=chainy=10
```

Then run a consumer such as the UPA example `rsslConsumer`:
```
rsslConsumer.exe  -h 127.0.0.1 -p 24002 -s NOCACHE_VTA -sl 0#US30YT=TWEB
Proxy host:
Proxy port:

Input arguments...

Using Connection Type = 0
srvrHostname: 127.0.0.1
srvrPortNo: 24002
serviceName: NOCACHE_VTA

Attempting to connect to server 127.0.0.1:24002...

Attempting to connect to server 127.0.0.1:24002...

Channel IPC descriptor = 124

Channel 124 In Progress...

Channel 124 Is Active
Connected to upa8.0.0.L1.win.rrg 64-bit Static device.
Ping Timeout = 60

Received Login Response for Username: reutadmin
        State: Open/Ok/None - text: ""


Received Source Directory Response
        State: Open/Ok/None - text: ""

Received serviceName: NOCACHE_VTA


0#US30YT=TWEB
DOMAIN: RSSL_DMT_SYMBOL_LIST
State: Non-streaming/Ok/None - text: ""
912810FF0=TWEB  RSSL_MPEA_ADD_ENTRY
912810FT0=TWEB  RSSL_MPEA_ADD_ENTRY
912810EY0=TWEB  RSSL_MPEA_ADD_ENTRY
912810FE3=TWEB  RSSL_MPEA_ADD_ENTRY
912810FP8=TWEB  RSSL_MPEA_ADD_ENTRY
912810PU6=TWEB  RSSL_MPEA_ADD_ENTRY
912810PT9=TWEB  RSSL_MPEA_ADD_ENTRY
912810FM5=TWEB  RSSL_MPEA_ADD_ENTRY
912810FA1=TWEB  RSSL_MPEA_ADD_ENTRY
912810FJ2=TWEB  RSSL_MPEA_ADD_ENTRY
912810FG8=TWEB  RSSL_MPEA_ADD_ENTRY
912810FB9=TWEB  RSSL_MPEA_ADD_ENTRY
912810EZ7=TWEB  RSSL_MPEA_ADD_ENTRY
912810EX2=TWEB  RSSL_MPEA_ADD_ENTRY
^C
```

Tested with [UPA 8.0.0.L1](https://developers.thomsonreuters.com/thomson-reuters-enterprise-platform/ultra-performance-api-upa-c-edition), [MSVC 2012](https://msdn.microsoft.com/en-us/library/dd831853(v=vs.110).aspx), and [Boost 1.58.0] (http://www.boost.org/users/history/version_1_58_0.html).
