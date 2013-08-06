<?php

// Do not show the link "Log in to post comments".
unset($vars['content']['links']['comment']['#links']['comment_forbidden']);
