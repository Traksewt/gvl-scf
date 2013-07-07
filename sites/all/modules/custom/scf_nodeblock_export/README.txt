The SCF nodeblock export module allows to set a machine name for nodeblock
nodes via the field scf_f_machine_name which needs to be created manually for
now. This machine name should be limited to 32 chars and will be used by the
SCF nodeblock module to expose its own blocks. These can be used in context for
example and then exported in features.

UUID combined with UUID features are highly recommended to export nodeblock
content into features. Note however that the uuid will be used for the content
export, not the machine name. The machine name will however be exported as part
of the node content.

TODO:
- automatically create the field scf_f_machine_name on install
