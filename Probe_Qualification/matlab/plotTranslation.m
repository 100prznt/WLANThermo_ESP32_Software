function plotTranslation()
%plotTranslation Plot the translation chart for the "PERFEKTION" probes

lsbValues = linspace(1,4096,4096);
tempValues = calcTemperatureNTC2(lsbValues);
tempValuesSantos = calcTemperatureNTC_Santos(lsbValues);
tempValuesET73 = calcTemperatureNTC_ET73(lsbValues);
tempValuesFantastNeu = calcTemperatureNTC_FantastNeu(lsbValues);

figure;
set(gcf, 'Position', [100, 100, 1500, 800])
hold;

title('WLANThermo temperature translations (200K types)');
xlabel('Rawvalue [LSB]');
ylabel('Temperature [°C]');

ax = gca;
ax.YGrid = 'on';
ax.YMinorGrid = 'on';
ax.XGrid = 'on';

plot(lsbValues, tempValues);
plot(lsbValues, tempValuesSantos);
plot(lsbValues, tempValuesET73);
plot(lsbValues, tempValuesFantastNeu);

legend({'PERFEKTION', 'Santos', 'ET-73', 'Fantast-Neu'}, 'Location', 'northeast');
end

