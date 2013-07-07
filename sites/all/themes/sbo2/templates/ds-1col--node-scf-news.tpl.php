<article<?php print $attributes; ?>>


  <div<?php print $content_attributes; ?>>

    <div class="node-meta">
      <?php print render($content['scf_f_news_type']); ?> |
      <?php print render($content['post_date']); ?>
    </div>

  <?php print render($title_prefix); ?>
  <header>
    <h2<?php print $title_attributes; ?>><a href="<?php print $node_url ?>" title="<?php print $title ?>"><?php print $title ?></a></h2>
  </header>
  <?php print render($title_suffix); ?>


    <?php
      // We hide the comments and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
      print render($content);
    ?>
  </div>

  <div class="clearfix">
    <?php if (!empty($content['links'])): ?>
      <nav class="links node-links clearfix"><?php print render($content['links']); ?></nav>
    <?php endif; ?>

    <?php print render($content['comments']); ?>
  </div>
</article>

