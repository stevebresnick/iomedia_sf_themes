<?php

/**
 * Implements hook_panels_layouts()
 */
function vac_valen_2col_stacked_panels_layouts() {
  $items['valen_2col_stacked'] = array(
    'title' => t('Valen: stacked 2 column row'),
    'category' => t('Valen'),
    'icon' => 'valen_2col_stacked.png',
    'theme' => 'valen_2col_stacked',
    //'admin css' => '../foundation_panels_admin.css',
    'regions' => array(
      'top' => t('Top'),
      'secondary' => t('secondary'),
      'left' => t('Left'),
      'right' => t('Right'),
      'bottom' => t('Bottom'),
    ),
  );
  return $items;
}

