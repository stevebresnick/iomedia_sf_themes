<?php

/**
 * Implements hook_panels_layouts()
 */
function vac_valen_1col_top_callout_panels_layouts() {
  $items['valen_1col_top_callout'] = array(
    'title' => t('Valen: stacked 1 col with top callout'),
    'category' => t('Valen'),
    'icon' => 'valen_1col_top_callout.png',
    'theme' => 'valen_1col_top_callout',
    'regions' => array(
      'top' => t('Top'),
      'main' => t('Main'),
      'left' => t('Left Callout'),
      'right' => t('Right Callout'),
      'secondary' => t('secondary'),
      'bottom' => t('Bottom'),
    ),
  );
  return $items;
}

