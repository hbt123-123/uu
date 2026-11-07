// rea decompile_all
// name: FUN_1006894c8
// address: 0x1006894c8
// body: available
// range: 0x1006894c8-0x100689563 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_1006894c8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *self;
  ID IVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  
  puVar1 = (undefined8 *)0x48;
  if (PTR__swift_coroFrameAlloc_100995ec0 == (undefined *)0x0) {
    puVar1 = _malloc(0x48);
  }
  else {
    _swift_coroFrameAlloc(0x48,0x24bd);
  }
  *param_1 = puVar1;
  puVar1[8] = unaff_x20;
  uVar6 = unaff_x20[3];
  uVar5 = unaff_x20[2];
  uVar4 = unaff_x20[5];
  uVar3 = unaff_x20[4];
  uVar8 = unaff_x20[1];
  uVar7 = *unaff_x20;
  *(undefined4 *)((long)puVar1 + 0x2f) = *(undefined4 *)((long)unaff_x20 + 0x2f);
  puVar1[3] = uVar6;
  puVar1[2] = uVar5;
  puVar1[5] = uVar4;
  puVar1[4] = uVar3;
  puVar1[1] = uVar8;
  *puVar1 = uVar7;
  self = puVar1;
  FUN_100688040();
  IVar2 = _objc_msgSend((ID)self,"integerValue");
  puVar1[7] = IVar2;
  auVar9._8_8_ = puVar1 + 7;
  auVar9._0_8_ = FUN_100689564;
  return auVar9;
}

