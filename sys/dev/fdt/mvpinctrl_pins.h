/* Public Domain */


struct mvpinctrl_pin armada_38x_pins[] = {
	MPP(0, "gpio", 0),
	MPP(0, "ua0", 1),
	MPP(1, "gpio", 0),
	MPP(1, "ua0", 1),
	MPP(2, "gpio", 0),
	MPP(2, "i2c0", 1),
	MPP(3, "gpio", 0),
	MPP(3, "i2c0", 1),
	MPP(4, "gpio", 0),
	MPP(4, "ge", 1),
	MPP(4, "ua1", 2),
	MPP(4, "ua0", 3),
	MPP(5, "gpio", 0),
	MPP(5, "ge", 1),
	MPP(5, "ua1", 2),
	MPP(5, "ua0", 3),
	MPP(6, "gpio", 0),
	MPP(6, "ge0", 1),
	MPP(6, "ge0", 2),
	MPP(6, "dev", 5),
	MPP(7, "gpio", 0),
	MPP(7, "ge0", 1),
	MPP(7, "dev", 5),
	MPP(8, "gpio", 0),
	MPP(8, "ge0", 1),
	MPP(8, "dev", 5),
	MPP(9, "gpio", 0),
	MPP(9, "ge0", 1),
	MPP(9, "dev", 5),
	MPP(10, "gpio", 0),
	MPP(10, "ge0", 1),
	MPP(10, "dev", 5),
	MPP(11, "gpio", 0),
	MPP(11, "ge0", 1),
	MPP(11, "dev", 5),
	MPP(12, "gpio", 0),
	MPP(12, "ge0", 1),
	MPP(12, "pcie0", 2),
	MPP(12, "spi0", 4),
	MPP(12, "dev", 5),
	MPP(12, "pcie3", 6),
	MPP(13, "gpio", 0),
	MPP(13, "ge0", 1),
	MPP(13, "pcie0", 2),
	MPP(13, "pcie1", 3),
	MPP(13, "spi0", 4),
	MPP(13, "dev", 5),
	MPP(13, "pcie2", 6),
	MPP(14, "gpio", 0),
	MPP(14, "ge0", 1),
	MPP(14, "ptp", 2),
	MPP(14, "dram", 3),
	MPP(14, "spi0", 4),
	MPP(14, "dev", 5),
	MPP(14, "pcie3", 6),
	MPP(15, "gpio", 0),
	MPP(15, "ge0", 1),
	MPP(15, "ge", 2),
	MPP(15, "pcie0", 3),
	MPP(15, "spi0", 4),
	MPP(16, "gpio", 0),
	MPP(16, "ge0", 1),
	MPP(16, "ge", 2),
	MPP(16, "dram", 3),
	MPP(16, "spi0", 4),
	MPP(16, "pcie0", 5),
	MPP(16, "pcie1", 6),
	MPP(17, "gpio", 0),
	MPP(17, "ge0", 1),
	MPP(17, "ptp", 2),
	MPP(17, "ua1", 3),
	MPP(17, "spi0", 4),
	MPP(17, "sata1", 5),
	MPP(17, "sata0", 6),
	MPP(18, "gpio", 0),
	MPP(18, "ge0", 1),
	MPP(18, "ptp", 2),
	MPP(18, "ua1", 3),
	MPP(18, "spi0", 4),
	MPP(19, "gpio", 0),
	MPP(19, "ge0", 1),
	MPP(19, "ptp", 2),
	MPP(19, "ge0", 3),
	MPP(19, "sata1", 4),
	MPP(19, "ua0", 5),
	MPP(19, "ua1", 6),
	MPP(20, "gpio", 0),
	MPP(20, "ge0", 1),
	MPP(20, "ptp", 2),
	MPP(20, "sata0", 4),
	MPP(20, "ua0", 5),
	MPP(20, "ua1", 6),
	MPP(21, "gpio", 0),
	MPP(21, "spi0", 1),
	MPP(21, "ge1", 2),
	MPP(21, "sata0", 3),
	MPP(21, "sd0", 4),
	MPP(21, "dev", 5),
	MPP(21, "sata1", 6),
	MPP(22, "gpio", 0),
	MPP(22, "spi0", 1),
	MPP(22, "dev", 5),
	MPP(23, "gpio", 0),
	MPP(23, "spi0", 1),
	MPP(23, "dev", 5),
	MPP(24, "gpio", 0),
	MPP(24, "spi0", 1),
	MPP(24, "ua0", 2),
	MPP(24, "ua1", 3),
	MPP(24, "sd0", 4),
	MPP(24, "dev", 5),
	MPP(25, "gpio", 0),
	MPP(25, "spi0", 1),
	MPP(25, "ua0", 2),
	MPP(25, "ua1", 3),
	MPP(25, "sd0", 4),
	MPP(25, "dev", 5),
	MPP(26, "gpio", 0),
	MPP(26, "spi0", 1),
	MPP(26, "i2c1", 3),
	MPP(26, "sd0", 4),
	MPP(26, "dev", 5),
	MPP(27, "gpio", 0),
	MPP(27, "spi0", 1),
	MPP(27, "ge1", 2),
	MPP(27, "i2c1", 3),
	MPP(27, "sd0", 4),
	MPP(27, "dev", 5),
	MPP(28, "gpio", 0),
	MPP(28, "ge1", 2),
	MPP(28, "sd0", 4),
	MPP(28, "dev", 5),
	MPP(29, "gpio", 0),
	MPP(29, "ge1", 2),
	MPP(29, "dev", 5),
	MPP(30, "gpio", 0),
	MPP(30, "ge1", 2),
	MPP(30, "dev", 5),
	MPP(31, "gpio", 0),
	MPP(31, "ge1", 2),
	MPP(31, "dev", 5),
	MPP(32, "gpio", 0),
	MPP(32, "ge1", 2),
	MPP(32, "dev", 5),
	MPP(33, "gpio", 0),
	MPP(33, "dram", 1),
	MPP(33, "dev", 5),
	MPP(34, "gpio", 0),
	MPP(34, "dev", 5),
	MPP(35, "gpio", 0),
	MPP(35, "ref", 1),
	MPP(35, "dev", 5),
	MPP(36, "gpio", 0),
	MPP(36, "ptp", 1),
	MPP(36, "dev", 5),
	MPP(37, "gpio", 0),
	MPP(37, "ptp", 1),
	MPP(37, "ge1", 2),
	MPP(37, "sd0", 4),
	MPP(37, "dev", 5),
	MPP(38, "gpio", 0),
	MPP(38, "ptp", 1),
	MPP(38, "ge1", 2),
	MPP(38, "ref", 3),
	MPP(38, "sd0", 4),
	MPP(38, "dev", 5),
	MPP(39, "gpio", 0),
	MPP(39, "i2c1", 1),
	MPP(39, "ge1", 2),
	MPP(39, "ua0", 3),
	MPP(39, "sd0", 4),
	MPP(39, "dev", 5),
	MPP(40, "gpio", 0),
	MPP(40, "i2c1", 1),
	MPP(40, "ge1", 2),
	MPP(40, "ua0", 3),
	MPP(40, "sd0", 4),
	MPP(40, "dev", 5),
	MPP(41, "gpio", 0),
	MPP(41, "ua1", 1),
	MPP(41, "ge1", 2),
	MPP(41, "ua0", 3),
	MPP(41, "spi1", 4),
	MPP(41, "dev", 5),
	MPP(41, "nand", 6),
	MPP(42, "gpio", 0),
	MPP(42, "ua1", 1),
	MPP(42, "ua0", 3),
	MPP(42, "dev", 5),
	MPP(43, "gpio", 0),
	MPP(43, "pcie0", 1),
	MPP(43, "dram", 2),
	MPP(43, "dram", 3),
	MPP(43, "spi1", 4),
	MPP(43, "dev", 5),
	MPP(43, "nand", 6),
	MPP(44, "gpio", 0),
	MPP(44, "sata0", 1),
	MPP(44, "sata1", 2),
	MPP(44, "sata2", 3),
	MPP(44, "sata3", 4),
	MPP(45, "gpio", 0),
	MPP(45, "ref", 1),
	MPP(45, "pcie0", 2),
	MPP(45, "ua1", 6),
	MPP(46, "gpio", 0),
	MPP(46, "ref", 1),
	MPP(46, "pcie0", 2),
	MPP(46, "ua1", 6),
	MPP(47, "gpio", 0),
	MPP(47, "sata0", 1),
	MPP(47, "sata1", 2),
	MPP(47, "sata2", 3),
	MPP(47, "sata3", 5),
	MPP(48, "gpio", 0),
	MPP(48, "sata0", 1),
	MPP(48, "dram", 2),
	MPP(48, "tdm", 3),
	MPP(48, "audio", 4),
	MPP(48, "sd0", 5),
	MPP(48, "pcie0", 6),
	MPP(49, "gpio", 0),
	MPP(49, "sata2", 1),
	MPP(49, "sata3", 2),
	MPP(49, "tdm", 3),
	MPP(49, "audio", 4),
	MPP(49, "sd0", 5),
	MPP(49, "pcie1", 6),
	MPP(50, "gpio", 0),
	MPP(50, "pcie0", 1),
	MPP(50, "tdm", 3),
	MPP(50, "audio", 4),
	MPP(50, "sd0", 5),
	MPP(51, "gpio", 0),
	MPP(51, "tdm", 3),
	MPP(51, "audio", 4),
	MPP(51, "dram", 5),
	MPP(51, "ptp", 6),
	MPP(52, "gpio", 0),
	MPP(52, "pcie0", 1),
	MPP(52, "tdm", 3),
	MPP(52, "audio", 4),
	MPP(52, "sd0", 5),
	MPP(52, "ptp", 6),
	MPP(53, "gpio", 0),
	MPP(53, "sata1", 1),
	MPP(53, "sata0", 2),
	MPP(53, "tdm", 3),
	MPP(53, "audio", 4),
	MPP(53, "sd0", 5),
	MPP(53, "ptp", 6),
	MPP(54, "gpio", 0),
	MPP(54, "sata0", 1),
	MPP(54, "sata1", 2),
	MPP(54, "pcie0", 3),
	MPP(54, "ge0", 4),
	MPP(54, "sd0", 5),
	MPP(55, "gpio", 0),
	MPP(55, "ua1", 1),
	MPP(55, "ge", 2),
	MPP(55, "pcie1", 3),
	MPP(55, "spi1", 4),
	MPP(55, "sd0", 5),
	MPP(55, "ua1", 6),
	MPP(56, "gpio", 0),
	MPP(56, "ua1", 1),
	MPP(56, "ge", 2),
	MPP(56, "dram", 3),
	MPP(56, "spi1", 4),
	MPP(56, "ua1", 6),
	MPP(57, "gpio", 0),
	MPP(57, "spi1", 4),
	MPP(57, "sd0", 5),
	MPP(57, "ua1", 6),
	MPP(58, "gpio", 0),
	MPP(58, "pcie1", 1),
	MPP(58, "i2c1", 2),
	MPP(58, "pcie2", 3),
	MPP(58, "spi1", 4),
	MPP(58, "sd0", 5),
	MPP(58, "ua1", 6),
	MPP(59, "gpio", 0),
	MPP(59, "pcie0", 1),
	MPP(59, "i2c1", 2),
	MPP(59, "spi1", 4),
	MPP(59, "sd0", 5),
};
