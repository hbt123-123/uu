// rea decompile_all
// name: _TtC10Filepicker17FilepickerManager::setBackgroundCompletionHandler:
// address: 0x10037037c
// body: available
// range: 0x10037037c-0x100370437 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC10Filepicker17FilepickerManager::setBackgroundCompletionHandler_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined *puVar5;
  code *pcVar6;
  undefined1 auStack_58 [24];
  
  pvVar4 = __Block_copy((void *)param_3);
  if (pvVar4 == (void *)0x0) {
    pcVar6 = (code *)0x0;
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = &DAT_1009b5420;
    _swift_allocObject(&DAT_1009b5420,0x18,7);
    *(void **)(puVar5 + 0x10) = pvVar4;
    pcVar6 = FUN_100372e58;
  }
  puVar1 = (undefined8 *)(param_1 + backgroundCompletionHandler);
  _swift_beginAccess(puVar1,auStack_58,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = pcVar6;
  puVar1[1] = puVar5;
  FUN_10007ed2c(uVar2,uVar3);
  return;
}

