x = -10:10;
f_Cubic(x);
function[answ] = f_Cubic(x)


b = 4;
c = 10;
d = 20;
for a = -10:10
answ = a*x.^3 +	b*x.^2 +	c*x	+	d;
plot(x,answ);
hold on;
end
hold off;
end
