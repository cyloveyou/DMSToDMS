% 无损精度提取度分秒函数
function dms = DMSToDMS(dmsAngle)
    dmsAngle = dmsAngle * 10000;
    sAngle = fix(dmsAngle);
    d = fix(sAngle/10000);
    m = fix((sAngle - d * 10000)/100);
    s = dmsAngle - d * 10000 - m * 100;
    dms = [d, m, s];
end