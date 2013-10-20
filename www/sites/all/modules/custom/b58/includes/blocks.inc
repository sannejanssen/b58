<?php

/**
 * @file
 * Block callbacks.
 */

/**
 * Return the international contacts map.
 */
function b58_international_contacts_map() {
  global $base_path;

  $block = array();
  $image_url = $base_path . drupal_get_path('theme', 'wundertheme') . '/images/international-contacts/b58-world-map.png';

  // Image style: international_contacts_map
  // width: 1079px

  $block['subject'] = 'The block title';



  // theme('image_style', array('style_name' => 'desthumb', 'path' => $image0path, 'getsize' => TRUE, 'attributes' => array('class' => 'thumb', 'width' => '150', 'height' => '162')));

/*
<img src="planets.gif" width="145" height="126" alt="Planets" usemap="#planetmap">

<map name="planetmap">
  <area shape="rect" coords="0,0,82,126" href="sun.htm" alt="Sun">
  <area shape="circle" coords="90,58,3" href="mercur.htm" alt="Mercury">
  <area shape="circle" coords="124,58,8" href="venus.htm" alt="Venus">
</map>
*/

  $block['content'] = '<div class="ic-map">';

  // Add the image.
  // $block['content'] .= '<img src="' . $image_url . '" width="1079" alt="' . t('International contacts') . '" usemap="#i-contacts" />';

  // Add the image map.
  // $block['content'] .= '<map name="i-contacts">';


  // Add the area's.
  // $block['content'] .= '<area class="shape" shape="circle" coords="100,0,200,200" href="sun.htm" alt="Sun">';

  /*<map name="planetmap">
  
  <area shape="circle" coords="90,58,3" href="mercur.htm" alt="Mercury">
  <area shape="circle" coords="124,58,8" href="venus.htm" alt="Venus">
  */

  // Close map.
  // $block['content'] .= '</map>';


  $block['content'] .= <<<IMAGE
<div style="text-align:center; width:1095px; margin-left:auto; margin-right:auto;">
<img id="Image-Maps_5201310110219206" src="http://www.image-maps.com/uploaded_files/5201310110219206_b58-world-map.png" usemap="#Image-Maps_5201310110219206" border="0" width="1095" height="570" alt="" />
<map id="_Image-Maps_5201310110219206" name="Image-Maps_5201310110219206">
<area shape="rect" coords="212,105,262,155" href="http://www.google.com" alt="" title=""    />
<area shape="rect" coords="1093,568,1095,570" href="http://www.image-maps.com/index.php?aff=mapped_users_5201310110219206" alt="Image Map" title="Image Map" />
</map>
<!-- Image map text links - Start - If you do not wish to have text links under your image map, you can move or delete this DIV -->
<div style="text-align:center; font-size:12px; font-family:verdana; margin-left:auto; margin-right:auto; width:1095px;">
  <a style="text-decoration:none; color:black; font-size:12px; font-family:verdana;" href="http://www.google.com" title="Untitled">Untitled</a>
 |  <a style="text-decoration:none; color:black; font-size:12px; font-family:verdana;" href="http://www.image-maps.com/index.php?aff=mapped_users_5201310110219206" title="Image Map">Image Map</a>
</div>
<!-- Image map text links - End - -->

</div>
            
IMAGE
;

  // Close international contacts map wrapper.
  $block['content'] .= '</div>';



  return $block;
}