# -*- coding: utf-8 -*-
# @Time    :2023/12/23 23:28
# @Author  :小 y 同 学
# @公众号   :小y只会写bug
# @CSDN    :https://blog.csdn.net/weixin_64989228?type=blog
def DMSToDMS(dmsAngle: float) -> list:
	"""
	无精度损失的提取方法
	:param dmsAngle: 浮点数度分秒如1.314520表示1度13分14.520秒
	:return: list [度,分,秒]
	"""
	dmsAngle *= 10000  # 为了保证精度,先乘以10000
	sAngle = int(dmsAngle)  # 取整数部分进行提取
	d = int(sAngle / 10000)  # 获取度int
	m = int((sAngle - d * 10000) / 100)  # 获取分int
	s = dmsAngle - d * 10000 - m * 100  # 获取秒 float
	return [d, m, s]


if __name__ == '__main__':
	a = 1.40000
	print(DMSToDMS(float(a)))
	b = 13.14520
	print(DMSToDMS(float(b)))
