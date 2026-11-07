// rea decompile_all
// name: SABaseEventObject::typeWithEventType:
// address: 0x1007123b0
// body: available
// range: 0x1007123b0-0x10071248b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007123e4 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100712488 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SABaseEventObject::typeWithEventType_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  uint uVar1;
  undefined **ppuVar2;
  
  uVar1 = (uint)param_3;
  if ((param_3 & 1) == 0) {
    if ((uVar1 >> 1 & 1) == 0) {
      if ((uVar1 >> 4 & 1) == 0) {
        if ((uVar1 >> 5 & 1) == 0) {
          if ((uVar1 >> 6 & 1) == 0) {
            if ((uVar1 >> 7 & 1) == 0) {
              if ((uVar1 >> 8 & 1) == 0) {
                if ((uVar1 >> 9 & 1) == 0) {
                  if ((uVar1 >> 10 & 1) == 0) {
                    if ((uVar1 >> 0xb & 1) == 0) {
                      if ((uVar1 >> 2 & 1) == 0) {
                        if ((uVar1 >> 3 & 1) == 0) {
                          return 0;
                        }
                        ppuVar2 = &PTR_cf_track_id_unbind_1009e7710;
                      }
                      else {
                        ppuVar2 = &PTR_cf_track_id_bind_1009e7708;
                      }
                    }
                    else {
                      ppuVar2 = &PTR_cf_item_delete_1009e7600;
                    }
                  }
                  else {
                    ppuVar2 = &PTR_cf_item_set_1009e75f8;
                  }
                }
                else {
                  ppuVar2 = &PTR_cf_profile_increment_1009e7740;
                }
              }
              else {
                ppuVar2 = &PTR_cf_profile_append_1009e7738;
              }
            }
            else {
              ppuVar2 = &PTR_cf_profile_delete_1009e7730;
            }
          }
          else {
            ppuVar2 = &PTR_cf_profile_unset_1009e7728;
          }
        }
        else {
          ppuVar2 = &PTR_cf_profile_set_once_1009e7720;
        }
      }
      else {
        ppuVar2 = &PTR_cf_profile_set_1009e7718;
      }
    }
    else {
      ppuVar2 = &PTR_cf_track_signup_1009e7700;
    }
  }
  else {
    ppuVar2 = &PTR_cf_track_1009e76f8;
  }
  return (ID)*ppuVar2;
}

