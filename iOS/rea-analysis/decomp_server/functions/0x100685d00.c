// rea decompile_all
// name: FUN_100685d00
// address: 0x100685d00
// body: available
// range: 0x100685d00-0x100685d87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100685d00(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  
  puVar1 = (undefined8 *)0x160;
  if (PTR__swift_coroFrameAlloc_100995ec0 == (undefined *)0x0) {
    puVar1 = _malloc(0x160);
  }
  else {
    _swift_coroFrameAlloc(0x160,0x1e0b);
  }
  *param_1 = puVar1;
  puVar1[0x2a] = param_2;
  puVar1[0x2b] = unaff_x20;
  uVar3 = unaff_x20[1];
  uVar2 = *unaff_x20;
  uVar5 = unaff_x20[3];
  uVar4 = unaff_x20[2];
  uVar7 = unaff_x20[5];
  uVar6 = unaff_x20[4];
  *(undefined4 *)((long)puVar1 + 0x2f) = *(undefined4 *)((long)unaff_x20 + 0x2f);
  puVar1[3] = uVar5;
  puVar1[2] = uVar4;
  puVar1[5] = uVar7;
  puVar1[4] = uVar6;
  puVar1[1] = uVar3;
  *puVar1 = uVar2;
  FUN_10068573c(puVar1 + 0x15,param_2);
  auVar8._8_8_ = puVar1 + 0x15;
  auVar8._0_8_ = thunk_FUN_100685d88;
  return auVar8;
}

