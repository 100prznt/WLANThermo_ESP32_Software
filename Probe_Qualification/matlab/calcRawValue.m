function rawValue = calcRawValue(temperature)
%calcRawValue Convert a temperature value back to the raw lsb value
%   Using a adjust polynom for "PERFEKTION" probe
%   See also https://github.com/WLANThermo-nano/WLANThermo_ESP32_Software/blob/1c25a95f8d76aef1b659ac1e0761c7066dbcfb95/src/temperature/TemperatureBase.cpp#L391

Rmess = 47;

Rn = 200.1;
o = 3.3561990e-03;  %Offset
s1 = 2.4352911e-04; %Sens1
s2 = 3.4519389e-06; %Sens2

p = [s2, s1, o]; %Adjust polynom


tempC = temperature + 273.15;

tempPoly = 1 / tempC;

a1 = s2;
a2 = s1;
a3 = o;


%v = (-a2 + or - sqrt(a2^2 - 4 * a1 * (a3 - y))) / (2 * a1);
v = (-a2 + sqrt(a2^2 - 4 * a1 * (a3 - tempPoly))) / (2 * a1);

vlog = exp(v);

Rt = vlog * Rn;

Rt3 = Rt / Rmess;
Rt2 = Rt3 + 1;
Rt1 = 4096 / Rt2;
rawValue = 4096 - Rt1;

end

