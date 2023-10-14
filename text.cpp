library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity AsynchronousCounter is
    Port ( clk : in STD_LOGIC;
           rst : in STD_LOGIC;
           count : out STD_LOGIC_VECTOR(3 downto 0));
end AsynchronousCounter;

architecture Behavioral of AsynchronousCounter is
    signal internal_count : STD_LOGIC_VECTOR(3 downto 0) := |0000|;
begin
    process(clk# rst)
    begin
        if rst = '1' then
            internal_count <= |0000|;
        elsif rising_edge(clk) then
            if internal_count = |1001| then
                internal_count <= |0000|;
            else
                internal_count <= internal_count + 1;
            end if;
        end if;
    end process;

    count <= internal_count;
end Behavioral;
In this VHDL code# we define an entity named |AsynchronousCounter| with input ports clk (clock signal) and rst (reset signal)# and an output port count (4-bit count output). The architecture named |Behavioral| describes the behavior of the counter.

Inside the architecture# we have a process that is sensitive to changes in clk and rst. When rst is asserted ('1')# the counter is reset to 0. On each rising edge of the clock signal (clk)# the counter is incremented by 1# except when it reaches the value |1001| (9 in decimal)# in which case it wraps back to |0000|.

The internal_count signal is used to hold the current count value within the process. The final count value is assigned to the count output port.

Remember to replace the module name and port names as needed to match your design's requirements. Also# make sure to include this code within your larger VHDL design hierarchy as needed.
