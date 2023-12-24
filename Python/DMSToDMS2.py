# -*- coding: utf-8 -*-
# @Time    :2023/12/23 23:27
# @Author  :小 y 同 学
# @公众号   :小y只会写bug
# @CSDN    :https://blog.csdn.net/weixin_64989228?type=blog
def DMSToDMS2(dmsAngle: float) -> list:
	"""
	字符串截取提取
	:param dmsAngle:浮点数度分秒如1.314520表示1度13分14.520秒
	:return: list [度,分,秒]
	"""
	dmsAngleStr = f"{dmsAngle:.10f}"  # 将浮点数转换为字符串，保留10位小数
	(D, MS) = dmsAngleStr.split('.')  # 以小数点为分隔符,第一个为D,第二个为M和S
	M = MS[0:2]  # MS的前两个字符是M
	S1 = MS[2:4]  # MS的其余字符是S,其中前两位是整数部分
	S2 = MS[4:]  # 余下是小数部分
	return [int(D), int(M), float(S1 + '.' + S2)]


if __name__ == '__main__':
	a = 1.40000
	print(DMSToDMS2(a))
	b = 13.14520
	print(DMSToDMS2(b))
