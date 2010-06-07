-- phpMyAdmin SQL Dump
-- version 3.3.3
-- http://www.phpmyadmin.net
--
-- Servidor: localhost
-- Tiempo de generación: 07-06-2010 a las 13:42:23
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

--
-- Filtros para las tablas descargadas (dump)
--

--
-- Filtros para la tabla `configuraciones`
--
ALTER TABLE `configuraciones`
  ADD CONSTRAINT `configuraciones_ibfk_1` FOREIGN KEY (`con_pbx_id`) REFERENCES `pbx` (`pbx_id`) ON DELETE CASCADE ON UPDATE CASCADE,
  ADD CONSTRAINT `configuraciones_ibfk_2` FOREIGN KEY (`con_con_id`) REFERENCES `concepto` (`con_id`) ON DELETE CASCADE ON UPDATE CASCADE;
