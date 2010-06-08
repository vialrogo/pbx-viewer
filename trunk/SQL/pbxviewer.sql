-- phpMyAdmin SQL Dump
-- version 3.3.3
-- http://www.phpmyadmin.net
--
-- Host: localhost
-- Generation Time: Jun 08, 2010 at 11:47 AM
-- Server version: 5.1.47
-- PHP Version: 5.3.2

SET SQL_MODE="NO_AUTO_VALUE_ON_ZERO";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;

--
-- Database: `pbxviewer`
--

-- --------------------------------------------------------

--
-- Table structure for table `concepto`
--

CREATE TABLE IF NOT EXISTS `concepto` (
  `con_id` bigint(20) unsigned NOT NULL AUTO_INCREMENT,
  `con_nombre` varchar(20) NOT NULL,
  UNIQUE KEY `con_id` (`con_id`)
) ENGINE=InnoDB  DEFAULT CHARSET=utf8 AUTO_INCREMENT=43 ;

--
-- Dumping data for table `concepto`
--

INSERT INTO `concepto` (`con_id`, `con_nombre`) VALUES
(1, 'ano_inicio'),
(2, 'ano_largo'),
(3, 'mes_inicio'),
(4, 'mes_largo'),
(5, 'dia_inicio'),
(6, 'dia_largo'),
(7, 'hora_inicio'),
(8, 'hora_largo'),
(9, 'minutos_inicio'),
(10, 'minutos_largo'),
(11, 'segundos_inicio'),
(12, 'segundos_largo'),
(13, 'duracionS_inicio'),
(14, 'duracionS_largo'),
(15, 'origen_inicio'),
(16, 'origen_largo'),
(17, 'destino_inicio'),
(18, 'destino_largo'),
(19, 'codigocuenta_inicio'),
(20, 'codigocuenta_largo'),
(41, 'longitud_lla_interna'),
(42, 'longitud_trama');

-- --------------------------------------------------------

--
-- Table structure for table `configuraciones`
--

