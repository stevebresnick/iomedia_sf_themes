<?php

/**
 * Implements hook_panels_layouts()
 */
function vac_valen_3col_stacked_panels_layouts() {
  $items['valen_3col_stacked'] = array(
    'title' => t('Valen: stacked 3 column row'),
    'category' => t('Valen'),
    'icon' => 'valen_3col_stacked.png',
    'theme' => 'valen_3col_stacked',
    //'admin css' => '../foundation_panels_admin.css',
    'regions' => array(
      'top' => t('Top'),
      'secondary' => t('secondary'),
      'left' => t('Left'),
      'center' => t('Center'),
      'right' => t('Right'),
      'bottom' => t('Bottom'),
    ),
  );
  return $items;
}

