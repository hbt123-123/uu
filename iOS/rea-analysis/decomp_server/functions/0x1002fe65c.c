// rea decompile_all
// name: FUN_1002fe65c
// address: 0x1002fe65c
// body: available
// range: 0x1002fe65c-0x1002fe747 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_1002fe65c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  
  uVar3 = *unaff_x20;
  puVar1 = &DAT_1009af798;
  _swift_allocObject(&DAT_1009af798,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  _swift_unownedRetainStrong();
  _swift_retain(param_3);
  _swift_unownedRetain();
  _swift_unownedRetain();
  _swift_release();
  puVar2 = &DAT_1009af7c0;
  _swift_allocObject(&DAT_1009af7c0,0x38,7);
  *(undefined8 **)(puVar2 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(code **)(puVar2 + 0x20) = FUN_1003008d8;
  *(undefined **)(puVar2 + 0x28) = puVar1;
  *(undefined8 *)(puVar2 + 0x30) = uVar3;
  _swift_retain(puVar1);
  FUN_10030072c(param_1,thunk_FUN_100300914,puVar2);
  _swift_retain();
  _swift_release(puVar2);
  _swift_unownedRelease();
  _swift_release(puVar1);
  return param_1;
}

