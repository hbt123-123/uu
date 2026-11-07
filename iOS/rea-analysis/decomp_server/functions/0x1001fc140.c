// rea decompile_all
// name: FUN_1001fc140
// address: 0x1001fc140
// body: available
// range: 0x1001fc140-0x1001fc1ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001fc140(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 in_x4;
  long in_x5;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  puVar4 = auStack_58;
  _swift_beginAccess(unaff_x20 + 0x10,puVar4,0,0);
  lVar1 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    FUN_1000c8388();
    uVar2 = 0;
    FUN_1001bc1d8(0);
    uVar3 = uVar2;
    _swift_getObjectType(uVar2);
    (**(code **)(puVar4 + 0x30))
              (*(undefined8 *)(in_x5 + 8),*(undefined8 *)(in_x5 + 0x10),uVar3,puVar4);
    _swift_unknownObjectRelease(uVar2);
  }
  FUN_100202170(param_1,in_x4,1,1);
  return;
}

