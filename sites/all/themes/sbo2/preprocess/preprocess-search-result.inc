<?php

// Display the type instead of the author under search snippet.
if (!empty($vars['result']['type'])) {
  $vars['info'] = $vars['result']['type'] . ' - ' . $vars['info_split']['date'];
}
else {
  $vars['info'] = $vars['info_split']['date'];
}
