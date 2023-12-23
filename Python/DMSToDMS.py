# -*- coding: utf-8 -*-
# @Time    :2023/12/23 23:28
# @Author  :小 y 同 学
# @公众号   :小y只会写bug
# @CSDN    :https://blog.csdn.net/weixin_64989228?type=blog
def DMSToDMS(dmsAngle: float) -> list:
    dmsAngle *= 10000
    sAngle = int(dmsAngle)
    d = int(sAngle / 10000)
    m = int((sAngle - d * 10000) / 100)
    s = dmsAngle - d * 10000 - m * 100
    return [d, m, s]


if __name__ == '__main__':
    a = 1.40000
    print(DMSToDMS(float(a)))
    b = 13.14520
    print(DMSToDMS(float(b)))