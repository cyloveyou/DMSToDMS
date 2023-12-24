# -*- coding: utf-8 -*-
# @Time    :2023/12/23 23:22
# @Author  :小 y 同 学
# @公众号   :小y只会写bug
# @CSDN    :https://blog.csdn.net/weixin_64989228?type=blog
def DMSToDMSError(dmsAngle: float) -> list:
	"""
	有精度损失的提取方法
	:param dmsAngle: 浮点数度分秒如1.314520表示1度13分14.520秒
	:return: list [度,分,秒]
	"""
	d = int(dmsAngle)  # 直接取整获取度
	m = int((dmsAngle - d) * 100)  # 获取分
	s = (dmsAngle - d - m / 100) * 10000  # 获取秒
	return [d, m, s]


if __name__ == '__main__':
	# 调用函数
	a = 1.40000
	print(DMSToDMSError(float(a)))
	b = 13.14520
	print(DMSToDMSError(float(b)))
