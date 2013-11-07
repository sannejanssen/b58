<?php

/**
 * @file
 * Display Suite 1 column template.
 */
?>

<<?php print $ds_content_wrapper; ?> class="contact-<?php print $variables['node']->nid; ?> ds-1col <?php print $classes;?> clearfix">

  <?php if (isset($title_suffix['contextual_links'])): ?>
  <?php print render($title_suffix['contextual_links']); ?>
  <?php endif; ?>

  <?php print $ds_content; ?>
</<?php print $ds_content_wrapper ?>>