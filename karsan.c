Data Structures Project:
1.	K Dimensional Tree
2.	Binary Indexed Tree or Fenwick Tree
3.	XOR Linked List
4.	Skip List
5.	Unrolled Linked List
6.	AA tree
7.	Scapegoat tree
8.	Spaghetti Stack


<?xml version="1.0"?>
<DslCpeConfig>
  <InternetGatewayDevice>
    <DeviceSummary val="InternetGatewayDevice:1.1[](Baseline:1, EthernetLAN:1)" />
    <LANDeviceNumberOfEntries val=1 />
    <DeviceInfo>
      <ManufacturerOUI val=34E894 />
      <SerialNumber val=34E894107BFC />
      <HardwareVersion val="TL-WR850N v1 00000001" />
      <SoftwareVersion val="0.9.1 0.1 v0001.0 Build 171124 Rel.29827n" />
      <UpTime val=3 />
      <X_TP_isFD val=1 />
      <X_TP_LogCfg>
        <ServerIP val=192.168.0.100 />
      </X_TP_LogCfg>
    </DeviceInfo>
    <ManagementServer>
      <PeriodicInformTime val=1970-01-01T00:00:13 />
      <ConnectionRequestURL val=http://10.110.7.164:7547/tr069 />
    </ManagementServer>
    <X_TP_EthSwitch>
      <NumberOfVirtualPorts val=4 />
      <IfName val=eth0 />
    </X_TP_EthSwitch>
    <X_TP_NetCfg>
      <DNSServers val=8.8.4.4,4.2.2.1 />
      <DNSifAliasName val=ewan_pppoe />
      <CurrDNSServer val=67373064 />
    </X_TP_NetCfg>
    <X_TP_AppCfg>
      <HttpCfg>
        <HttpRemoteEnabled val=1 />
      </HttpCfg>
      <DynDnsCfg>
        <Server val=members.dyndns.org />
      </DynDnsCfg>
      <UPnPCfg>
        <Enable val=1 />
      </UPnPCfg>
      <NoipDnsCfg>
        <State val=3 />
        <Server val=dynupdate.no-ip.com />
      </NoipDnsCfg>
      <CmxDnsCfg>
        <Server val=dns.comexe.cn />
      </CmxDnsCfg>
    </X_TP_AppCfg>
    <Time>
      <CurrentLocalTime val=2020-03-13T12:55:39+00:00 />
      <LocalTimeZone val=+00:00 />
    </Time>
    <Layer3Forwarding>
      <__defaultGateway val=10.100.104.1 />
      <__ifName val=ppp2 />
      <__ifAliasName val=ewan_pppoe />
    </Layer3Forwarding>
    <X_TP_Layer3IPv6Forwarding>
      <__defaultGateway val=:: />
      <__ifName val=eth0.2 />
      <__ifAliasName val=ewan_ipoev6_d />
    </X_TP_Layer3IPv6Forwarding>
    <Layer2Bridging>
      <BridgeNumberOfEntries val=1 />
      <FilterNumberOfEntries val=6 />
      <AvailableInterfaceNumberOfEntries val=6 />
      <Bridge instance=1 >
        <BridgeEnable val=1 />
        <BridgeName val=Default />
      </Bridge>
      <Bridge nextInstance=2 />
      <Filter instance=1 >
        <FilterKey val=1 />
        <FilterEnable val=1 />
        <FilterBridgeReference val=0 />
        <__filterBridgeRefName val=Default />
        <FilterInterface val=eth0 />
        <X_TP_IfAliasName val=LAN />
      </Filter>
      <Filter instance=2 >
        <FilterKey val=2 />
        <FilterBridgeReference val=0 />
        <__filterBridgeRefName val=Default />
        <FilterInterface val=eth0.2 />
        <X_TP_IfAliasName val=LAN4 />
      </Filter>
      <Filter instance=3 >
        <FilterKey val=3 />
        <FilterBridgeReference val=0 />
        <__filterBridgeRefName val=Default />
        <FilterInterface val=eth0.3 />
        <X_TP_IfAliasName val=LAN3 />
      </Filter>
      <Filter instance=4 >
        <FilterKey val=4 />
        <FilterBridgeReference val=0 />
        <__filterBridgeRefName val=Default />
        <FilterInterface val=eth0.4 />
        <X_TP_IfAliasName val=LAN2 />
      </Filter>
      <Filter instance=5 >
        <FilterKey val=5 />
        <FilterBridgeReference val=0 />
        <__filterBridgeRefName val=Default />
        <FilterInterface val=eth0.5 />
        <X_TP_IfAliasName val=LAN1 />
      </Filter>
      <Filter instance=6 >
        <FilterKey val=6 />
        <FilterEnable val=1 />
        <FilterBridgeReference val=0 />
        <__filterBridgeRefName val=Default />
        <FilterInterface val=ra0 />
        <X_TP_IfAliasName val=WLAN1 />
      </Filter>
      <Filter nextInstance=7 />
      <AvailableInterface instance=1 >
        <AvailableInterfaceKey val=1 />
        <InterfaceType val=LANInterface />
        <InterfaceReference val=LAN_ETH_INTF#1,1 />
      </AvailableInterface>
      <AvailableInterface instance=2 >
        <AvailableInterfaceKey val=2 />
        <InterfaceType val=WANInterface />
        <InterfaceReference val=LAN_ETH_INTF#1,2 />
      </AvailableInterface>
      <AvailableInterface instance=3 >
        <AvailableInterfaceKey val=3 />
        <InterfaceType val=LANInterface />
        <InterfaceReference val=LAN_ETH_INTF#1,3 />
      </AvailableInterface>
      <AvailableInterface instance=4 >
        <AvailableInterfaceKey val=4 />
        <InterfaceType val=LANInterface />
        <InterfaceReference val=LAN_ETH_INTF#1,4 />
      </AvailableInterface>
      <AvailableInterface instance=5 >
        <AvailableInterfaceKey val=5 />
        <InterfaceType val=LANInterface />
        <InterfaceReference val=LAN_ETH_INTF#1,5 />
      </AvailableInterface>
      <AvailableInterface instance=6 >
        <AvailableInterfaceKey val=6 />
        <InterfaceType val=LANInterface />
        <InterfaceReference val=LAN_WLAN#1,1 />
      </AvailableInterface>
      <AvailableInterface nextInstance=7 />
    </Layer2Bridging>
    <LANDevice instance=1 >
      <LANEthernetInterfaceNumberOfEntries val=5 />
      <LANWLANConfigurationNumberOfEntries val=1 />
      <LANHostConfigManagement>
        <DHCPServerEnable val=1 />
        <X_TP_DhcpRelayServer val=0.0.0.0 />
        <MinAddress val=192.168.0.100 />
        <MaxAddress val=192.168.0.199 />
        <DNSServers val=103.219.232.232,8.8.4.4 />
        <IPRouters val=192.168.0.1 />
        <DHCPLeaseTime val=7200 />
        <IPInterfaceNumberOfEntries val=1 />
        <IPInterface instance=1 >
          <Enable val=1 />
          <IPInterfaceIPAddress val=192.168.0.1 />
          <__ifName val=br0 />
        </IPInterface>
        <IPInterface nextInstance=2 />
      </LANHostConfigManagement>
      <X_TP_LANIPv6HostConfigManagement>
        <IPv6PDWANConnection val=ewan_ipoev6_d />
        <__ifName val=br0 />
        <IPv6InterfaceNumberOfEntries val=1 />
        <IPv6Interface instance=1 >
          <Enable val=1 />
          <__ifName val=br0 />
        </IPv6Interface>
        <IPv6Interface nextInstance=2 />
      </X_TP_LANIPv6HostConfigManagement>
      <LANEthernetInterfaceConfig instance=1 >
        <Enable val=1 />
        <Status val=Up />
        <__ifName val=eth0 />
      </LANEthernetInterfaceConfig>
      <LANEthernetInterfaceConfig instance=2 >
        <__ifName val=eth0.2 />
      </LANEthernetInterfaceConfig>
      <LANEthernetInterfaceConfig instance=3 >
        <__ifName val=eth0.3 />
      </LANEthernetInterfaceConfig>
      <LANEthernetInterfaceConfig instance=4 >
        <__ifName val=eth0.4 />
      </LANEthernetInterfaceConfig>
      <LANEthernetInterfaceConfig instance=5 >
        <__ifName val=eth0.5 />
      </LANEthernetInterfaceConfig>
      <LANEthernetInterfaceConfig nextInstance=6 />
      <WLANConfiguration instance=1 >
        <__apLastStatus val=3 />
        <Enable val=1 />
        <Name val=wlan0 />
        <Channel val=3 />
        <AutoChannelEnable val=1 />
        <X_TP_PreSSID val=TP-LINK />
        <SSID val="221B Baker Street" />
        <BeaconType val=11i />
        <MACAddressControlEnabled val=1 />
        <X_TP_MACAddressControlRule val=allow />
        <X_TP_MACTableSize val=8 />
        <X_TP_Band val=2.4GHz />
        <X_TP_Bandwidth val=Auto />
        <Standard val=n />
        <WEPKeyIndex val=1 />
        <BasicEncryptionModes val=None />
        <BasicAuthenticationMode val=None />
        <WPAEncryptionModes val=AESEncryption />
        <WPAAuthenticationMode val=PSKAuthentication />
        <IEEE11iEncryptionModes val=AESEncryption />
        <IEEE11iAuthenticationMode val=PSKAuthentication />
        <X_TP_PreSharedKey val=arigatou1113 />
        <SSIDAdvertisementEnabled val=1 />
        <TransmitPower val=100 />
        <RegulatoryDomain val="DE " />
        <DeviceOperationMode val=InfrastructureAccessPoint />
        <WMMEnable val=1 />
        <X_TP_ShortGIEnable val=1 />
        <WPS>
          <Enable val=1 />
          <DevicePassword val=79735506 />
          <ConfigurationState val=Configured />
        </WPS>
        <X_TP_MACTableEntry instance=1 >
          <Enabled val=1 />
          <MACAddress val=4C:49:E3:B8:2B:8A />
          <Description val="redmi 4" />
          <HostName val=wlan0 />
        </X_TP_MACTableEntry>
        <X_TP_MACTableEntry instance=2 >
          <Enabled val=1 />
          <MACAddress val=5C:93:A2:AA:B4:5F />
          <Description val=acer />
          <HostName val=wlan0 />
        </X_TP_MACTableEntry>
        <X_TP_MACTableEntry instance=3 >
          <Enabled val=1 />
          <MACAddress val=9C:2E:A1:99:9C:DD />
          <Description val="redmi 5" />
          <HostName val=wlan0 />
        </X_TP_MACTableEntry>
        <X_TP_MACTableEntry instance=4 >
          <Enabled val=1 />
          <MACAddress val=88:E9:FE:7B:7D:0C />
          <Description val=mac />
          <HostName val=wlan0 />
        </X_TP_MACTableEntry>
        <X_TP_MACTableEntry instance=5 >
          <Enabled val=1 />
          <MACAddress val=14:A5:1A:00:0B:E4 />
          <Description val=huwai />
          <HostName val=wlan0 />
        </X_TP_MACTableEntry>
        <X_TP_MACTableEntry instance=6 >
          <Enabled val=1 />
          <MACAddress val=EC:F3:42:DA:F7:7B />
          <Description val=oppo />
          <HostName val=wlan0 />
        </X_TP_MACTableEntry>
        <X_TP_MACTableEntry instance=7 >
          <Enabled val=1 />
          <MACAddress val=F4:BF:80:73:58:17 />
          <Description val=unk />
          <HostName val=wlan0 />
        </X_TP_MACTableEntry>
        <X_TP_MACTableEntry instance=8 >
          <Enabled val=1 />
          <MACAddress val=0C:9D:92:D6:8A:AF />
          <Description val=unk2 />
          <HostName val=wlan0 />
        </X_TP_MACTableEntry>
        <X_TP_MACTableEntry nextInstance=9 />
        <WEPKey instance=1 >
        </WEPKey>
        <WEPKey instance=2 >
        </WEPKey>
        <WEPKey instance=3 >
        </WEPKey>
        <WEPKey instance=4 >
        </WEPKey>
        <WEPKey nextInstance=5 />
        <X_TP_WDSBridge>
          <BridgeName val=wds0 />
          <BridgeAddrMode val=detect />
          <BridgeAuthMode val=Open />
          <BridgeEncryptMode val=None />
          <BridgeWepKeyIndex val=1 />
        </X_TP_WDSBridge>
        <X_TP_MultiSSID>
          <MultiSSIDEntry instance=1 >
            <Name val=wlan1 />
            <SSID val=TP-LINK_Guest_7BFC />
            <SSIDAdvertisementEnable val=1 />
            <BeaconType val=Basic />
            <WEPKeyIndex val=1 />
            <BasicEncryptionModes val=None />
            <BasicAuthenticationMode val=None />
            <WPAEncryptionModes val=TKIPandAESEncryption />
            <WPAAuthenticationMode val=PSKAuthentication />
            <IEEE11iEncryptionModes val=TKIPandAESEncryption />
            <IEEE11iAuthenticationMode val=PSKAuthentication />
            <RadiusServerPort val=1812 />
            <WEPKey instance=1 >
            </WEPKey>
            <WEPKey instance=2 >
            </WEPKey>
            <WEPKey instance=3 >
            </WEPKey>
            <WEPKey instance=4 >
            </WEPKey>
            <WEPKey nextInstance=5 />
          </MultiSSIDEntry>
          <MultiSSIDEntry nextInstance=2 />
        </X_TP_MultiSSID>
        <X_TP_WlBrName instance=1 >
          <IfName val=ra0 />
          <BridgeName val=br0 />
        </X_TP_WlBrName>
        <X_TP_WlBrName nextInstance=2 />
        <X_TP_QuickSave>
          <Enable val=1 />
        </X_TP_QuickSave>
        <X_TP_GuestNetwork>
          <Enable val=1 />
          <Name val=wlan1 />
          <PreSSID val=TP-LINK_Guest />
          <TCMaxUpBW val=200 />
          <TCMinUpBW val=100 />
          <TCMaxDownBW val=200 />
          <TCMinDownBW val=100 />
        </X_TP_GuestNetwork>
      </WLANConfiguration>
      <WLANConfiguration instance=2 >
        <__apLastStatus val=3 />
        <Name val=wlan5 />
        <Channel val=40 />
        <AutoChannelEnable val=1 />
        <X_TP_PreSSID val=TP-LINK />
        <SSID val=TP-LINK_7BFC_5G />
        <BeaconType val=11i />
        <X_TP_MACAddressControlRule val=deny />
        <X_TP_Band val=5GHz />
        <X_TP_Bandwidth val=Auto />
        <Standard val=ac />
        <WEPKeyIndex val=1 />
        <BasicEncryptionModes val=None />
        <BasicAuthenticationMode val=None />
        <WPAEncryptionModes val=TKIPandAESEncryption />
        <WPAAuthenticationMode val=PSKAuthentication />
        <IEEE11iEncryptionModes val=AESEncryption />
        <IEEE11iAuthenticationMode val=PSKAuthentication />
        <X_TP_PreSharedKey val=79735506 />
        <SSIDAdvertisementEnabled val=1 />
        <TransmitPower val=100 />
        <RegulatoryDomain val="DE " />
        <DeviceOperationMode val=InfrastructureAccessPoint />
        <WMMEnable val=1 />
        <X_TP_ShortGIEnable val=1 />
        <WPS>
          <Enable val=1 />
          <DevicePassword val=79735506 />
          <ConfigurationState val=Configured />
        </WPS>
        <WEPKey instance=1 >
        </WEPKey>
        <WEPKey instance=2 >
        </WEPKey>
        <WEPKey instance=3 >
        </WEPKey>
        <WEPKey instance=4 >
        </WEPKey>
        <WEPKey nextInstance=5 />
        <X_TP_WDSBridge>
          <BridgeName val=wds1 />
          <BridgeAddrMode val=detect />
          <BridgeAuthMode val=Open />
          <BridgeEncryptMode val=None />
          <BridgeWepKeyIndex val=1 />
        </X_TP_WDSBridge>
        <X_TP_MultiSSID>
          <MultiSSIDEntry instance=1 >
            <Name val=wlan6 />
            <SSID val=TP-LINK_Guest_7BFC_5G />
            <SSIDAdvertisementEnable val=1 />
            <BeaconType val=Basic />
            <WEPKeyIndex val=1 />
            <BasicEncryptionModes val=None />
            <BasicAuthenticationMode val=None />
            <WPAEncryptionModes val=TKIPandAESEncryption />
            <WPAAuthenticationMode val=PSKAuthentication />
            <IEEE11iEncryptionModes val=TKIPandAESEncryption />
            <IEEE11iAuthenticationMode val=PSKAuthentication />
            <RadiusServerPort val=1812 />
            <WEPKey instance=1 >
            </WEPKey>
            <WEPKey instance=2 >
            </WEPKey>
            <WEPKey instance=3 >
            </WEPKey>
            <WEPKey instance=4 >
            </WEPKey>
            <WEPKey nextInstance=5 />
          </MultiSSIDEntry>
          <MultiSSIDEntry nextInstance=2 />
        </X_TP_MultiSSID>
        <X_TP_QuickSave>
          <X_TP_Band val=5GHz />
        </X_TP_QuickSave>
        <X_TP_GuestNetwork>
          <Enable val=1 />
          <Name val=wlan6 />
          <PreSSID val=TP-LINK_Guest />
          <TCMaxUpBW val=200 />
          <TCMinUpBW val=100 />
          <TCMaxDownBW val=200 />
          <TCMinDownBW val=100 />
        </X_TP_GuestNetwork>
      </WLANConfiguration>
      <WLANConfiguration nextInstance=3 />
    </LANDevice>
    <LANDevice nextInstance=2 />
    <WANDevice instance=1 >
      <WANCommonInterfaceConfig>
        <EnabledForInternet val=1 />
        <WANAccessType val=Ethernet />
      </WANCommonInterfaceConfig>
      <WANEthernetInterfaceConfig>
        <Enable val=1 />
        <Status val=Up />
        <X_TP_IfName val=eth0.2 />
        <X_TP_lastUsedIntf val=pppoe_eth3_d />
      </WANEthernetInterfaceConfig>
      <WANConnectionDevice instance=1 >
        <WANIPConnectionNumberOfEntries val=5 />
        <WANPPPConnectionNumberOfEntries val=2 />
        <WANEthernetLinkConfig>
          <Enable val=1 />
          <EthernetLinkStatus val=Up />
          <X_TP_IfName val=eth0.2 />
        </WANEthernetLinkConfig>
        <X_TP_L2TP_Connection>
          <Name val=ewan_l2tp />
          <ExternalIPAddressIP val=0.0.0.0 />
          <SubnetMaskIP val=0.0.0.0 />
          <DefaultGatewayIP val=0.0.0.0 />
          <IfNameIP val=eth0.2 />
          <NATEnabled val=1 />
          <IfName val=eth0.2 />
          <L2IfName val=eth0.2 />
          <ConnectionId val=10 />
          <MACAddress val=34:E8:94:10:7B:FD />
        </X_TP_L2TP_Connection>
        <X_TP_PPTP_Connection>
          <Name val=ewan_pptp />
          <ExternalIPAddressIP val=0.0.0.0 />
          <SubnetMaskIP val=0.0.0.0 />
          <DefaultGatewayIP val=0.0.0.0 />
          <IfNameIP val=eth0.2 />
          <NATEnabled val=1 />
          <IfName val=eth0.2 />
          <L2IfName val=eth0.2 />
          <ConnectionId val=10 />
          <MACAddress val=34:E8:94:10:7B:FD />
        </X_TP_PPTP_Connection>
        <WANIPConnection instance=1 >
          <Enable val=1 />
          <ConnectionType val=IP_Routed />
          <Name val=ewan_ipoe_s />
          <X_TP_ConnectionId val=10 />
          <NATEnabled val=1 />
          <ExternalIPAddress val=169.254.124.254 />
          <SubnetMask val=255.255.255.255 />
          <DefaultGateway val=0.0.0.0 />
          <DNSServers val=0.0.0.0,0.0.0.0 />
          <X_TP_IfName val=eth0.2 />
          <X_TP_ExternalIPv6Address val=:: />
          <X_TP_PrefixLength val=64 />
          <X_TP_DefaultIPv6Gateway val=:: />
          <X_TP_IPv6DNSServers val=::,:: />
        </WANIPConnection>
        <WANIPConnection instance=2 >
          <ConnectionType val=IP_Routed />
          <Name val=ewan_ipoe_d />
          <X_TP_ConnectionId val=10 />
          <NATEnabled val=1 />
          <X_TP_Hostname val=,TL-WR850N />
          <AddressingType val=DHCP />
          <ExternalIPAddress val=0.0.0.0 />
          <SubnetMask val=0.0.0.0 />
          <DefaultGateway val=0.0.0.0 />
          <DNSServers val=0.0.0.0,0.0.0.0 />
          <X_TP_IfName val=eth0.2 />
          <X_TP_IPv6AddressingType val=DHCPv6 />
          <X_TP_ExternalIPv6Address val=:: />
          <X_TP_DefaultIPv6Gateway val=:: />
          <X_TP_IPv6DNSServers val=::,:: />
        </WANIPConnection>
        <WANIPConnection instance=3 >
          <ConnectionType val=IP_Routed />
          <Name val=ewan_bpa_d />
          <X_TP_ConnectionId val=10 />
          <NATEnabled val=1 />
          <X_TP_Hostname val=,TL-WR850N />
          <AddressingType val=DHCP />
          <ExternalIPAddress val=0.0.0.0 />
          <SubnetMask val=0.0.0.0 />
          <DefaultGateway val=0.0.0.0 />
          <DNSServers val=0.0.0.0,0.0.0.0 />
          <X_TP_IfName val=eth0.2 />
          <X_TP_IPv6AddressingType val=DHCPv6 />
          <X_TP_ExternalIPv6Address val=:: />
          <X_TP_PrefixLength val=64 />
          <X_TP_DefaultIPv6Gateway val=:: />
          <X_TP_BpaEnable val=1 />
        </WANIPConnection>
        <WANIPConnection instance=4 >
          <ConnectionType val=IP_Routed />
          <Name val=ewan_ipoev6_s />
          <X_TP_ConnectionId val=11 />
          <NATEnabled val=1 />
          <ExternalIPAddress val=0.0.0.0 />
          <SubnetMask val=0.0.0.0 />
          <DefaultGateway val=0.0.0.0 />
          <X_TP_IPv4Enabled val=0 />
          <X_TP_IPv6Enabled val=1 />
          <X_TP_ExternalIPv6Address val=:: />
          <X_TP_PrefixLength val=64 />
          <X_TP_DefaultIPv6Gateway val=:: />
        </WANIPConnection>
        <WANIPConnection instance=5 >
          <ConnectionType val=IP_Routed />
          <Name val=ewan_ipoev6_d />
          <X_TP_ConnectionId val=11 />
          <NATEnabled val=1 />
          <X_TP_Hostname val=,TL-WR850N />
          <AddressingType val=DHCP />
          <ExternalIPAddress val=0.0.0.0 />
          <SubnetMask val=0.0.0.0 />
          <DefaultGateway val=0.0.0.0 />
          <DNSServers val=0.0.0.0,0.0.0.0 />
          <X_TP_IfName val=eth0.2 />
          <X_TP_IPv4Enabled val=0 />
          <X_TP_IPv6Enabled val=1 />
          <X_TP_IPv6AddressingType val=DHCPv6 />
          <X_TP_ExternalIPv6Address val=:: />
          <X_TP_DefaultIPv6Gateway val=:: />
          <X_TP_PDEnabled val=1 />
        </WANIPConnection>
        <WANIPConnection nextInstance=6 />
        <WANPPPConnection instance=1 >
          <Enable val=1 />
          <DefaultGateway val=10.100.104.1 />
          <Name val=ewan_pppoe />
          <Username val=tb094_raihan@5_500 />
          <Password val=01521432303 />
          <X_TP_IfName val=ppp2 />
          <X_TP_L2IfName val=eth0.2 />
          <X_TP_ConnectionId val=10 />
          <ExternalIPAddress val=10.110.7.164 />
          <RemoteIPAddress val=10.100.104.1 />
          <DNSServers val=8.8.4.4,4.2.2.1 />
          <X_TP_ExternalIPv6Address val=:: />
          <X_TP_DefaultIPv6Gateway val=:: />
          <X_TP_IPv6DNSServers val=::,:: />
          <SecondConnection val=sec_conn_staip />
        </WANPPPConnection>
        <WANPPPConnection instance=2 >
          <DefaultGateway val=0.0.0.0 />
          <Name val=ewan_pppoev6 />
          <X_TP_IfName val=ppp1 />
          <X_TP_ConnectionId val=11 />
          <RemoteIPAddress val=0.0.0.0 />
          <X_TP_IPv4Enabled val=0 />
          <X_TP_IPv6Enabled val=1 />
          <X_TP_ExternalIPv6Address val=:: />
          <X_TP_DefaultIPv6Gateway val=:: />
          <X_TP_IPv6DNSServers val=::,:: />
        </WANPPPConnection>
        <WANPPPConnection nextInstance=3 />
      </WANConnectionDevice>
      <WANConnectionDevice nextInstance=2 />
    </WANDevice>
    <WANDevice instance=2 >
      <WANCommonInterfaceConfig>
        <EnabledForInternet val=1 />
        <WANAccessType val=USB_3G />
      </WANCommonInterfaceConfig>
      <WANConnectionDevice instance=1 >
      </WANConnectionDevice>
      <WANConnectionDevice nextInstance=2 />
    </WANDevice>
    <WANDevice nextInstance=3 />
    <X_TP_Firewall>
      <InternalHost instance=1 >
        <RefCnt val=1 />
        <Type val=1 />
        <EntryName val=childMac1 />
        <IsParentCtrl val=1 />
      </InternalHost>
      <InternalHost instance=2 >
        <RefCnt val=1 />
        <Type val=1 />
        <EntryName val=childMac2 />
        <IsParentCtrl val=1 />
      </InternalHost>
      <InternalHost instance=3 >
        <RefCnt val=1 />
        <Type val=1 />
        <EntryName val=childMac3 />
        <IsParentCtrl val=1 />
      </InternalHost>
      <InternalHost instance=4 >
        <RefCnt val=1 />
        <Type val=1 />
        <EntryName val=childMac4 />
        <IsParentCtrl val=1 />
      </InternalHost>
      <InternalHost nextInstance=5 />
      <ExternalHost instance=1 >
        <RefCnt val=4 />
        <Type val=2 />
        <EntryName val=childUrl1 />
        <IsParentCtrl val=1 />
        <PortStart val=80 />
      </ExternalHost>
      <ExternalHost nextInstance=2 />
      <TaskSchedule instance=1 >
        <RefCnt val=4 />
        <IsParentCtrl val=1 />
        <EntryName val=childSchedule1 />
      </TaskSchedule>
      <TaskSchedule nextInstance=2 />
      <Rule instance=1 >
        <Enable val=1 />
        <RuleName val=parentCtrl1 />
        <IsParentCtrl val=1 />
        <Direction val=1 />
        <InternalHostRef val=childMac1 />
        <ExternalHostRef val=childUrl1 />
        <ScheduleRef val=childSchedule1 />
      </Rule>
      <Rule instance=2 >
        <Enable val=1 />
        <RuleName val=parentCtrl2 />
        <IsParentCtrl val=1 />
        <Direction val=1 />
        <InternalHostRef val=childMac2 />
        <ExternalHostRef val=childUrl1 />
        <ScheduleRef val=childSchedule1 />
      </Rule>
      <Rule instance=3 >
        <Enable val=1 />
        <RuleName val=parentCtrl3 />
        <IsParentCtrl val=1 />
        <Direction val=1 />
        <InternalHostRef val=childMac3 />
        <ExternalHostRef val=childUrl1 />
        <ScheduleRef val=childSchedule1 />
      </Rule>
      <Rule instance=4 >
        <Enable val=1 />
        <RuleName val=parentCtrl4 />
        <IsParentCtrl val=1 />
        <Direction val=1 />
        <InternalHostRef val=childMac4 />
        <ExternalHostRef val=childUrl1 />
        <ScheduleRef val=childSchedule1 />
      </Rule>
      <Rule nextInstance=5 />
      <UrlList>
        <UrlCfg instance=1 >
        </UrlCfg>
        <UrlCfg instance=2 >
        </UrlCfg>
        <UrlCfg instance=3 >
        </UrlCfg>
        <UrlCfg instance=4 >
        </UrlCfg>
        <UrlCfg instance=5 >
        </UrlCfg>
        <UrlCfg instance=6 >
        </UrlCfg>
        <UrlCfg instance=7 >
        </UrlCfg>
        <UrlCfg instance=8 >
        </UrlCfg>
        <UrlCfg instance=9 >
        </UrlCfg>
        <UrlCfg instance=10 >
        </UrlCfg>
        <UrlCfg instance=11 >
        </UrlCfg>
        <UrlCfg instance=12 >
        </UrlCfg>
        <UrlCfg instance=13 >
        </UrlCfg>
        <UrlCfg instance=14 >
        </UrlCfg>
        <UrlCfg instance=15 >
        </UrlCfg>
        <UrlCfg instance=16 >
        </UrlCfg>
        <UrlCfg instance=17 >
        </UrlCfg>
        <UrlCfg instance=18 >
        </UrlCfg>
        <UrlCfg instance=19 >
        </UrlCfg>
        <UrlCfg instance=20 >
        </UrlCfg>
        <UrlCfg instance=21 >
        </UrlCfg>
        <UrlCfg instance=22 >
        </UrlCfg>
        <UrlCfg instance=23 >
        </UrlCfg>
        <UrlCfg instance=24 >
        </UrlCfg>
        <UrlCfg instance=25 >
        </UrlCfg>
        <UrlCfg instance=26 >
        </UrlCfg>
        <UrlCfg instance=27 >
        </UrlCfg>
        <UrlCfg instance=28 >
        </UrlCfg>
        <UrlCfg instance=29 >
        </UrlCfg>
        <UrlCfg instance=30 >
        </UrlCfg>
        <UrlCfg instance=31 >
        </UrlCfg>
        <UrlCfg instance=32 >
        </UrlCfg>
        <UrlCfg instance=33 >
        </UrlCfg>
        <UrlCfg instance=34 >
        </UrlCfg>
        <UrlCfg instance=35 >
        </UrlCfg>
        <UrlCfg instance=36 >
        </UrlCfg>
        <UrlCfg instance=37 >
        </UrlCfg>
        <UrlCfg instance=38 >
        </UrlCfg>
        <UrlCfg instance=39 >
        </UrlCfg>
        <UrlCfg instance=40 >
        </UrlCfg>
        <UrlCfg instance=41 >
        </UrlCfg>
        <UrlCfg instance=42 >
        </UrlCfg>
        <UrlCfg instance=43 >
        </UrlCfg>
        <UrlCfg instance=44 >
        </UrlCfg>
        <UrlCfg instance=45 >
        </UrlCfg>
        <UrlCfg instance=46 >
        </UrlCfg>
        <UrlCfg instance=47 >
        </UrlCfg>
        <UrlCfg instance=48 >
        </UrlCfg>
        <UrlCfg instance=49 >
        </UrlCfg>
        <UrlCfg instance=50 >
        </UrlCfg>
        <UrlCfg instance=51 >
        </UrlCfg>
        <UrlCfg instance=52 >
        </UrlCfg>
        <UrlCfg instance=53 >
        </UrlCfg>
        <UrlCfg instance=54 >
        </UrlCfg>
        <UrlCfg instance=55 >
        </UrlCfg>
        <UrlCfg instance=56 >
        </UrlCfg>
        <UrlCfg instance=57 >
        </UrlCfg>
        <UrlCfg instance=58 >
        </UrlCfg>
        <UrlCfg instance=59 >
        </UrlCfg>
        <UrlCfg instance=60 >
        </UrlCfg>
        <UrlCfg instance=61 >
        </UrlCfg>
        <UrlCfg instance=62 >
        </UrlCfg>
        <UrlCfg instance=63 >
        </UrlCfg>
        <UrlCfg instance=64 >
        </UrlCfg>
        <UrlCfg instance=65 >
        </UrlCfg>
        <UrlCfg instance=66 >
        </UrlCfg>
        <UrlCfg instance=67 >
        </UrlCfg>
        <UrlCfg instance=68 >
        </UrlCfg>
        <UrlCfg instance=69 >
        </UrlCfg>
        <UrlCfg instance=70 >
        </UrlCfg>
        <UrlCfg instance=71 >
        </UrlCfg>
        <UrlCfg instance=72 >
        </UrlCfg>
        <UrlCfg instance=73 >
        </UrlCfg>
        <UrlCfg instance=74 >
        </UrlCfg>
        <UrlCfg instance=75 >
        </UrlCfg>
        <UrlCfg instance=76 >
        </UrlCfg>
        <UrlCfg instance=77 >
        </UrlCfg>
        <UrlCfg instance=78 >
        </UrlCfg>
        <UrlCfg instance=79 >
        </UrlCfg>
        <UrlCfg instance=80 >
        </UrlCfg>
        <UrlCfg instance=81 >
        </UrlCfg>
        <UrlCfg instance=82 >
        </UrlCfg>
        <UrlCfg instance=83 >
        </UrlCfg>
        <UrlCfg instance=84 >
        </UrlCfg>
        <UrlCfg instance=85 >
        </UrlCfg>
        <UrlCfg instance=86 >
        </UrlCfg>
        <UrlCfg instance=87 >
        </UrlCfg>
        <UrlCfg instance=88 >
        </UrlCfg>
        <UrlCfg instance=89 >
        </UrlCfg>
        <UrlCfg instance=90 >
        </UrlCfg>
        <UrlCfg instance=91 >
        </UrlCfg>
        <UrlCfg instance=92 >
        </UrlCfg>
        <UrlCfg instance=93 >
        </UrlCfg>
        <UrlCfg instance=94 >
        </UrlCfg>
        <UrlCfg instance=95 >
        </UrlCfg>
        <UrlCfg instance=96 >
        </UrlCfg>
        <UrlCfg instance=97 >
        </UrlCfg>
        <UrlCfg instance=98 >
        </UrlCfg>
        <UrlCfg instance=99 >
        </UrlCfg>
        <UrlCfg instance=100 >
        </UrlCfg>
        <UrlCfg instance=101 >
        </UrlCfg>
        <UrlCfg instance=102 >
        </UrlCfg>
        <UrlCfg instance=103 >
        </UrlCfg>
        <UrlCfg instance=104 >
        </UrlCfg>
        <UrlCfg instance=105 >
        </UrlCfg>
        <UrlCfg instance=106 >
        </UrlCfg>
        <UrlCfg instance=107 >
        </UrlCfg>
        <UrlCfg instance=108 >
        </UrlCfg>
        <UrlCfg instance=109 >
        </UrlCfg>
        <UrlCfg instance=110 >
        </UrlCfg>
        <UrlCfg instance=111 >
        </UrlCfg>
        <UrlCfg instance=112 >
        </UrlCfg>
        <UrlCfg instance=113 >
        </UrlCfg>
        <UrlCfg instance=114 >
        </UrlCfg>
        <UrlCfg instance=115 >
        </UrlCfg>
        <UrlCfg instance=116 >
        </UrlCfg>
        <UrlCfg instance=117 >
        </UrlCfg>
        <UrlCfg instance=118 >
        </UrlCfg>
        <UrlCfg instance=119 >
        </UrlCfg>
        <UrlCfg instance=120 >
        </UrlCfg>
        <UrlCfg instance=121 >
        </UrlCfg>
        <UrlCfg instance=122 >
        </UrlCfg>
        <UrlCfg instance=123 >
        </UrlCfg>
        <UrlCfg instance=124 >
        </UrlCfg>
        <UrlCfg instance=125 >
        </UrlCfg>
        <UrlCfg instance=126 >
        </UrlCfg>
        <UrlCfg instance=127 >
        </UrlCfg>
        <UrlCfg instance=128 >
        </UrlCfg>
        <UrlCfg instance=129 >
        </UrlCfg>
        <UrlCfg instance=130 >
        </UrlCfg>
        <UrlCfg instance=131 >
        </UrlCfg>
        <UrlCfg instance=132 >
        </UrlCfg>
        <UrlCfg instance=133 >
        </UrlCfg>
        <UrlCfg instance=134 >
        </UrlCfg>
        <UrlCfg instance=135 >
        </UrlCfg>
        <UrlCfg instance=136 >
        </UrlCfg>
        <UrlCfg instance=137 >
        </UrlCfg>
        <UrlCfg instance=138 >
        </UrlCfg>
        <UrlCfg instance=139 >
        </UrlCfg>
        <UrlCfg instance=140 >
        </UrlCfg>
        <UrlCfg instance=141 >
        </UrlCfg>
        <UrlCfg instance=142 >
        </UrlCfg>
        <UrlCfg instance=143 >
        </UrlCfg>
        <UrlCfg instance=144 >
        </UrlCfg>
        <UrlCfg instance=145 >
        </UrlCfg>
        <UrlCfg instance=146 >
        </UrlCfg>
        <UrlCfg instance=147 >
        </UrlCfg>
        <UrlCfg instance=148 >
        </UrlCfg>
        <UrlCfg instance=149 >
        </UrlCfg>
        <UrlCfg instance=150 >
        </UrlCfg>
        <UrlCfg instance=151 >
        </UrlCfg>
        <UrlCfg instance=152 >
        </UrlCfg>
        <UrlCfg instance=153 >
        </UrlCfg>
        <UrlCfg instance=154 >
        </UrlCfg>
        <UrlCfg instance=155 >
        </UrlCfg>
        <UrlCfg instance=156 >
        </UrlCfg>
        <UrlCfg instance=157 >
        </UrlCfg>
        <UrlCfg instance=158 >
        </UrlCfg>
        <UrlCfg instance=159 >
        </UrlCfg>
        <UrlCfg instance=160 >
        </UrlCfg>
        <UrlCfg instance=161 >
        </UrlCfg>
        <UrlCfg instance=162 >
        </UrlCfg>
        <UrlCfg instance=163 >
        </UrlCfg>
        <UrlCfg instance=164 >
        </UrlCfg>
        <UrlCfg instance=165 >
        </UrlCfg>
        <UrlCfg instance=166 >
        </UrlCfg>
        <UrlCfg instance=167 >
        </UrlCfg>
        <UrlCfg instance=168 >
        </UrlCfg>
        <UrlCfg instance=169 >
        </UrlCfg>
        <UrlCfg instance=170 >
        </UrlCfg>
        <UrlCfg instance=171 >
        </UrlCfg>
        <UrlCfg instance=172 >
        </UrlCfg>
        <UrlCfg instance=173 >
        </UrlCfg>
        <UrlCfg instance=174 >
        </UrlCfg>
        <UrlCfg instance=175 >
        </UrlCfg>
        <UrlCfg instance=176 >
        </UrlCfg>
        <UrlCfg instance=177 >
        </UrlCfg>
        <UrlCfg instance=178 >
        </UrlCfg>
        <UrlCfg instance=179 >
        </UrlCfg>
        <UrlCfg instance=180 >
        </UrlCfg>
        <UrlCfg instance=181 >
        </UrlCfg>
        <UrlCfg instance=182 >
        </UrlCfg>
        <UrlCfg instance=183 >
        </UrlCfg>
        <UrlCfg instance=184 >
        </UrlCfg>
        <UrlCfg instance=185 >
        </UrlCfg>
        <UrlCfg instance=186 >
        </UrlCfg>
        <UrlCfg instance=187 >
        </UrlCfg>
        <UrlCfg instance=188 >
        </UrlCfg>
        <UrlCfg instance=189 >
        </UrlCfg>
        <UrlCfg instance=190 >
        </UrlCfg>
        <UrlCfg instance=191 >
        </UrlCfg>
        <UrlCfg instance=192 >
        </UrlCfg>
        <UrlCfg instance=193 >
        </UrlCfg>
        <UrlCfg instance=194 >
        </UrlCfg>
        <UrlCfg instance=195 >
        </UrlCfg>
        <UrlCfg instance=196 >
        </UrlCfg>
        <UrlCfg instance=197 >
        </UrlCfg>
        <UrlCfg instance=198 >
        </UrlCfg>
        <UrlCfg instance=199 >
        </UrlCfg>
        <UrlCfg instance=200 >
        </UrlCfg>
        <UrlCfg nextInstance=201 />
      </UrlList>
    </X_TP_Firewall>
    <X_TP_IPv6Tunnel>
      <Mechanism val=2 />
      <AssociatedLanIfName val=br0 />
    </X_TP_IPv6Tunnel>
    <X_TP_EWAN>
      <IfName val=eth0.2 />
    </X_TP_EWAN>
    <X_TP_IPv6Cfg>
      <DisableIPv6 val=1 />
    </X_TP_IPv6Cfg>
  </InternetGatewayDevice>
</DslCpeConfig>

