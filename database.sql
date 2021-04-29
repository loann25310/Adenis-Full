-- --------------------------------------------------------
-- Hôte:                         146.59.185.41
-- Version du serveur:           10.4.12-MariaDB - mariadb.org binary distribution
-- SE du serveur:                Win64
-- HeidiSQL Version:             11.2.0.6213
-- --------------------------------------------------------

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET NAMES utf8 */;
/*!50503 SET NAMES utf8mb4 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;


-- Listage de la structure de la base pour tanoa
CREATE DATABASE IF NOT EXISTS `tanoa` /*!40100 DEFAULT CHARACTER SET utf8 */;
USE `tanoa`;

-- Listage de la structure de la table tanoa. categories
CREATE TABLE IF NOT EXISTS `categories` (
  `id` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `name` varchar(255) COLLATE utf8mb4_unicode_ci NOT NULL,
  `order` int(11) NOT NULL DEFAULT 0,
  `created_at` timestamp NULL DEFAULT NULL,
  `updated_at` timestamp NULL DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci;

-- Les données exportées n'étaient pas sélectionnées.

-- Listage de la structure de la table tanoa. companies
CREATE TABLE IF NOT EXISTS `companies` (
  `plate` varchar(6) NOT NULL COMMENT 'Unique ID',
  `name` varchar(50) NOT NULL DEFAULT '',
  `owner` varchar(17) NOT NULL DEFAULT '' COMMENT 'PlayerUID',
  `type` varchar(20) NOT NULL DEFAULT '',
  `bank` int(50) unsigned NOT NULL DEFAULT 0 COMMENT 'Money',
  `members` text NOT NULL COMMENT 'Array',
  `INV_virtual` text NOT NULL COMMENT 'Array',
  `INV_arma` text NOT NULL COMMENT 'Array',
  `POS_x` float NOT NULL DEFAULT 0 COMMENT 'Position AGLS',
  `POS_y` float NOT NULL DEFAULT 0 COMMENT 'Position AGLS',
  `POS_z` float NOT NULL DEFAULT 0 COMMENT 'Position AGLS',
  `POS_direction` smallint(3) NOT NULL DEFAULT 0 COMMENT 'Range [0-360(Â°)]',
  `link_percentage` tinyint(2) unsigned NOT NULL DEFAULT 20 COMMENT 'Range [0-70(%)]',
  `CONSTRUCTION_built` tinyint(1) NOT NULL DEFAULT 0 COMMENT 'Boolean',
  `CONSTRUCTION_require` text NOT NULL COMMENT 'Array',
  PRIMARY KEY (`plate`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- Les données exportées n'étaient pas sélectionnées.

-- Listage de la structure de la table tanoa. companies_bank_transactions
CREATE TABLE IF NOT EXISTS `companies_bank_transactions` (
  `COMPANY_plate` varchar(6) NOT NULL,
  `TRANS_reason` varchar(25) NOT NULL,
  `TRANS_from` varchar(25) NOT NULL,
  `TRANS_date` varchar(25) NOT NULL,
  `TRANS_type` tinyint(3) unsigned NOT NULL DEFAULT 0 COMMENT 'Boolean | 0 : withdraw | 1 : deposit',
  `TRANS_value` int(10) unsigned NOT NULL DEFAULT 0 COMMENT 'Money',
  KEY `COMPANY_plate` (`COMPANY_plate`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- Les données exportées n'étaient pas sélectionnées.

-- Listage de la structure de la table tanoa. companies_stock
CREATE TABLE IF NOT EXISTS `companies_stock` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `item_name` varchar(24) NOT NULL,
  `item_amount` int(11) NOT NULL,
  `companie` varchar(32) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=3 DEFAULT CHARSET=utf8mb4;

-- Les données exportées n'étaient pas sélectionnées.

-- Listage de la structure de la table tanoa. dynamic_markers
CREATE TABLE IF NOT EXISTS `dynamic_markers` (
  `name` varchar(50) NOT NULL,
  `POS_X` float NOT NULL DEFAULT 0 COMMENT 'Position AGLS',
  `amount` int(5) NOT NULL DEFAULT 0,
  `POS_Y` float NOT NULL DEFAULT 0 COMMENT 'Position AGLS',
  `POS_Z` float NOT NULL DEFAULT 0 COMMENT 'Position AGLS',
  PRIMARY KEY (`name`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- Les données exportées n'étaient pas sélectionnées.

-- Listage de la structure de la table tanoa. factions
CREATE TABLE IF NOT EXISTS `factions` (
  `name` varchar(50) NOT NULL COMMENT 'ArmA3 side',
  `bank` int(50) unsigned NOT NULL DEFAULT 0 COMMENT 'Money',
  `history` text NOT NULL COMMENT 'Array',
  PRIMARY KEY (`name`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- Les données exportées n'étaient pas sélectionnées.

-- Listage de la structure de la table tanoa. failed_jobs
CREATE TABLE IF NOT EXISTS `failed_jobs` (
  `id` bigint(20) unsigned NOT NULL AUTO_INCREMENT,
  `uuid` varchar(255) COLLATE utf8mb4_unicode_ci NOT NULL,
  `connection` text COLLATE utf8mb4_unicode_ci NOT NULL,
  `queue` text COLLATE utf8mb4_unicode_ci NOT NULL,
  `payload` longtext COLLATE utf8mb4_unicode_ci NOT NULL,
  `exception` longtext COLLATE utf8mb4_unicode_ci NOT NULL,
  `failed_at` timestamp NOT NULL DEFAULT current_timestamp(),
  PRIMARY KEY (`id`),
  UNIQUE KEY `failed_jobs_uuid_unique` (`uuid`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci;

-- Les données exportées n'étaient pas sélectionnées.

-- Listage de la structure de la table tanoa. forums
CREATE TABLE IF NOT EXISTS `forums` (
  `id` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `category_id` int(11) NOT NULL,
  `name` varchar(255) COLLATE utf8mb4_unicode_ci NOT NULL,
  `slug` varchar(255) COLLATE utf8mb4_unicode_ci NOT NULL,
  `description` varchar(255) COLLATE utf8mb4_unicode_ci NOT NULL,
  `icon` varchar(255) COLLATE utf8mb4_unicode_ci NOT NULL,
  `order` int(11) NOT NULL DEFAULT 0,
  `moderator_see` tinyint(1) DEFAULT NULL,
  `moderator_post` tinyint(1) DEFAULT NULL,
  `support_see` tinyint(1) DEFAULT NULL,
  `support_post` tinyint(1) DEFAULT NULL,
  `cop_see` tinyint(1) DEFAULT NULL,
  `cop_post` tinyint(1) DEFAULT NULL,
  `medic_see` tinyint(1) DEFAULT NULL,
  `medic_post` tinyint(1) DEFAULT NULL,
  `gang_see` int(11) DEFAULT NULL,
  `gang_post` int(11) DEFAULT NULL,
  `created_at` timestamp NULL DEFAULT NULL,
  `updated_at` timestamp NULL DEFAULT NULL,
  PRIMARY KEY (`id`),
  KEY `forums_category_id_index` (`category_id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci;

-- Les données exportées n'étaient pas sélectionnées.

-- Listage de la structure de la table tanoa. houses
CREATE TABLE IF NOT EXISTS `houses` (
  `plate` mediumint(6) unsigned NOT NULL COMMENT 'Unique ID',
  `classname` varchar(50) NOT NULL DEFAULT '' COMMENT 'ArmA3 classname',
  `pid` varchar(17) NOT NULL DEFAULT '' COMMENT 'PlayerUID',
  `STOCK_virtual` text NOT NULL COMMENT 'Array',
  `STOCK_arma` text NOT NULL COMMENT 'Array',
  `POS_x` float NOT NULL DEFAULT 0 COMMENT 'Position ATL',
  `POS_y` float NOT NULL DEFAULT 0 COMMENT 'Position ATL',
  `POS_z` float NOT NULL DEFAULT 0 COMMENT 'Position ATL',
  `tenants` text NOT NULL COMMENT 'Array',
  PRIMARY KEY (`plate`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- Les données exportées n'étaient pas sélectionnées.

-- Listage de la structure de la table tanoa. labo
CREATE TABLE IF NOT EXISTS `labo` (
  `plate` mediumint(6) unsigned NOT NULL COMMENT 'Unique ID',
  `owner` varchar(17) NOT NULL DEFAULT '' COMMENT 'PlayerUID',
  `type` varchar(50) NOT NULL DEFAULT '',
  `POS_x` float NOT NULL DEFAULT 0 COMMENT 'Position ATL',
  `POS_y` float NOT NULL DEFAULT 0 COMMENT 'Position ATL',
  `POS_z` float NOT NULL DEFAULT 0 COMMENT 'Position ATL',
  `POS_direction` int(50) unsigned NOT NULL DEFAULT 0 COMMENT 'Range [0-360(Â°)]',
  `CONSTRUCTION_BUILT` tinyint(1) NOT NULL DEFAULT 0 COMMENT 'Boolean',
  `CONSTRUCTION_REQUIRE` text NOT NULL COMMENT 'Array',
  `INV_virtual` text NOT NULL COMMENT 'Array',
  `EXTRA_process` text NOT NULL COMMENT 'Array',
  PRIMARY KEY (`plate`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- Les données exportées n'étaient pas sélectionnées.

-- Listage de la structure de la table tanoa. land_atms
CREATE TABLE IF NOT EXISTS `land_atms` (
  `amount` int(10) unsigned NOT NULL DEFAULT 0 COMMENT 'Money',
  `type` varchar(50) NOT NULL DEFAULT '' COMMENT 'ArmA3 classname',
  `POS_X` float NOT NULL DEFAULT 0 COMMENT 'Position AGLS',
  `POS_Y` float NOT NULL DEFAULT 0 COMMENT 'Position AGLS',
  `POS_Z` float NOT NULL DEFAULT 0 COMMENT 'Position AGLS'
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- Les données exportées n'étaient pas sélectionnées.

-- Listage de la structure de la table tanoa. land_fuels
CREATE TABLE IF NOT EXISTS `land_fuels` (
  `type` varchar(50) NOT NULL,
  `POS_X` float NOT NULL DEFAULT 0 COMMENT 'Position AGLS',
  `POS_Y` float NOT NULL DEFAULT 0 COMMENT 'Position AGLS',
  `POS_Z` float NOT NULL DEFAULT 0 COMMENT 'Position AGLS',
  `fuel_Diesel` smallint(5) unsigned NOT NULL DEFAULT 0 COMMENT 'Liter',
  `fuel_SP95` smallint(5) unsigned NOT NULL DEFAULT 0 COMMENT 'Liter',
  `fuel_SP98` smallint(5) unsigned NOT NULL DEFAULT 0 COMMENT 'Liter',
  `fuel_Kerosene` smallint(5) unsigned NOT NULL DEFAULT 0 COMMENT 'Liter',
  `fuel_GPL` smallint(5) unsigned NOT NULL DEFAULT 0 COMMENT 'Liter',
  `fuel_BIO` smallint(5) unsigned NOT NULL DEFAULT 0 COMMENT 'Liter'
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- Les données exportées n'étaient pas sélectionnées.

-- Listage de la structure de la table tanoa. likes
CREATE TABLE IF NOT EXISTS `likes` (
  `id` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `user_id` int(11) NOT NULL,
  `thread_id` int(11) NOT NULL,
  `post_id` int(11) NOT NULL,
  `created_at` timestamp NULL DEFAULT NULL,
  `updated_at` timestamp NULL DEFAULT NULL,
  PRIMARY KEY (`id`),
  KEY `likes_user_id_index` (`user_id`),
  KEY `likes_thread_id_index` (`thread_id`),
  KEY `likes_post_id_index` (`post_id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci;

-- Les données exportées n'étaient pas sélectionnées.

-- Listage de la structure de la table tanoa. migrations
CREATE TABLE IF NOT EXISTS `migrations` (
  `id` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `migration` varchar(255) COLLATE utf8mb4_unicode_ci NOT NULL,
  `batch` int(11) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=35 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci;

-- Les données exportées n'étaient pas sélectionnées.

-- Listage de la structure de la table tanoa. news
CREATE TABLE IF NOT EXISTS `news` (
  `id` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `name` varchar(255) COLLATE utf8mb4_unicode_ci NOT NULL,
  `slug` varchar(255) COLLATE utf8mb4_unicode_ci NOT NULL,
  `content` longtext COLLATE utf8mb4_unicode_ci NOT NULL,
  `created_at` timestamp NULL DEFAULT NULL,
  `updated_at` timestamp NULL DEFAULT NULL,
  PRIMARY KEY (`id`),
  UNIQUE KEY `news_slug_unique` (`slug`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci;

-- Les données exportées n'étaient pas sélectionnées.

-- Listage de la structure de la table tanoa. offenses
CREATE TABLE IF NOT EXISTS `offenses` (
  `id` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `arma_id` text COLLATE utf8mb4_unicode_ci NOT NULL,
  `content` text COLLATE utf8mb4_unicode_ci NOT NULL,
  `sanction` text COLLATE utf8mb4_unicode_ci NOT NULL,
  `author` text COLLATE utf8mb4_unicode_ci NOT NULL,
  `author_id` text COLLATE utf8mb4_unicode_ci NOT NULL,
  `created_at` timestamp NULL DEFAULT NULL,
  `updated_at` timestamp NULL DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci;

-- Les données exportées n'étaient pas sélectionnées.

-- Listage de la structure de la table tanoa. pages
CREATE TABLE IF NOT EXISTS `pages` (
  `id` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `name` varchar(255) COLLATE utf8mb4_unicode_ci NOT NULL,
  `slug` varchar(255) COLLATE utf8mb4_unicode_ci NOT NULL,
  `content` longtext COLLATE utf8mb4_unicode_ci NOT NULL,
  `created_at` timestamp NULL DEFAULT NULL,
  `updated_at` timestamp NULL DEFAULT NULL,
  PRIMARY KEY (`id`),
  UNIQUE KEY `pages_slug_unique` (`slug`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci;

-- Les données exportées n'étaient pas sélectionnées.

-- Listage de la structure de la table tanoa. password_resets
CREATE TABLE IF NOT EXISTS `password_resets` (
  `email` varchar(255) COLLATE utf8mb4_unicode_ci NOT NULL,
  `token` varchar(255) COLLATE utf8mb4_unicode_ci NOT NULL,
  `created_at` timestamp NULL DEFAULT NULL,
  KEY `password_resets_email_index` (`email`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci;

-- Les données exportées n'étaient pas sélectionnées.

-- Listage de la structure de la table tanoa. paypals
CREATE TABLE IF NOT EXISTS `paypals` (
  `id` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `id_shop` varchar(255) COLLATE utf8mb4_unicode_ci NOT NULL,
  `id_user` varchar(255) COLLATE utf8mb4_unicode_ci NOT NULL,
  `id_transaction` varchar(255) COLLATE utf8mb4_unicode_ci NOT NULL,
  `price` varchar(255) COLLATE utf8mb4_unicode_ci NOT NULL,
  `created_at` timestamp NULL DEFAULT NULL,
  `updated_at` timestamp NULL DEFAULT NULL,
  `id_arma` varchar(255) COLLATE utf8mb4_unicode_ci NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=2 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci;

-- Les données exportées n'étaient pas sélectionnées.

-- Listage de la structure de la table tanoa. players
CREATE TABLE IF NOT EXISTS `players` (
  `uid` varchar(17) NOT NULL COMMENT 'PlayerUID',
  `profileName` varchar(60) NOT NULL DEFAULT '',
  `RP_firstname` varchar(30) NOT NULL DEFAULT '' COMMENT 'Roleplay information',
  `RP_lastname` varchar(30) NOT NULL DEFAULT '' COMMENT 'Roleplay information',
  `RP_birth` text NOT NULL COMMENT 'Roleplay information - Array',
  `RP_nationality` varchar(20) NOT NULL DEFAULT '' COMMENT 'Roleplay information',
  `RP_sexe` varchar(10) NOT NULL DEFAULT '' COMMENT 'Roleplay information',
  `RP_face` varchar(50) NOT NULL DEFAULT '' COMMENT 'Roleplay information',
  `DYN_markers` text NOT NULL COMMENT 'Array',
  `LEVEL_donator` enum('0','1','2','3') NOT NULL DEFAULT '0',
  `HEALTH_blood` smallint(4) unsigned NOT NULL DEFAULT 4000 COMMENT 'Range [0-4000]',
  `HEALTH_bleed` smallint(5) unsigned NOT NULL DEFAULT 0,
  `HEALTH_coma` tinyint(1) unsigned NOT NULL DEFAULT 0 COMMENT 'Boolean',
  `POS_x` float NOT NULL DEFAULT 0 COMMENT 'Position ATL',
  `POS_y` float NOT NULL DEFAULT 0 COMMENT 'Position ATL',
  `POS_z` float NOT NULL DEFAULT 0 COMMENT 'Position ATL',
  `POS_alive` tinyint(1) NOT NULL DEFAULT 0 COMMENT 'Boolean',
  `POS_direction` smallint(5) unsigned NOT NULL DEFAULT 0 COMMENT 'Range [0-360(Â°)]',
  `HEALTH_deseases` text NOT NULL COMMENT 'Array',
  `HEALTH_hunger` tinyint(3) unsigned NOT NULL DEFAULT 100 COMMENT 'Range [0-100]',
  `HEALTH_thirst` tinyint(3) unsigned NOT NULL DEFAULT 100 COMMENT 'Range [0-100]',
  `HEALTH_fatigue` double unsigned NOT NULL DEFAULT 0 COMMENT 'Range [0-1]',
  `HEALTH_alcool` smallint(5) unsigned NOT NULL DEFAULT 0,
  `HEALTH_hurt` tinyint(1) NOT NULL DEFAULT 0 COMMENT 'Boolean',
  `WEST_level` enum('0','1','2','3','4','5','6','7','8','9','10','11') NOT NULL DEFAULT '0' COMMENT 'Faction rank (see Faction config to define ranks)',
  `GUER_level` enum('0','1','2','3','4','5','6','7','8','9','10','11','12','13') NOT NULL DEFAULT '0' COMMENT 'Faction rank (see Faction config to define ranks)',
  `EAST_level` enum('0','1','2','3','4','5','6','7','8','9','10','11','12','13','14','15') NOT NULL DEFAULT '0' COMMENT 'Faction rank (see Faction config to define ranks)',
  `CIV_level` enum('0','1','2') NOT NULL DEFAULT '0' COMMENT 'Faction rank (see Faction config to define ranks)',
  `JAIL_prison` varchar(2) NOT NULL DEFAULT '',
  `JAIL_cell` varchar(50) NOT NULL DEFAULT '',
  `JAIL_time` smallint(5) unsigned NOT NULL DEFAULT 0 COMMENT 'Minuts',
  `JAIL_caution` int(50) unsigned NOT NULL DEFAULT 0 COMMENT 'Money',
  `JAIL_reason` varchar(50) NOT NULL DEFAULT '',
  `JAIL_escape` tinyint(1) NOT NULL DEFAULT 0 COMMENT 'Boolean',
  `JAIL_gear` text NOT NULL COMMENT 'Array',
  `PHONE_number` varchar(10) NOT NULL DEFAULT '',
  `PHONE_contacts` text NOT NULL COMMENT 'Array',
  `PHONE_messages` text NOT NULL COMMENT 'Array',
  `PHONE_forfait` varchar(50) NOT NULL DEFAULT '' COMMENT 'See Phone config',
  `PHONE_blacklist` text NOT NULL COMMENT 'Array',
  `PHONE_annuaire` tinyint(1) NOT NULL DEFAULT 0 COMMENT 'Boolean',
  `CIV_licenses` text NOT NULL COMMENT 'Array',
  `CIV_inventory` text NOT NULL COMMENT 'Array',
  `CIV_gear` text NOT NULL COMMENT 'Array',
  `TABLET_apps` text NOT NULL COMMENT 'Array',
  `WEST_gear` text NOT NULL COMMENT 'Array',
  `EAST_gear` text NOT NULL COMMENT 'Array',
  `WEST_inventory` text NOT NULL COMMENT 'Array',
  `WEST_licenses` text NOT NULL COMMENT 'Array',
  `EAST_inventory` text NOT NULL COMMENT 'Array',
  `EAST_licenses` text NOT NULL COMMENT 'Array',
  `GUER_gear` text NOT NULL COMMENT 'Array',
  `GUER_inventory` text NOT NULL COMMENT 'Array',
  `GUER_licenses` text NOT NULL COMMENT 'Array',
  `STATS_global_played` smallint(5) unsigned DEFAULT 0 COMMENT 'Total minuts played',
  `STATS_last_update` datetime DEFAULT current_timestamp() ON UPDATE current_timestamp() COMMENT 'Last connection',
  `STATS_first_connection` datetime DEFAULT current_timestamp() COMMENT 'First connection',
  `CIV_cash` int(50) unsigned NOT NULL DEFAULT 0 COMMENT 'Money',
  `CIV_atm` int(50) unsigned NOT NULL DEFAULT 0 COMMENT 'Money',
  `GUER_cash` int(50) unsigned NOT NULL DEFAULT 0 COMMENT 'Money',
  `GUER_atm` int(50) unsigned NOT NULL DEFAULT 0 COMMENT 'Money',
  `EAST_cash` int(50) unsigned NOT NULL DEFAULT 0 COMMENT 'Money',
  `EAST_atm` int(50) unsigned NOT NULL DEFAULT 0 COMMENT 'Money',
  `WEST_cash` int(50) unsigned NOT NULL DEFAULT 0 COMMENT 'Money',
  `WEST_atm` int(50) unsigned NOT NULL DEFAULT 0 COMMENT 'Money',
  `exp_donator` datetime DEFAULT NULL,
  PRIMARY KEY (`uid`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- Les données exportées n'étaient pas sélectionnées.

-- Listage de la structure de la table tanoa. posts
CREATE TABLE IF NOT EXISTS `posts` (
  `id` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `thread_id` int(11) NOT NULL,
  `user_id` int(11) NOT NULL,
  `content` longtext COLLATE utf8mb4_unicode_ci NOT NULL,
  `created_at` timestamp NULL DEFAULT NULL,
  `updated_at` timestamp NULL DEFAULT NULL,
  PRIMARY KEY (`id`),
  KEY `posts_thread_id_index` (`thread_id`),
  KEY `posts_user_id_index` (`user_id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci;

-- Les données exportées n'étaient pas sélectionnées.

-- Listage de la structure de la table tanoa. ranks
CREATE TABLE IF NOT EXISTS `ranks` (
  `id` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `side` text COLLATE utf8mb4_unicode_ci NOT NULL,
  `value_associated` text COLLATE utf8mb4_unicode_ci NOT NULL,
  `name` text COLLATE utf8mb4_unicode_ci NOT NULL,
  `created_at` timestamp NULL DEFAULT NULL,
  `updated_at` timestamp NULL DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci;

-- Les données exportées n'étaient pas sélectionnées.

-- Listage de la structure de la table tanoa. refunds
CREATE TABLE IF NOT EXISTS `refunds` (
  `id` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `playerid` varchar(255) COLLATE utf8mb4_unicode_ci NOT NULL,
  `name` varchar(255) COLLATE utf8mb4_unicode_ci NOT NULL,
  `amount` varchar(255) COLLATE utf8mb4_unicode_ci NOT NULL,
  `content` longtext COLLATE utf8mb4_unicode_ci NOT NULL,
  `status` varchar(255) COLLATE utf8mb4_unicode_ci NOT NULL DEFAULT '0',
  `created_at` timestamp NULL DEFAULT NULL,
  `updated_at` timestamp NULL DEFAULT NULL,
  `admin_id` varchar(255) COLLATE utf8mb4_unicode_ci NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci;

-- Les données exportées n'étaient pas sélectionnées.

-- Listage de la structure de la table tanoa. ressources
CREATE TABLE IF NOT EXISTS `ressources` (
  `name` varchar(50) NOT NULL,
  `price` mediumint(8) unsigned NOT NULL DEFAULT 0 COMMENT 'Money',
  PRIMARY KEY (`name`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- Les données exportées n'étaient pas sélectionnées.

-- Listage de la structure de la table tanoa. serverinfo
CREATE TABLE IF NOT EXISTS `serverinfo` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `year` smallint(4) unsigned NOT NULL DEFAULT 2000,
  `month` tinyint(2) unsigned NOT NULL DEFAULT 12,
  `day` tinyint(2) unsigned NOT NULL DEFAULT 1,
  `hour` tinyint(2) unsigned NOT NULL DEFAULT 12,
  `minute` tinyint(2) unsigned NOT NULL DEFAULT 0,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=2 DEFAULT CHARSET=utf8;

-- Les données exportées n'étaient pas sélectionnées.

-- Listage de la structure de la table tanoa. settings
CREATE TABLE IF NOT EXISTS `settings` (
  `id` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `action` text COLLATE utf8mb4_unicode_ci NOT NULL,
  `value_associated` text COLLATE utf8mb4_unicode_ci NOT NULL,
  `name` text COLLATE utf8mb4_unicode_ci NOT NULL,
  `created_at` timestamp NULL DEFAULT NULL,
  `updated_at` timestamp NULL DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci;

-- Les données exportées n'étaient pas sélectionnées.

-- Listage de la structure de la table tanoa. shops
CREATE TABLE IF NOT EXISTS `shops` (
  `id` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `name` varchar(255) COLLATE utf8mb4_unicode_ci NOT NULL,
  `price` varchar(255) COLLATE utf8mb4_unicode_ci NOT NULL,
  `time` varchar(255) COLLATE utf8mb4_unicode_ci NOT NULL,
  `created_at` timestamp NULL DEFAULT NULL,
  `updated_at` timestamp NULL DEFAULT NULL,
  `content` longtext COLLATE utf8mb4_unicode_ci NOT NULL,
  `image` longtext COLLATE utf8mb4_unicode_ci NOT NULL,
  `level` varchar(255) COLLATE utf8mb4_unicode_ci NOT NULL,
  `points` int(10) unsigned NOT NULL DEFAULT 1,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=5 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci;

-- Les données exportées n'étaient pas sélectionnées.

-- Listage de la structure de la table tanoa. streams
CREATE TABLE IF NOT EXISTS `streams` (
  `id` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `name` varchar(255) COLLATE utf8mb4_unicode_ci NOT NULL,
  `slug` varchar(255) COLLATE utf8mb4_unicode_ci NOT NULL,
  `content` varchar(255) COLLATE utf8mb4_unicode_ci NOT NULL,
  `created_at` timestamp NULL DEFAULT NULL,
  `updated_at` timestamp NULL DEFAULT NULL,
  `tips` text COLLATE utf8mb4_unicode_ci NOT NULL,
  PRIMARY KEY (`id`),
  UNIQUE KEY `streams_slug_unique` (`slug`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci;

-- Les données exportées n'étaient pas sélectionnées.

-- Listage de la structure de la table tanoa. supports
CREATE TABLE IF NOT EXISTS `supports` (
  `id` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `id_author` varchar(255) COLLATE utf8mb4_unicode_ci NOT NULL,
  `message` varchar(255) COLLATE utf8mb4_unicode_ci NOT NULL,
  `title` varchar(255) COLLATE utf8mb4_unicode_ci NOT NULL,
  `reply` varchar(255) COLLATE utf8mb4_unicode_ci NOT NULL,
  `associated` varchar(255) COLLATE utf8mb4_unicode_ci NOT NULL,
  `content` longtext COLLATE utf8mb4_unicode_ci NOT NULL,
  `etat` varchar(255) COLLATE utf8mb4_unicode_ci NOT NULL,
  `created_at` timestamp NULL DEFAULT NULL,
  `updated_at` timestamp NULL DEFAULT NULL,
  `id_refunds` varchar(255) COLLATE utf8mb4_unicode_ci NOT NULL,
  `admin_refunds` varchar(255) COLLATE utf8mb4_unicode_ci NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci;

-- Les données exportées n'étaient pas sélectionnées.

-- Listage de la structure de la table tanoa. taxes
CREATE TABLE IF NOT EXISTS `taxes` (
  `variable` varchar(50) NOT NULL,
  `value` double unsigned NOT NULL DEFAULT 1 COMMENT 'Factor/Coef (Range [0-1])',
  PRIMARY KEY (`variable`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- Les données exportées n'étaient pas sélectionnées.

-- Listage de la structure de la table tanoa. threads
CREATE TABLE IF NOT EXISTS `threads` (
  `id` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `forum_id` int(11) NOT NULL,
  `name` varchar(255) COLLATE utf8mb4_unicode_ci NOT NULL,
  `user_id` int(11) NOT NULL,
  `content` longtext COLLATE utf8mb4_unicode_ci NOT NULL,
  `sticky` tinyint(1) NOT NULL,
  `lock` tinyint(1) NOT NULL,
  `created_at` timestamp NULL DEFAULT NULL,
  `updated_at` timestamp NULL DEFAULT NULL,
  PRIMARY KEY (`id`),
  KEY `threads_forum_id_index` (`forum_id`),
  KEY `threads_user_id_index` (`user_id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci;

-- Les données exportées n'étaient pas sélectionnées.

-- Listage de la structure de la table tanoa. users
CREATE TABLE IF NOT EXISTS `users` (
  `id` bigint(20) unsigned NOT NULL AUTO_INCREMENT,
  `name` varchar(255) COLLATE utf8mb4_unicode_ci NOT NULL,
  `email` varchar(255) COLLATE utf8mb4_unicode_ci NOT NULL,
  `email_verified_at` timestamp NULL DEFAULT NULL,
  `password` varchar(255) COLLATE utf8mb4_unicode_ci NOT NULL,
  `remember_token` varchar(100) COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  `created_at` timestamp NULL DEFAULT NULL,
  `updated_at` timestamp NULL DEFAULT NULL,
  `firstname` varchar(255) COLLATE utf8mb4_unicode_ci NOT NULL DEFAULT '',
  `lastname` varchar(255) COLLATE utf8mb4_unicode_ci NOT NULL DEFAULT '',
  `avatar` tinyint(1) NOT NULL DEFAULT 0,
  `arma` varchar(255) COLLATE utf8mb4_unicode_ci NOT NULL DEFAULT '',
  `rank` varchar(255) COLLATE utf8mb4_unicode_ci NOT NULL DEFAULT '0',
  `ban` tinyint(1) NOT NULL DEFAULT 0,
  `totp_key` varchar(255) COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  `points` int(10) unsigned NOT NULL DEFAULT 0,
  PRIMARY KEY (`id`),
  UNIQUE KEY `users_email_unique` (`email`)
) ENGINE=InnoDB AUTO_INCREMENT=4 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci;

-- Les données exportées n'étaient pas sélectionnées.

-- Listage de la structure de la table tanoa. vehicles
CREATE TABLE IF NOT EXISTS `vehicles` (
  `plate` mediumint(6) unsigned NOT NULL COMMENT 'Unique ID',
  `classname` varchar(50) NOT NULL COMMENT 'ArmA3 classname',
  `pid` varchar(17) NOT NULL COMMENT 'PlayerUID',
  `side` varchar(10) NOT NULL DEFAULT 'CIV' COMMENT 'ArmA3 side',
  `type` varchar(50) NOT NULL DEFAULT 'CAR' COMMENT 'Subtype',
  `inventory` text NOT NULL COMMENT 'Array',
  `displayname` varchar(50) NOT NULL DEFAULT '' COMMENT 'Display name in garage. Can be changed by user',
  `HitPointsDamage` text NOT NULL COMMENT 'Array',
  `active` tinyint(1) NOT NULL DEFAULT 0 COMMENT 'Boolean | 0 : stored | 1 : out of garage',
  `assurance` tinyint(1) NOT NULL DEFAULT 0 COMMENT 'Boolean',
  `fuel` tinyint(3) unsigned NOT NULL DEFAULT 100 COMMENT 'Range [0-100(%)]',
  `fuel_type` varchar(20) NOT NULL DEFAULT '' COMMENT 'Current fuel type in tank. (only stored if not default vehicle''s fuel)',
  `paint` varchar(50) NOT NULL DEFAULT '',
  `POS_store_x` float NOT NULL DEFAULT 0 COMMENT 'Position ATL',
  `POS_store_y` float DEFAULT 0 COMMENT 'Position ATL',
  `POS_store_z` float NOT NULL DEFAULT 0 COMMENT 'Position ATL',
  `POS_x` float unsigned NOT NULL DEFAULT 0 COMMENT 'Position ATL',
  `POS_y` float NOT NULL DEFAULT 0 COMMENT 'Position ATL',
  `POS_z` float NOT NULL DEFAULT 0 COMMENT 'Position ATL',
  `POS_direction` smallint(3) unsigned NOT NULL DEFAULT 0 COMMENT 'Range [0-360(Â°)]',
  `occuped` tinyint(1) NOT NULL DEFAULT 0 COMMENT 'Boolean | 0 : free to use | 1 : cannot be accessed',
  PRIMARY KEY (`plate`),
  KEY `pid` (`pid`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- Les données exportées n'étaient pas sélectionnées.

-- Listage de la structure de la table tanoa. votes
CREATE TABLE IF NOT EXISTS `votes` (
  `id` bigint(20) unsigned NOT NULL AUTO_INCREMENT,
  `user_id` bigint(20) unsigned NOT NULL,
  `expired_at` datetime NOT NULL,
  `created_at` timestamp NULL DEFAULT NULL,
  `updated_at` timestamp NULL DEFAULT NULL,
  PRIMARY KEY (`id`),
  KEY `votes_user_id_foreign` (`user_id`),
  CONSTRAINT `votes_user_id_foreign` FOREIGN KEY (`user_id`) REFERENCES `users` (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=9 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci;

-- Les données exportées n'étaient pas sélectionnées.

/*!40101 SET SQL_MODE=IFNULL(@OLD_SQL_MODE, '') */;
/*!40014 SET FOREIGN_KEY_CHECKS=IFNULL(@OLD_FOREIGN_KEY_CHECKS, 1) */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40111 SET SQL_NOTES=IFNULL(@OLD_SQL_NOTES, 1) */;
