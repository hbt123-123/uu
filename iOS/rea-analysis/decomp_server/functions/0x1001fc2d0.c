// rea decompile_all
// name: FUN_1001fc2d0
// address: 0x1001fc2d0
// body: available
// range: 0x1001fc2d0-0x1001fc3e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001fc2d0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  _swift_unknownObjectWeakInit(unaff_x20 + 0x10,0);
  *(undefined1 *)(unaff_x20 + 0x18) = 0;
  _swift_beginAccess(unaff_x20 + 0x10,auStack_58,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + 0x10,param_1);
  uVar1 = 0;
  FUN_1002013d0();
  _swift_allocObject();
  uVar2 = 0;
  FUN_1002013f0();
  _swift_allocObject();
  puVar4 = &DAT_1009a4e90;
  puVar3 = puVar4;
  _swift_allocObject(&DAT_1009a4e90,0x18,7);
  _swift_unknownObjectWeakInit(puVar3 + 0x10,param_1);
  _swift_allocObject(&DAT_1009a4e90,0x18,7);
  _swift_unknownObjectWeakInit(puVar4 + 0x10,param_1);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar1;
  *(undefined ***)(unaff_x20 + 0x28) = &PTR_PTR_1009a4f68;
  *(undefined8 *)(unaff_x20 + 0x30) = uVar2;
  *(undefined ***)(unaff_x20 + 0x38) = &PTR_PTR_1009a4f58;
  *(code **)(unaff_x20 + 0x40) = thunk_FUN_1000cc400;
  *(undefined **)(unaff_x20 + 0x48) = puVar3;
  *(code **)(unaff_x20 + 0x50) = thunk_FUN_1000cc408;
  *(undefined **)(unaff_x20 + 0x58) = puVar4;
  return;
}

