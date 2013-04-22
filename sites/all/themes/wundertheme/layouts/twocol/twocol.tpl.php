<?php
dsm($variables);
?>
<div class="panel">
  <div class="top"><?php print $content['top']; ?></div>
  <div class="column first"><?php print $content['col_first']; ?></div>
  <div class="column second"><?php print $content['col_second']; ?></div>
  <div class="bottom"><?php print $content['bottom']; ?></div>
</div>

<?php
/*
for ($i=1; $i <= 10; $i++) {
  $color = $variables['display']->panel_settings['style_settings']['default']['row' . $i . '_color'];
  $class = ($color == 'none') ? '' : ' ' . $color;
  // Dirty hack get this out through configuration.
  if ($i == 4 && $variables['is_front']) {
    $class .= ' gmap-front';
  }

  $column_width = $variables['display']->panel_settings['style_settings']['default']['column_width'];
  $left_width = substr($column_width, 0, 1);
  $right_width = substr($column_width, 2, 1);

  // Normal row layout.

  if (isset($content['content' . $i . '_left']) || isset($content['content' . $i . '_right'])) { ?>
    <div class="row<?php print $class;?>">
      <div class="container">
        <?php
        if ($content['content' . $i . '_left']) {
            $classes = array();
            $classes[] = 'column';
            if (isset($content['content' . $i . '_left']) && isset($content['content' . $i . '_right'])) {
              $classes[] = 'column-left column'. $left_width;
            } ?>
          <div class="<?php print implode(' ', $classes);?>">
            <?php print $content['content' . $i . '_left']; ?>
          </div>
        <?php } ?>

        <?php
        if ($content['content' . $i . '_right']) {
          $classes = array();
          $classes[] = 'column';
          if (isset($content['content' . $i . '_left']) && isset($content['content' . $i . '_right'])) {
            $classes[] = 'column-right column'. $right_width;
          } ?>
        	<div class="<?php print implode(' ', $classes);?>">
            <?php print $content['content' . $i . '_right']; ?>
          </div>
        <?php } ?>
      </div>
    </div>
  <?php
  }
}
*/
?>