function rawValue = calcRawValue2(temperature)
%calcRawValue Convert a temperature value back to the raw lsb value
%   Using a adjust polynom for "PERFEKTION" probe
%   See also https://github.com/WLANThermo-nano/WLANThermo_ESP32_Software/blob/1c25a95f8d76aef1b659ac1e0761c7066dbcfb95/src/temperature/TemperatureBase.cpp#L391

Rmess = 47;

Rn = 200.1;
o = 3.3561990e-03;  %Offset
s1 = 2.4352911e-04; %Sens1
s2 = 3.4519389e-06; %Sens2

tempY = 1 ./ (temperature + 273.15);
v = (-s1 + sqrt(s1^2 - 4 * s2 * (o - tempY))) / (2 * s2);
Rt = exp(v) * Rn;

rawValue = round(4096 - 4096 ./ (Rt / Rmess + 1));

end