CREATE TABLE IF NOT EXISTS `configuraciones` (
  `con_pbx_id` bigint(20) unsigned NOT NULL,
  `con_con_id` bigint(20) unsigned NOT NULL,
  `con_con_valor` int(10) NOT NULL,
  KEY `con_pbx_id` (`con_pbx_id`),
  KEY `con_con_id` (`con_con_id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

--
-- Dumping data for table `configuraciones`
--

INSERT INTO `configuraciones` (`con_pbx_id`, `con_con_id`, `con_con_valor`) VALUES
(1, 7, 0),
(1, 8, 2),
(1, 9, 2),
(1, 10, 2),
(1, 13, 4),
(1, 14, 4),
(1, 15, 32),
(1, 16, 10),
(1, 17, 17),
(1, 18, 15),
(1, 19, 59),
(1, 20, 5),
(1, 41, 4),
(1, 42, 100);

-- --------------------------------------------------------

--
-- Table structure for table `llamada`
--

CREATE TABLE IF NOT EXISTS `llamada` (
  `lla_id` bigint(20) unsigned NOT NULL AUTO_INCREMENT,
  `lla_hora` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `lla_origen` varchar(10) NOT NULL,
  `lla_destino` varchar(15) NOT NULL,
  `lla_codigocuenta` varchar(5) DEFAULT NULL,
  `lla_idTipo` bigint(20) unsigned NOT NULL,
  `lla_duracion` int(4) NOT NULL,
  PRIMARY KEY (`lla_id`),
  KEY `lla_idTipo` (`lla_idTipo`)
) ENGINE=InnoDB  DEFAULT CHARSET=utf8 AUTO_INCREMENT=136 ;

--
-- Dumping data for table `llamada`
--

INSERT INTO `llamada` (`lla_id`, `lla_hora`, `lla_origen`, `lla_destino`, `lla_codigocuenta`, `lla_idTipo`, `lla_duracion`) VALUES
(69, '0000-00-00 00:00:00', '1261', '0515414030', '34457', 4, 1),
(70, '2010-06-06 15:04:00', '1261', '0515414030', '34457', 4, 1),
(71, '2010-06-06 15:04:00', '1261', '0515414030', '34457', 4, 1),
(72, '2010-06-06 15:04:00', '1261', '0515414030', '34457', 4, 1),
(73, '2010-06-06 15:04:00', '1261', '0515414030', '34457', 4, 1),
(74, '2010-06-06 15:04:00', '1261', '0515414030', '34457', 4, 1),
(75, '2010-06-06 15:04:00', '1261', '0515414030', '34457', 4, 1),
(76, '2010-06-06 15:04:00', '1261', '0515414030', '34457', 4, 1),
(77, '2010-06-06 15:04:00', '1261', '0515414030', '34457', 4, 1),
(78, '2010-06-06 15:04:00', '1261', '0515414030', '34457', 4, 1),
(79, '2010-06-06 14:59:00', '926592296', '1833', '', 1, 1),
(80, '2010-06-06 14:59:00', '926592296', '1833', '', 1, 1),
(81, '2010-06-06 14:59:00', '926592296', '1833', '', 1, 1),
(82, '2010-06-06 14:59:00', '926592296', '1833', NULL, 1, 1),
(83, '2010-06-06 14:59:00', '926592296', '1833', NULL, 1, 1),
(84, '2010-06-06 14:59:00', '926592296', '1833', NULL, 1, 1),
(85, '2010-06-07 14:59:35', '926592296', '1833', NULL, 1, 1),
(86, '2010-06-07 14:59:55', '926592296', '1833', NULL, 1, 1),
(87, '2010-06-07 14:59:12', '926592296', '1833', NULL, 1, 1),
(88, '2010-06-07 14:59:23', '926592296', '1833', NULL, 1, 1),
(89, '2010-06-07 14:59:37', '926592296', '1833', NULL, 1, 1),
(90, '2010-06-07 14:59:44', '926592296', '1833', NULL, 1, 1),
(91, '2010-06-07 14:59:46', '926592296', '1833', NULL, 1, 1),
(92, '2010-06-07 14:59:20', '926592296', '1833', NULL, 1, 1),
(93, '2010-06-07 14:59:37', '926592296', '1833', NULL, 1, 1),
(94, '2010-06-07 14:59:49', '926592296', '1833', NULL, 1, 1),
(95, '2010-06-07 14:59:10', '926592296', '1833', NULL, 1, 1),
(96, '2010-06-07 14:59:24', '926592296', '1833', NULL, 1, 1),
(97, '2010-06-07 14:59:48', '926592296', '1833', NULL, 1, 1),
(98, '2010-06-07 14:59:21', '926592296', '1833', NULL, 1, 1),
(99, '2010-06-07 14:59:32', '926592296', '1833', NULL, 1, 1),
(100, '2010-06-07 01:45:32', '3 92659229', '183', NULL, 5, 151),
(101, '2010-06-07 01:45:32', '3 92659229', '183', NULL, 5, 151),
(102, '2010-06-07 14:59:17', '926592296', '1833', NULL, 1, 1),
(103, '2010-06-07 14:59:22', '926592296', '1833', NULL, 1, 1),
(104, '2010-06-07 14:59:33', '926592296', '1833', NULL, 1, 1),
(105, '2010-06-07 01:45:33', '3 92659229', '183', NULL, 5, 151),
(106, '2010-06-07 01:45:33', '3 92659229', '183', NULL, 5, 151),
(107, '2010-06-07 01:45:33', '3 92659229', '183', NULL, 5, 151),
(108, '2010-06-07 14:59:09', '926592296', '1833', NULL, 1, 1),
(109, '2010-06-07 01:45:09', '3 92659229', '183', NULL, 5, 151),
(110, '2010-06-07 01:45:09', '3 92659229', '183', NULL, 5, 151),
(111, '2010-06-07 01:45:10', '3 92659229', '183', NULL, 5, 151),
(112, '2010-06-07 01:45:10', '3 92659229', '183', NULL, 5, 151),
(113, '2010-06-07 01:45:10', '3 92659229', '183', NULL, 5, 151),
(114, '2010-06-07 01:45:10', '3 92659229', '183', NULL, 5, 151),
(115, '2010-06-07 01:45:10', '3 92659229', '183', NULL, 5, 151),
(116, '2010-06-07 01:45:10', '3 92659229', '183', NULL, 5, 151),
(117, '2010-06-07 14:59:45', '926592296', '1833', NULL, 1, 1),
(118, '2010-06-07 14:59:56', '926592296', '1833', NULL, 1, 1),
(119, '2010-06-07 14:59:01', '926592296', '1833', NULL, 1, 1),
(120, '2010-06-07 01:45:01', '3 92659229', '183', NULL, 5, 151),
(121, '2010-06-07 14:59:39', '926592296', '1833', NULL, 1, 1),
(122, '2010-06-07 14:59:44', '926592296', '1833', NULL, 1, 1),
(123, '2010-06-07 01:45:44', '3 92659229', '183', NULL, 5, 151),
(124, '2010-06-07 14:59:51', '926592296', '1833', NULL, 1, 1),
(125, '2010-06-07 01:45:51', '3 92659229', '183', NULL, 5, 151),
(126, '2010-06-07 01:45:51', '3 92659229', '183', NULL, 5, 151),
(127, '2010-06-07 14:59:18', '926592296', '1833', NULL, 1, 1),
(128, '2010-06-07 01:45:18', '3 92659229', '183', NULL, 5, 151),
(129, '2010-06-07 14:59:25', '926592296', '1833', NULL, 1, 1),
(130, '2010-06-07 01:45:25', '3 92659229', '183', NULL, 5, 151),
(131, '2010-06-07 14:59:37', '926592296', '1833', NULL, 1, 1),
(132, '2010-06-07 14:59:10', '926592296', '1833', NULL, 1, 1),
(133, '2010-06-07 14:59:19', '926592296', '1833', NULL, 1, 1),
(134, '2010-06-07 14:59:19', '926592296', '1833', NULL, 1, 1),
(135, '2010-06-07 14:59:19', '926592296', '1833', NULL, 1, 1);

-- --------------------------------------------------------

--
-- Table structure for table `pbx`
--

CREATE TABLE IF NOT EXISTS `pbx` (
  `pbx_id` bigint(20) unsigned NOT NULL AUTO_INCREMENT,
  `pbx_nombre` varchar(20) NOT NULL,
  UNIQUE KEY `pbx_id` (`pbx_id`)
) ENGINE=InnoDB  DEFAULT CHARSET=utf8 AUTO_INCREMENT=3 ;

--
-- Dumping data for table `pbx`
--

INSERT INTO `pbx` (`pbx_id`, `pbx_nombre`) VALUES
(1, 'PBX_prueba'),
(2, 'otroPBX');

-- --------------------------------------------------------

--
-- Table structure for table `tipo_llamada`
--

CREATE TABLE IF NOT EXISTS `tipo_llamada` (
  `tip_id` bigint(20) unsigned NOT NULL AUTO_INCREMENT,
  `tip_tarifa` double NOT NULL,
  `tip_Nombre` varchar(15) NOT NULL,
  PRIMARY KEY (`tip_id`)
) ENGINE=InnoDB  DEFAULT CHARSET=utf8 AUTO_INCREMENT=6 ;

--
-- Dumping data for table `tipo_llamada`
--

INSERT INTO `tipo_llamada` (`tip_id`, `tip_tarifa`, `tip_Nombre`) VALUES
(1, 0, 'Interna'),
(2, 1000, 'Internacional'),
(3, 300, 'Celular'),
(4, 200, 'Nacional'),
(5, 100, 'Local');

--
-- Constraints for dumped tables
--

--
-- Constraints for table `configuraciones`
--
ALTER TABLE `configuraciones`
  ADD CONSTRAINT `configuraciones_ibfk_1` FOREIGN KEY (`con_pbx_id`) REFERENCES `pbx` (`pbx_id`) ON DELETE CASCADE ON UPDATE CASCADE,
  ADD CONSTRAINT `configuraciones_ibfk_2` FOREIGN KEY (`con_con_id`) REFERENCES `concepto` (`con_id`) ON DELETE CASCADE ON UPDATE CASCADE;

--
-- Constraints for table `llamada`
--
ALTER TABLE `llamada`
  ADD CONSTRAINT `llamada_ibfk_1` FOREIGN KEY (`lla_idTipo`) REFERENCES `tipo_llamada` (`tip_id`) ON DELETE NO ACTION ON UPDATE CASCADE;
