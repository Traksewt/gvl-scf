<?php

//Unset $page title on pubnode nodes (title is set in tpl)
if(isset($vars['node']) && $vars['node']->type == 'pubnode') {
  $vars['title'] = '';
}
