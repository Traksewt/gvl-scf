<?php
// $Id: views-view-fields.tpl.php,v 1.4 2008/03/31 18:05:28 merlinofchaos Exp $
/**
 * @file views-view-fields.tpl.php
 * Default simple view template to all the fields as a row.
 *
 * - $view: The view in use.
 * - $fields: an array of $field objects. Each one contains:
 *   - $field->content: The output of the field.
 *   - $field->raw: The raw data for the field, if it exists. This is NOT output safe.
 *   - $field->class: The safe class id to use.
 *   - $field->handler: The Views field handler object controlling this field. Do not use
 *     var_export to dump this object, as it can't handle the recursion.
 * - $row: The raw result object from the query, with all data it fetched.
 *
 * @ingroup views_templates
 */
?>

<?php $node = node_load($row->nid) ?>

<td class="book-icon"><div class="views-field-field-book-icon-fid">
<img class="imagecache imagecache-toc_icon" title="" alt="" height="100" width="100" src="<?php print image_style_url('thumbnail', $node->field_book_icon_image[LANGUAGE_NONE][0]['uri']); ?>">
</div></td>

<td>
<h3><?php print l($node->title, 'node/' . $node->nid); ?></a></h3>
<?php //dd($node); ?>

  <?php if ($node->field_chapters_in_book[LANGUAGE_NONE][0]['nid']): ?><ol>
    <?php foreach ((array)$node->field_chapters_in_book[LANGUAGE_NONE] as $item) { ?>
      <?php
         $chapter = node_load($item['nid']);
//dd($node);
         print '<li>' . l($chapter->title, 'node/' . $chapter->nid)  . '<br>' . $chapter->field_pub_node_toc_authors[LANGUAGE_NONE][0]['safe_value'] . '</li>'; ?>
    <?php } ?></ol>
  <?php endif; ?>
</td>
