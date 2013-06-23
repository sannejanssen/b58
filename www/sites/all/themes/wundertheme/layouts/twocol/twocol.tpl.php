<?php
/*
 * Custom panel layout
 */

// dsm($variables);


$col_class = array();
$col_class[] = 'panel';

if(!$content['col_first'] || !$content['col_second']) {
  $col_class[] = 'single';
}
$css = 'class="' . implode(' ', $col_class) . '"';
?>

<?php if(!empty($content['widescreen'])): ?>
  <div class="widescreen"><?php print $content['widescreen']; ?></div>
<?php endif; ?>

<div class="center">
  <div class="container">
    <div <?php print $css; ?>>
      <?php if($content['top']): ?>
        <div class="top"><?php print $content['top']; ?></div>
      <?php endif; ?>
      <?php if($content['col_first']): ?>
        <div class="column first"><?php print $content['col_first']; ?></div>
      <?php endif; ?>
      <?php if($content['col_second']): ?>
        <div class="column second"><?php print $content['col_second']; ?></div>
      <?php endif; ?>
      <?php if($content['bottom']): ?>
        <div class="bottom"><?php print $content['bottom']; ?></div>
      <?php endif; ?>
    </div>
  </div>
</div>