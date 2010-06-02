-- phpMyAdmin SQL Dump
-- version 3.3.3
-- http://www.phpmyadmin.net
--
-- Servidor: localhost
-- Tiempo de generación: 02-06-2010 a las 17:44:44
-- Versión del servidor: 5.1.47
-- Versión de PHP: 5.3.2

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
-- Estructura de tabla para la tabla `llamada`
--

CREATE TABLE IF NOT EXISTS `llamada` (
  `lla_id` bigint(20) unsigned NOT NULL AUTO_INCREMENT,
  `lla_hora` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `lla_origen` varchar(10) NOT NULL,
  `lla_destino` varchar(15) NOT NULL,
  `lla_codigocuenta` varchar(5) NOT NULL,
  `lla_idTipo` bigint(20) unsigned NOT NULL,
  `lla_duracion` int(4) NOT NULL,
  `lla_costo` double NOT NULL,
  PRIMARY KEY (`lla_id`),
  KEY `lla_idTipo` (`lla_idTipo`)
) ENGINE=InnoDB  DEFAULT CHARSET=utf8 AUTO_INCREMENT=9 ;

--
-- Volcar la base de datos para la tabla `llamada`
--


-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `tipo_llamada`
--

CREATE TABLE IF NOT EXISTS `tipo_llamada` (
  `tip_id` bigint(20) unsigned NOT NULL AUTO_INCREMENT,
  `tip_tarifa` int(4) NOT NULL,
  PRIMARY KEY (`tip_id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8 AUTO_INCREMENT=1 ;

--
-- Volcar la base de datos para la tabla `tipo_llamada`
--


--
-- Filtros para las tablas descargadas (dump)
--

--
-- Filtros para la tabla `llamada`
--
ALTER TABLE `llamada`
  ADD CONSTRAINT `llamada_ibfk_1` FOREIGN KEY (`lla_idTipo`) REFERENCES `tipo_llamada` (`tip_id`) ON DELETE NO ACTION ON UPDATE CASCADE;
