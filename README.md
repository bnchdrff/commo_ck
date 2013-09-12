Commotion Construction Kit - Features
=====================================

Provides a content type and other things to use in building the CK section of commotionwireless.net.

Install
-------

* Pull in recent changes to [the theme](https://github.com/bnchdrff/commo_theme/)
* Update menu_block to 7.x-2.x-dev and apply [this patch](https://drupal.org/files/issues/menu_block-active-parent-406568-9.patch) and [this patch](https://drupal.org/files/menu_block-ctools-693302-113.patch)
* Update special_menu_items to 7.x-2.x-dev and apply [this patch](https://drupal.org/files/special_menu_items-features_compat-1355088-9.patch)
* Clear cache and run db updates (`drush cc all; drush updb`)
* Enable this module (`drush en commo_ck`)

Notes
-----

`commo_ck.module` provides one drupal alter function `commo_ck_menu_block_tree_alter` and one helper function `_find_key_match` to alter the menu block that appears above construction kit content. It will only display menu items from the active tree. The Construction Kit menu lineage is determined through a somewhat messy string pattern match - if menu names ever change, these match patterns will need to change. This system could be improved by using uuids or other techniques.

Credits
-------

Benjamin Chodoroff, [Work Dept](http://theworkdept.com)

License
-------

Copyright 2013, Benjamin Chodoroff. This software is distributed under the terms of the GNU General Public License.

