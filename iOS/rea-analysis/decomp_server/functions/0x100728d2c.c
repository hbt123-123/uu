// rea decompile_all
// name: SAEventStore::observeValueForKeyPath:ofObject:change:context:
// address: 0x100728d2c
// body: available
// range: 0x100728d2c-0x100728eaf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x30 bytes */

void SAEventStore::observeValueForKeyPath_ofObject_change_context_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,void *param_6)

{
  bool bVar1;
  ID IVar2;
  unsigned_long_long uVar3;
  ID IVar4;
  long lVar5;
  ID local_50;
  class_t *pcStack_48;
  
  if (param_6 == &PTR_LOOP_1009e8150) {
    IVar2 = objc_stub::isEqualToString_(param_3,&cf_isCreatedTable);
    if ((int)IVar2 != 0) {
      IVar2 = objc_stub::objectForKeyedSubscript_
                        (param_5,*(undefined8 *)PTR__NSKeyValueChangeNewKey_1009952f0);
      IVar2 = objc_stub::boolValue(IVar2);
      if ((IVar2 & 1) != 0) {
        IVar2 = recordCaches(param_1);
        uVar3 = count(IVar2);
        if (uVar3 != 0) {
          lVar5 = 3;
          do {
            IVar2 = database(param_1);
            IVar4 = recordCaches(param_1);
            bVar1 = insertRecords_(IVar2,IVar4);
            if (bVar1 != 0) {
              IVar2 = recordCaches(param_1);
              objc_stub::removeAllObjects(IVar2);
              return;
            }
            lVar5 = lVar5 + -1;
          } while (lVar5 != 0);
        }
      }
    }
  }
  else {
    pcStack_48 = &objc::class_t::SAEventStore;
    local_50 = param_1;
    NSObject::observeValueForKeyPath_ofObject_change_context_
              ((ID)&local_50,"observeValueForKeyPath:ofObject:change:context:",param_3,param_4,
               param_5,param_6);
  }
  return;
}

