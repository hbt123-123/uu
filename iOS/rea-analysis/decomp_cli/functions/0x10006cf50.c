// rea decompile_all
// name: FUN_10006cf50
// address: 0x10006cf50
// body: available
// range: 0x10006cf50-0x10006cff3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10006cf50(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *unaff_x20;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar2 = (undefined8 *)0xb8;
  if (PTR__swift_coroFrameAlloc_1000f0770 == (undefined *)0x0) {
    puVar2 = _malloc(0xb8);
  }
  else {
    _swift_coroFrameAlloc(0xb8,0xf60a);
  }
  *param_1 = puVar2;
  puVar2[0x16] = unaff_x20;
  uVar1 = *unaff_x20;
  uVar6 = unaff_x20[3];
  uVar5 = unaff_x20[2];
  puVar2[1] = unaff_x20[1];
  *puVar2 = uVar1;
  puVar2[3] = uVar6;
  puVar2[2] = uVar5;
  uVar1 = unaff_x20[4];
  uVar5 = unaff_x20[5];
  uVar7 = unaff_x20[7];
  uVar6 = unaff_x20[6];
  uVar8 = unaff_x20[8];
  uVar10 = unaff_x20[0xb];
  uVar9 = unaff_x20[10];
  puVar2[9] = unaff_x20[9];
  puVar2[8] = uVar8;
  puVar2[0xb] = uVar10;
  puVar2[10] = uVar9;
  puVar2[5] = uVar5;
  puVar2[4] = uVar1;
  puVar2[7] = uVar7;
  puVar2[6] = uVar6;
  uVar1 = unaff_x20[0xc];
  uVar5 = unaff_x20[0xd];
  uVar7 = unaff_x20[0xf];
  uVar6 = unaff_x20[0xe];
  uVar9 = unaff_x20[0x11];
  uVar8 = unaff_x20[0x10];
  puVar2[0x12] = unaff_x20[0x12];
  puVar2[0xf] = uVar7;
  puVar2[0xe] = uVar6;
  puVar2[0x11] = uVar9;
  puVar2[0x10] = uVar8;
  puVar2[0xd] = uVar5;
  puVar2[0xc] = uVar1;
  auVar4 = NEON_ext(*(undefined1 (*) [16])(puVar2 + 0xd),*(undefined1 (*) [16])(puVar2 + 0xd),8,1);
  puVar2[0x14] = auVar4._8_8_;
  puVar2[0x13] = auVar4._0_8_;
  puVar3 = puVar2;
  FUN_10006cdcc();
  puVar2[0x15] = puVar3;
  auVar4._8_8_ = puVar2 + 0x15;
  auVar4._0_8_ = FUN_10006cff4;
  return auVar4;
}

