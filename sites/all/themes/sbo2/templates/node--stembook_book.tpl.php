<article<?php print $attributes; ?>>
<table><tr>
<td>
<h2><?php print l($node->title, 'node/' . $node->nid); ?></a></h2>
<?php //dd($node); ?>

  <?php if ($node->field_chapters_in_book[LANGUAGE_NONE][0]['nid']): ?><ul>
    <?php foreach ((array)$node->field_chapters_in_book[LANGUAGE_NONE] as $item) { ?>
      <?php
         $chapter = node_load($item['nid']);
//dd($node);
         print '<li>' . '<div class=chapter-title>' .  l($chapter->title, 'node/' . $chapter->nid)  . '</div>'  . '<div class=chapter-authors>' . $chapter->field_pub_node_toc_authors[LANGUAGE_NONE][0]['safe_value'] . '</div>' .  '</li>'; ?>
    <?php } ?></ul>
  <?php endif; ?>
</td>

<td class="book-icon"><div class="views-field-field-book-icon-fid">
<img class="imagecache imagecache-toc_icon" title="" alt="" height="100" width="100" src="<?php print image_style_url('stembook_thumbnail', $node->field_book_icon_image[LANGUAGE_NONE][0]['uri']); ?>">
</div></td>
</tr>
</table>
</article>
