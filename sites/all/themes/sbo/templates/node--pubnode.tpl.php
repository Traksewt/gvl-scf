<div<?php print $attributes; ?>>

<?php
  $myview_args = array(0 => $node->nid);
//debug($node);
  $book_by_chapter = views_get_view('book_by_chapter');
  $book_by_chapter_view = $book_by_chapter->execute_display('default', $myview_args);
  $book_by_chapter_count = $book_by_chapter->total_rows;
?>
<?php if ($book_by_chapter_count): ?>
  <div id="breadcrumb">
    <a href="/" class="first">Home</a><a href="/contents">Table of Contents</a>
    <?php print $book_by_chapter_view; ?>
  </div>
<?php endif; ?>

  <?php print $user_picture; ?>

  <?php if (!$page && $title): ?>
  <div class="clear">
    <?php print render($title_prefix); ?>
    <h2<?php print $title_attributes; ?>><a href="<?php print $node_url ?>" title="<?php print $title ?>"><?php print $title ?></a></h2>
    <?php print render($title_suffix); ?>
  </div>
  <?php else: // Custom title for SCF pubnodes ?>
  <div class="clearfix">
    <h2<?php print $title_attributes; ?>><?php print $display_title ?></h2>
  </div>
  <?php endif; ?>

  <?php if ($display_submitted): ?>
  <div class="submitted"><?php print $date; ?> -- <?php print $name; ?></div>
  <?php endif; ?>

  <div<?php print $content_attributes; ?>>
    <?php
      // We hide the comments and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
      print render($content);
    ?>
  </div>

    <div class="license">
       <a rel="license" href="http://creativecommons.org/licenses/by/3.0/"><img alt="Creative Commons License" style="border-width:0" src="http://i.creativecommons.org/l/by/3.0/88x31.png"/></a>
       This work is licensed under a <a rel="license" href="http://creativecommons.org/licenses/by/3.0/">Creative Commons Attribution 3.0 Unported License</a>.
    </div>

  <div class="clearfix">
    <?php if (!empty($content['links'])): ?>
      <div class="links node-links clearfix"><?php print render($content['links']); ?></div>
    <?php endif; ?>

    <?php print render($content['comments']); ?>
  </div>
</div>
