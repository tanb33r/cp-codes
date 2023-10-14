#!/bin/bash

# Step 1: Go into "/etc/ssh/sshd_config"
config_file="E:/codes/try/sshd_config"

# Step 2: Find the line that contains only "Protocol 2"
protocol_line=$(grep -n "^\s*Protocol\s*2$" "$config_file" | cut -d ':' -f 1)

if [ -n "$protocol_line" ]; then
    # Step 3: Add the two lines below the "Protocol 2" line
    sed -i "${protocol_line}a KexAlgorithms +diffie-hellman-group1-sha1\nCiphers +aes128-cbc" "$config_file"
    echo "Added KexAlgorithms and Ciphers lines."
else
    echo "Error: Could not find the 'Protocol 2' line in $config_file."
fi

chmod +x update_ssh_config.sh

sudo ./update_ssh_config.sh
