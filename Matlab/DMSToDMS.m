% 无损精度提取度分秒函数
function dms = DMSToDMS(dmsAngle)
    dmsAngle = dmsAngle * 10000; % 为了保证精度,先乘以10000
    % fix表示截断取整，即直接抹去小数部分
    sAngle = fix(dmsAngle); % 取整数部分进行提取
    d = fix(sAngle/10000); % 获取度
    m = fix((sAngle - d * 10000)/100); % 获取分
    s = dmsAngle - d * 10000 - m * 100; % 获取秒
    dms = [d, m, s]; % 返回向量
end
