function temperature = calcTemperatureNTC(rawValue)
%calcTemperatureNTC Convert raw lsb value to a temperature value
%   Using a adjust polynom for "PERFEKTION" probe
%   See also https://github.com/WLANThermo-nano/WLANThermo_ESP32_Software/blob/1c25a95f8d76aef1b659ac1e0761c7066dbcfb95/src/temperature/TemperatureBase.cpp#L391

Rmess = 47;

Rn = 200.1;
a = 3.3561990e-03;
b = 2.4352911e-04;
c = 3.4519389e-06;


Rt = Rmess * ((4096.0 / (4096 - rawValue)) - 1);
v = log(Rt / Rn);
temperature = (1 / (a + b * v + c * v * v)) - 273.15;

end

