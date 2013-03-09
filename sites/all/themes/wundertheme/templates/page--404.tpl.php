<div class="page">
  <header role="banner">
    <div class="container">

      <?php if ($logo): ?>
      <figure class="logo">
        <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home">
          <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>"/>
        </a>
      </figure>
      <?php endif; ?>

      <?php if ($site_name OR $site_slogan): ?>
      <hgroup class="site-name">
        <?php if ($site_name): ?>
        <?php if ($is_front): ?>
          <h1><a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>"
                 rel="home"><?php print $site_name; ?></a></h1>
          <?php else : ?>
          <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>"
             rel="home"><?php print $site_name; ?></a>
          <?php endif; ?>
        <?php endif; ?>
        <?php if ($site_slogan): ?>
        <h2><?php print $site_slogan; ?></h2>
        <?php endif; ?>
      </hgroup>
      <?php endif; ?>

      <?php if ($page['header']): ?>
      <div class="header">
        <?php print render($page['header']); ?>
      </div>
      <?php endif; ?>

    </div>
  </header>
  <div class="container">
    <div role="main" class="main">

      <article>
        <h1><?php print t('Page not Found')?></h1>

        <p><?php print t('Sorry, but the page you were trying to view does not exist.')?></p>

        <p><?php print t('It looks like this was the result of either')?>:</p>
        <ul>
          <li><?php print t('a mistyped address')?></li>
          <li><?php print t('an out-of-date link')?></li>
        </ul>

        <a href="/search/"><?php print t('search')?> ?</a>
      </article>
    </div>
  </div>
</div>


