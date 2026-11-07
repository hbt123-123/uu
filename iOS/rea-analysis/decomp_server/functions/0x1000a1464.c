// rea decompile_all
// name: _TtC10Filepicker17FilepickerManager::upload:to:token:headers:completionHandler:
// address: 0x1000a1464
// body: available
// range: 0x1000a1464-0x1000a15d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void _TtC10Filepicker17FilepickerManager::upload_to_token_headers_completionHandler_
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,void *param_7)

{
  void *pvVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long extraout_x8;
  
  pvVar1 = __Block_copy(param_7);
  puVar2 = &DAT_10099a0a0;
  _swift_allocObject(&DAT_10099a0a0,0x40,7);
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  *(undefined8 *)(puVar2 + 0x28) = param_6;
  *(void **)(puVar2 + 0x30) = pvVar1;
  *(undefined8 *)(puVar2 + 0x38) = param_1;
  puVar3 = &DAT_100a76918;
  FUN_100004bb4(&DAT_100a76918,&DAT_10080d640);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  __sScPMa();
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(&stack0xffffffffffffffb0 + -extraout_x8,1,1,lVar4);
  puVar3 = &DAT_10099a0c8;
  _swift_allocObject(&DAT_10099a0c8,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined **)(puVar3 + 0x20) = &DAT_10080b3b0;
  *(undefined **)(puVar3 + 0x28) = puVar2;
  puVar2 = &DAT_10099a0f0;
  _swift_allocObject(&DAT_10099a0f0,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = 0;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  *(undefined **)(puVar2 + 0x20) = &DAT_10080b3c0;
  *(undefined **)(puVar2 + 0x28) = puVar3;
  FUN_1000a1bdc(0,0,&stack0xffffffffffffffb0 + -extraout_x8,&DAT_10080b3d0,puVar2);
  _swift_release();
  return;
}

