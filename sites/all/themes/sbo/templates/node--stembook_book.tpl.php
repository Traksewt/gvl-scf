<?php if ($teaser): ?>
  <?php print '<div class="imgBlock">' . theme('imagecache', 'toc_icon', $node->field_book_icon[0]['view'], $alt, $title, $attributes) . '</div>'; ?>
  <?php print '<div class="views-field-title"><a href="/node/' . $node->nid . '">' . $node->title . '</a></div>'; ?>

<?php else: ?>
<div id="breadcrumb">
  <a href="/" class="first">Home</a><a href="/contents">Table of Contents</a>
</div>

<h2 class="title clear-block clear" id="page-title"><?php //print $title; ?></h2>


<div id="node-<?php print $node->nid; ?>_wrapper" class="node<?php print ' ' . $type; ?><?php print ($teaser ? ' teaser' : ' not-teaser') ?><?php if ($sticky) { print ' sticky'; } ?><?php if (!$status) { print ' node-unpublished'; } ?>">
  <div id="node-<?php print $node->nid; ?>" class="clear-block">

<?php if (!$page): ?>
    <h2><a href="<?php print $node_url ?>" title="<?php print $title ?>"><?php print $title ?></a></h2>
<?php endif; ?>

    <div class="content clear-block clearfix">

      <?php print '<div class="imgBlock"><img src="' . image_style_url('large', $node->field_book_icon_image[LANGUAGE_NONE][0]['uri']) . '"><div class="caption">' . $node->field_caption[LANGUAGE_NONE][0]['safe_value'] . '</div></div>'; ?>
      <?php if (!empty($node->content['body']['#value'])): ?>
        <?php print $node->content['body']['#value'] ?>
      <?php endif; ?>
      <?php if ($node->field_chapters_in_book[LANGUAGE_NONE][0]['nid']): ?>
        <div class="item-list">
          <h3>Table of Contents</h3>
          <ol>
            <?php foreach ((array)$node->field_chapters_in_book[LANGUAGE_NONE] as $item) { ?>
              <?php print '<li>' . l($item['node']->title, 'node/' . $item['node']->nid); ?>
              <?php $author = node_load($item['nid']); ?>
              <?php print '<br>' . $author->field_pub_node_toc_authors[LANGUAGE_NONE][0]['safe_value'] . '</li>' ?>

            <?php } ?>
          </ol>
        </div>
      <?php endif; ?>
    </div>

    <?php if (!empty($node->content['body']['#value'])): ?>
      <div class="clear-block"><?php print $admin_links; ?></div>
    <?php endif; ?>
    <?php if (!empty($node->content['body']['#value'])): ?>
      <div class="clear-block"><?php print $links; ?></div>
    <?php endif; ?>

  </div>
</div>
<?php endif; ?>
