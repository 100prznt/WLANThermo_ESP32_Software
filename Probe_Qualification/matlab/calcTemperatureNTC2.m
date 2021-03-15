function temperature = calcTemperatureNTC2(rawValue)
%calcTemperatureNTC2 Convert raw lsb value to a temperature value
%   Using a adjust polynom for "PERFEKTION" probe
%   See also https://github.com/WLANThermo-nano/WLANThermo_ESP32_Software/blob/1c25a95f8d76aef1b659ac1e0761c7066dbcfb95/src/temperature/TemperatureBase.cpp#L391

Rmess = 47;

Rn = 200.1;
o = 3.3561990e-03;  %Offset
s1 = 2.4352911e-04; %Sens1
s2 = 3.4519389e-06; %Sens2

p = [s2, s1, o]; %Adjust polynom


Rt = Rmess * ((4096.0 ./ (4096 - rawValue)) - 1);

v = log(Rt / Rn);


temperature = (1 ./ polyval(p, v)) - 273.15;

end

