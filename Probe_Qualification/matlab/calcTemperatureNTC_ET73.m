function temperature = calcTemperatureNTC_ET73(rawValue)
%calcTemperatureNTC2 Convert raw lsb value to a temperature value
%   Using a adjust polynom for "ET-73" probe
%   See also https://github.com/WLANThermo-nano/WLANThermo_ESP32_Software/blob/1c25a95f8d76aef1b659ac1e0761c7066dbcfb95/src/temperature/TemperatureBase.cpp#L391

Rmess = 47;

Rn = 200;
o = 0.00335672;
s1 = 0.000291888;
s2 = 0.00000439054;

p = [s2, s1, o]; %Adjust polynom


Rt = Rmess * ((4096.0 ./ (4096 - rawValue)) - 1);

v = log(Rt / Rn);


temperature = (1 ./ polyval(p, v)) - 273.15;

end

