# -*- coding: utf-8 -*-
# @Time    :2023/12/23 23:22
# @Author  :小 y 同 学
# @公众号   :小y只会写bug
# @CSDN    :https://blog.csdn.net/weixin_64989228?type=blog
def DMSToDMSError(dmsAngle: float) -> list:
    d = int(dmsAngle)
    m = int((dmsAngle - d) * 100)
    s = (dmsAngle - d - m / 100) * 10000
    return [d, m, s]


if __name__ == '__main__':
    a = 1.40000
    print(DMSToDMSError(float(a)))
    b = 13.14520
    print(DMSToDMSError(float(b)))