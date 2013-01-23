<?php
/**
 * @file
 * stembook_dev_content.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function stembook_dev_content_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => '1',
  'title' => 'Journal Stream',
  'log' => '',
  'status' => '1',
  'comment' => '2',
  'promote' => '1',
  'sticky' => '0',
  'vuuid' => '2b843779-eba0-4cff-9f67-d1e1fad2d22b',
  'type' => 'page',
  'language' => 'und',
  'created' => '1348081101',
  'tnid' => '0',
  'translate' => '0',
  'uuid' => '50983ef4-be18-4049-983f-26ddc1d414b2',
  'revision_uid' => '0',
  'body' => array(),
  'cid' => '0',
  'last_comment_name' => NULL,
  'last_comment_uid' => '1',
  'comment_count' => '0',
  'name' => 'admin',
  'picture' => '0',
  'data' => 'a:16:{s:13:"form_build_id";s:37:"form-c2ea52f537c4c5998da4b3db77d9efdf";s:14:"picture_delete";s:0:"";s:14:"picture_upload";s:0:"";s:5:"block";a:1:{s:5:"devel";a:1:{i:1;i:1;}}s:19:"biblio_show_profile";i:0;s:19:"biblio_my_pubs_menu";i:0;s:15:"biblio_lastname";s:0:"";s:18:"biblio_profile_uid";s:8:"lastname";s:7:"contact";i:0;s:7:"overlay";i:1;s:21:"biblio_contributor_id";s:1:"0";s:22:"biblio_id_change_count";s:1:"0";s:17:"biblio_user_style";s:6:"system";s:18:"biblio_baseopenurl";s:0:"";s:18:"biblio_openurl_sid";s:0:"";s:19:"biblio_crossref_pid";s:0:"";}',
  'date' => '2012-09-19 14:58:21 -0400',
);
  $nodes[] = array(
  'uid' => '1',
  'title' => 'Search',
  'log' => '',
  'status' => '1',
  'comment' => '1',
  'promote' => '0',
  'sticky' => '0',
  'vuuid' => '57b4b026-4ede-45ad-ab2c-c0e94902796b',
  'type' => 'nodeblock',
  'language' => 'und',
  'created' => '1350655965',
  'tnid' => '0',
  'translate' => '0',
  'uuid' => 'a561f503-14e9-4abe-b210-d52dc7d572de',
  'revision_uid' => '0',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<form accept-charset="UTF-8" id="scf-search-form" method="post" action="/d7pow/news/archive/research"><div><div id="edit-keys-set" class="form-wrapper"><div class="div-wrapper"><div class="form-item form-type-textfield form-item-keys">
  <label for="edit-keys" class="element-invisible">Search </label>
 <input type="text" class="form-text" maxlength="128" size="15" value="" name="keys" id="edit-keys" title="Enter the terms you wish to search for.">
</div>
</div></div></div>
<div id="edit-date" class="form-wrapper"><div class="div-wrapper"><div id="edit-date-from" class="form-wrapper"><legend><span class="div-legend">From</span></legend><div class="div-wrapper"><div class="form-item form-type-select form-item-date-from-year">
 <select class="form-select" name="date_from_year" id="edit-date-from-year"><option value="0">Year</option><option value="2012">2012</option><option value="2011">2011</option><option value="2010">2010</option><option value="2009">2009</option><option value="2008">2008</option><option value="2007">2007</option><option value="2006">2006</option><option value="2005">2005</option><option value="2004">2004</option><option value="2003">2003</option><option value="2002">2002</option><option value="2001">2001</option><option value="2000">2000</option><option value="1999">1999</option><option value="1998">1998</option><option value="1997">1997</option><option value="1996">1996</option><option value="1995">1995</option><option value="1994">1994</option><option value="1993">1993</option><option value="1992">1992</option><option value="1991">1991</option><option value="1990">1990</option><option value="1989">1989</option><option value="1988">1988</option><option value="1987">1987</option><option value="1986">1986</option><option value="1985">1985</option><option value="1984">1984</option><option value="1983">1983</option><option value="1982">1982</option><option value="1981">1981</option><option value="1980">1980</option><option value="1979">1979</option><option value="1978">1978</option><option value="1977">1977</option><option value="1976">1976</option><option value="1975">1975</option><option value="1974">1974</option><option value="1973">1973</option><option value="1972">1972</option><option value="1971">1971</option><option value="1970">1970</option><option value="1969">1969</option><option value="1968">1968</option><option value="1967">1967</option><option value="1966">1966</option><option value="1965">1965</option><option value="1964">1964</option><option value="1963">1963</option><option value="1962">1962</option><option value="1961">1961</option><option value="1960">1960</option><option value="1959">1959</option><option value="1958">1958</option><option value="1957">1957</option><option value="1956">1956</option><option value="1955">1955</option><option value="1954">1954</option><option value="1953">1953</option><option value="1952">1952</option><option value="1951">1951</option><option value="1950">1950</option></select>
</div>
<div class="form-item form-type-select form-item-date-from-month">
 <select class="form-select" name="date_from_month" id="edit-date-from-month"><option value="0">Month</option><option value="01">Jan</option><option value="02">Feb</option><option value="03">Mar</option><option value="04">Apr</option><option value="05">May</option><option value="06">Jun</option><option value="07">Jul</option><option value="08">Aug</option><option value="09">Sep</option><option value="10">Oct</option><option value="11">Nov</option><option value="12">Dec</option></select>
</div>
</div></div>
<input type="hidden" value="form-OAXkHveBirtUsh6h9GHDJ8uyO2Nsjo48XU5f3fDKJfs" name="form_build_id">
<input type="hidden" value="oykcYOqXC6kXGuddYt1yS1dh71cmYKuq0FbnczlO2SM" name="form_token">
<input type="hidden" value="scf_search_form" name="form_id">
<div id="edit-actions--2" class="form-actions form-wrapper"><input type="submit" class="form-submit" value="Search" name="op" id="edit-submit--2"><input type="submit" class="form-submit" value="Clear" name="op" id="edit-clear"></div></div></form>',
        'summary' => '',
        'format' => '2',
        'safe_value' => '<form accept-charset="UTF-8" id="scf-search-form" method="post" action="/d7pow/news/archive/research">
<div>
<div id="edit-keys-set" class="form-wrapper">
<div class="div-wrapper">
<div class="form-item form-type-textfield form-item-keys">
  <label for="edit-keys" class="element-invisible">Search </label><br /><input type="text" class="form-text" maxlength="128" size="15" value="" name="keys" id="edit-keys" title="Enter the terms you wish to search for." /></div>
</div>
</div>
</div>
<div id="edit-date" class="form-wrapper">
<div class="div-wrapper">
<div id="edit-date-from" class="form-wrapper"><legend><span class="div-legend">From</span></legend><br /><div class="div-wrapper">
<div class="form-item form-type-select form-item-date-from-year">
<select class="form-select" name="date_from_year" id="edit-date-from-year"><option value="0">Year</option><option value="2012">2012</option><option value="2011">2011</option><option value="2010">2010</option><option value="2009">2009</option><option value="2008">2008</option><option value="2007">2007</option><option value="2006">2006</option><option value="2005">2005</option><option value="2004">2004</option><option value="2003">2003</option><option value="2002">2002</option><option value="2001">2001</option><option value="2000">2000</option><option value="1999">1999</option><option value="1998">1998</option><option value="1997">1997</option><option value="1996">1996</option><option value="1995">1995</option><option value="1994">1994</option><option value="1993">1993</option><option value="1992">1992</option><option value="1991">1991</option><option value="1990">1990</option><option value="1989">1989</option><option value="1988">1988</option><option value="1987">1987</option><option value="1986">1986</option><option value="1985">1985</option><option value="1984">1984</option><option value="1983">1983</option><option value="1982">1982</option><option value="1981">1981</option><option value="1980">1980</option><option value="1979">1979</option><option value="1978">1978</option><option value="1977">1977</option><option value="1976">1976</option><option value="1975">1975</option><option value="1974">1974</option><option value="1973">1973</option><option value="1972">1972</option><option value="1971">1971</option><option value="1970">1970</option><option value="1969">1969</option><option value="1968">1968</option><option value="1967">1967</option><option value="1966">1966</option><option value="1965">1965</option><option value="1964">1964</option><option value="1963">1963</option><option value="1962">1962</option><option value="1961">1961</option><option value="1960">1960</option><option value="1959">1959</option><option value="1958">1958</option><option value="1957">1957</option><option value="1956">1956</option><option value="1955">1955</option><option value="1954">1954</option><option value="1953">1953</option><option value="1952">1952</option><option value="1951">1951</option><option value="1950">1950</option></select></div>
<div class="form-item form-type-select form-item-date-from-month">
<select class="form-select" name="date_from_month" id="edit-date-from-month"><option value="0">Month</option><option value="01">Jan</option><option value="02">Feb</option><option value="03">Mar</option><option value="04">Apr</option><option value="05">May</option><option value="06">Jun</option><option value="07">Jul</option><option value="08">Aug</option><option value="09">Sep</option><option value="10">Oct</option><option value="11">Nov</option><option value="12">Dec</option></select></div>
</div>
</div>
<p><input type="hidden" value="form-OAXkHveBirtUsh6h9GHDJ8uyO2Nsjo48XU5f3fDKJfs" name="form_build_id" /><input type="hidden" value="oykcYOqXC6kXGuddYt1yS1dh71cmYKuq0FbnczlO2SM" name="form_token" /><input type="hidden" value="scf_search_form" name="form_id" /><br /></p><div id="edit-actions--2" class="form-actions form-wrapper"><input type="submit" class="form-submit" value="Search" name="op" id="edit-submit--2" /><input type="submit" class="form-submit" value="Clear" name="op" id="edit-clear" /></div>
</div>
</div>
</form>',
        'safe_summary' => '',
      ),
    ),
  ),
  'scf_f_machine_name' => array(
    'und' => array(
      0 => array(
        'human' => 'scf_content_search_placeholder',
        'machine' => 'scf_content_search_placeholder',
      ),
    ),
  ),
  'cid' => '0',
  'last_comment_name' => NULL,
  'last_comment_uid' => '1',
  'comment_count' => '0',
  'name' => 'admin',
  'picture' => '0',
  'data' => 'a:16:{s:13:"form_build_id";s:37:"form-c2ea52f537c4c5998da4b3db77d9efdf";s:14:"picture_delete";s:0:"";s:14:"picture_upload";s:0:"";s:5:"block";a:1:{s:5:"devel";a:1:{i:1;i:1;}}s:19:"biblio_show_profile";i:0;s:19:"biblio_my_pubs_menu";i:0;s:15:"biblio_lastname";s:0:"";s:18:"biblio_profile_uid";s:8:"lastname";s:7:"contact";i:0;s:7:"overlay";i:1;s:21:"biblio_contributor_id";s:1:"0";s:22:"biblio_id_change_count";s:1:"0";s:17:"biblio_user_style";s:6:"system";s:18:"biblio_baseopenurl";s:0:"";s:18:"biblio_openurl_sid";s:0:"";s:19:"biblio_crossref_pid";s:0:"";}',
  'date' => '2012-10-19 10:12:45 -0400',
);
  $nodes[] = array(
  'uid' => '1',
  'title' => 'Resources',
  'log' => '',
  'status' => '1',
  'comment' => '1',
  'promote' => '0',
  'sticky' => '0',
  'vuuid' => 'caf92dd4-c547-40db-9810-3e101c03af95',
  'type' => 'page',
  'language' => 'und',
  'created' => '1213041979',
  'tnid' => '0',
  'translate' => '0',
  'uuid' => 'b45bba47-39c9-4ba0-89a2-406f48292660',
  'revision_uid' => '0',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Stembook resources
http://www.stembook.org/scf/resources

PubMed
http://www.ncbi.nlm.nih.gov/sites/entrez?db=PubMed

Ensembl
http://www.ensembl.org/index.html

ISSCR
http://www.isscr.org

HSCI
http://www.hsci.harvard.edu/

Massachusetts Human Stem Cell Bank and International Registry
http://www.umassmed.edu/umscr/index.aspx

EuroStemCell
http://www.eurostemcell.org',
        'summary' => '',
        'format' => '1',
        'safe_value' => '<p>Stembook resources<br /><a href="http://www.stembook.org/scf/resources">http://www.stembook.org/scf/resources</a></p>
<p>PubMed<br /><a href="http://www.ncbi.nlm.nih.gov/sites/entrez?db=PubMed">http://www.ncbi.nlm.nih.gov/sites/entrez?db=PubMed</a></p>
<p>Ensembl<br /><a href="http://www.ensembl.org/index.html">http://www.ensembl.org/index.html</a></p>
<p>ISSCR<br /><a href="http://www.isscr.org">http://www.isscr.org</a></p>
<p>HSCI<br /><a href="http://www.hsci.harvard.edu/">http://www.hsci.harvard.edu/</a></p>
<p>Massachusetts Human Stem Cell Bank and International Registry<br /><a href="http://www.umassmed.edu/umscr/index.aspx">http://www.umassmed.edu/umscr/index.aspx</a></p>
<p>EuroStemCell<br /><a href="http://www.eurostemcell.org">http://www.eurostemcell.org</a></p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'cid' => '0',
  'last_comment_name' => NULL,
  'last_comment_uid' => '1',
  'comment_count' => '0',
  'name' => 'admin',
  'picture' => '0',
  'data' => 'a:16:{s:13:"form_build_id";s:37:"form-c2ea52f537c4c5998da4b3db77d9efdf";s:14:"picture_delete";s:0:"";s:14:"picture_upload";s:0:"";s:5:"block";a:1:{s:5:"devel";a:1:{i:1;i:1;}}s:19:"biblio_show_profile";i:0;s:19:"biblio_my_pubs_menu";i:0;s:15:"biblio_lastname";s:0:"";s:18:"biblio_profile_uid";s:8:"lastname";s:7:"contact";i:0;s:7:"overlay";i:1;s:21:"biblio_contributor_id";s:1:"0";s:22:"biblio_id_change_count";s:1:"0";s:17:"biblio_user_style";s:6:"system";s:18:"biblio_baseopenurl";s:0:"";s:18:"biblio_openurl_sid";s:0:"";s:19:"biblio_crossref_pid";s:0:"";}',
  'date' => '2008-06-09 16:06:19 -0400',
);
  return $nodes;
}
