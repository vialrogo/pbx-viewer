-- phpMyAdmin SQL Dump
-- version 3.3.5.1
-- http://www.phpmyadmin.net
--
-- Servidor: localhost
-- Tiempo de generación: 24-08-2010 a las 21:09:10
-- Versión del servidor: 5.1.47
-- Versión de PHP: 5.3.3

SET SQL_MODE="NO_AUTO_VALUE_ON_ZERO";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;

--
-- Base de datos: `pbxviewer`
--

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `concepto`
--

CREATE TABLE IF NOT EXISTS `concepto` (
  `con_id` bigint(20) unsigned NOT NULL AUTO_INCREMENT,
  `con_nombre` varchar(20) NOT NULL,
  UNIQUE KEY `con_id` (`con_id`)
) ENGINE=InnoDB  DEFAULT CHARSET=utf8 AUTO_INCREMENT=43 ;

--
-- Volcar la base de datos para la tabla `concepto`
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
-- Estructura de tabla para la tabla `configuraciones`
--

CREATE TABLE IF NOT EXISTS `configuraciones` (
  `con_pbx_id` bigint(20) unsigned NOT NULL,
  `con_con_id` bigint(20) unsigned NOT NULL,
  `con_con_valor` int(10) NOT NULL,
  KEY `con_pbx_id` (`con_pbx_id`),
  KEY `con_con_id` (`con_con_id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

--
-- Volcar la base de datos para la tabla `configuraciones`
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
-- Estructura de tabla para la tabla `llamada`
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
) ENGINE=InnoDB  DEFAULT CHARSET=utf8 AUTO_INCREMENT=202 ;

--
-- Volcar la base de datos para la tabla `llamada`
--

INSERT INTO `llamada` (`lla_id`, `lla_hora`, `lla_origen`, `lla_destino`, `lla_codigocuenta`, `lla_idTipo`, `lla_duracion`) VALUES
(180, '2010-08-24 14:59:07', '926592296', '1833', NULL, 1, 1),
(181, '2010-08-24 14:59:07', '924307747', '1180', NULL, 1, 1),
(182, '2010-08-24 15:00:07', '923396917', '1176', NULL, 1, 1),
(183, '2010-08-24 15:00:07', '1033', '6663266', NULL, 5, 1),
(184, '2010-08-24 15:00:07', '1607', '6906000', NULL, 5, 1),
(185, '2010-08-24 15:00:08', '928861600', '1520', NULL, 1, 7),
(186, '2010-08-24 15:00:08', '926535240', '1176', NULL, 1, 1),
(187, '2010-08-24 15:00:08', '924393229', '1283', NULL, 1, 1),
(188, '2010-08-24 15:00:08', '923398444', '1332', NULL, 1, 1),
(189, '2010-08-24 15:00:08', '916224097', '1000', NULL, 1, 1),
(190, '2010-08-24 15:00:08', '923166010', '1101', NULL, 1, 2),
(191, '2010-08-24 15:00:08', '912624512', '1157', NULL, 1, 1),
(192, '2010-08-24 15:00:08', '923396917', '1176', NULL, 1, 0),
(193, '2010-08-24 15:00:08', '928939162', '1236', NULL, 1, 1),
(194, '2010-08-24 15:00:08', '925504137', '1153', NULL, 1, 0),
(195, '2010-08-24 15:00:08', '924411674', '1209', NULL, 1, 1),
(196, '2010-08-24 15:01:08', '923367700', '1293', NULL, 1, 1),
(197, '2010-08-24 15:01:08', '923396917', '1176', NULL, 1, 0),
(198, '2010-08-24 15:01:08', '1027', '4465104', NULL, 5, 1),
(199, '2010-08-24 15:01:08', '1188', '6642866', NULL, 5, 1),
(200, '2010-08-24 15:01:08', '924441663', '1554', NULL, 1, 1),
(201, '2010-08-24 15:01:08', '924334861', '1607', NULL, 1, 0);

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `pbx`
--

CREATE TABLE IF NOT EXISTS `pbx` (
  `pbx_id` bigint(20) unsigned NOT NULL AUTO_INCREMENT,
  `pbx_nombre` varchar(20) NOT NULL,
  UNIQUE KEY `pbx_id` (`pbx_id`)
) ENGINE=InnoDB  DEFAULT CHARSET=utf8 AUTO_INCREMENT=2 ;

--
-- Volcar la base de datos para la tabla `pbx`
--

INSERT INTO `pbx` (`pbx_id`, `pbx_nombre`) VALUES
(1, 'PBX_prueba');

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `tipo_llamada`
--

CREATE TABLE IF NOT EXISTS `tipo_llamada` (
  `tip_id` bigint(20) unsigned NOT NULL AUTO_INCREMENT,
  `tip_tarifa` double NOT NULL,
  `tip_Nombre` varchar(15) NOT NULL,
  PRIMARY KEY (`tip_id`)
) ENGINE=InnoDB  DEFAULT CHARSET=utf8 AUTO_INCREMENT=6 ;

--
-- Volcar la base de datos para la tabla `tipo_llamada`
--

INSERT INTO `tipo_llamada` (`tip_id`, `tip_tarifa`, `tip_Nombre`) VALUES
(1, 0, 'Interna'),
(2, 1000, 'Internacional'),
(3, 300, 'Celular'),
(4, 200, 'Nacional'),
(5, 100, 'Local');

--
-- Filtros para las tablas descargadas (dump)
--

--
-- Filtros para la tabla `configuraciones`
--
ALTER TABLE `configuraciones`
  ADD CONSTRAINT `configuraciones_ibfk_1` FOREIGN KEY (`con_pbx_id`) REFERENCES `pbx` (`pbx_id`) ON DELETE CASCADE ON UPDATE CASCADE,
  ADD CONSTRAINT `configuraciones_ibfk_2` FOREIGN KEY (`con_con_id`) REFERENCES `concepto` (`con_id`) ON DELETE CASCADE ON UPDATE CASCADE;

--
-- Filtros para la tabla `llamada`
--
ALTER TABLE `llamada`
  ADD CONSTRAINT `llamada_ibfk_1` FOREIGN KEY (`lla_idTipo`) REFERENCES `tipo_llamada` (`tip_id`) ON DELETE NO ACTION ON UPDATE CASCADE;
