-- phpMyAdmin SQL Dump
-- version 3.3.3
-- http://www.phpmyadmin.net
--
-- Servidor: localhost
-- Tiempo de generación: 28-05-2010 a las 12:22:01
-- Versión del servidor: 5.1.46
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
  `lla_hora` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP,
  `lla_origen` varchar(10) NOT NULL,
  `lla_destino` varchar(15) NOT NULL,
  `lla_codigocuenta` varchar(5) NOT NULL,
  `lla_tipo` varchar(2) NOT NULL,
  `lla_duracion` int(4) NOT NULL,
  `lla_costo` double NOT NULL,
  UNIQUE KEY `lla_id` (`lla_id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8 AUTO_INCREMENT=1 ;

--
-- Volcar la base de datos para la tabla `llamada`
--

