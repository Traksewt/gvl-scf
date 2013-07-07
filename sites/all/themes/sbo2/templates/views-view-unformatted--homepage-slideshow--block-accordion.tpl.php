<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
      <?php foreach ($rows as $id => $row): ?>
		<div class="link-header">
          <?php print $row; ?>
        </div>
		<div class="link-content">
			<!-- empty -->
		</div>
      <?php endforeach; ?>
