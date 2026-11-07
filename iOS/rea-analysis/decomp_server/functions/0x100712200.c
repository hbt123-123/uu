// rea decompile_all
// name: SABaseEventObject::eventTypeWithType:
// address: 0x100712200
// body: available
// range: 0x100712200-0x1007123af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

unsigned_long_long SABaseEventObject::eventTypeWithType_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  unsigned_long_long uVar2;
  
  IVar1 = objc_stub::isEqualToString_(param_3,&cf_track);
  if ((IVar1 & 1) == 0) {
    IVar1 = objc_stub::isEqualToString_(param_3,&cf_track_signup);
    if ((IVar1 & 1) == 0) {
      IVar1 = objc_stub::isEqualToString_(param_3,&cf_track_id_bind);
      if ((IVar1 & 1) == 0) {
        IVar1 = objc_stub::isEqualToString_(param_3,&cf_track_id_unbind);
        if ((IVar1 & 1) == 0) {
          IVar1 = objc_stub::isEqualToString_(param_3,&cf_profile_set);
          if ((IVar1 & 1) == 0) {
            IVar1 = objc_stub::isEqualToString_(param_3,&cf_profile_set_once);
            if ((IVar1 & 1) == 0) {
              IVar1 = objc_stub::isEqualToString_(param_3,&cf_profile_unset);
              if ((IVar1 & 1) == 0) {
                IVar1 = objc_stub::isEqualToString_(param_3,&cf_profile_delete);
                if ((IVar1 & 1) == 0) {
                  IVar1 = objc_stub::isEqualToString_(param_3,&cf_profile_append);
                  if ((IVar1 & 1) == 0) {
                    IVar1 = objc_stub::isEqualToString_(param_3,&cf_profile_increment);
                    if ((IVar1 & 1) == 0) {
                      IVar1 = objc_stub::isEqualToString_(param_3,&cf_item_set);
                      if ((IVar1 & 1) == 0) {
                        IVar1 = objc_stub::isEqualToString_(param_3,&cf_item_delete);
                        uVar2 = 0x800;
                        if ((int)IVar1 == 0) {
                          uVar2 = 0xf;
                        }
                      }
                      else {
                        uVar2 = 0x400;
                      }
                    }
                    else {
                      uVar2 = 0x200;
                    }
                  }
                  else {
                    uVar2 = 0x100;
                  }
                }
                else {
                  uVar2 = 0x80;
                }
              }
              else {
                uVar2 = 0x40;
              }
            }
            else {
              uVar2 = 0x20;
            }
          }
          else {
            uVar2 = 0x10;
          }
        }
        else {
          uVar2 = 8;
        }
      }
      else {
        uVar2 = 4;
      }
    }
    else {
      uVar2 = 2;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

