// rea decompile_all
// name: FUN_10044d80c
// address: 0x10044d80c
// body: available
// range: 0x10044d80c-0x10044d907 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10044d80c(undefined8 *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long unaff_x20;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  
  puVar1 = (undefined8 *)0x148;
  if (PTR__swift_coroFrameAlloc_100995ec0 == (undefined *)0x0) {
    puVar1 = _malloc(0x148);
  }
  else {
    _swift_coroFrameAlloc(0x148,0x682a);
  }
  *param_1 = puVar1;
  puVar1[0x28] = unaff_x20;
  uVar4 = *(ulong *)(unaff_x20 + 0x48);
  uVar2 = *(ulong *)(unaff_x20 + 0x58);
  if ((uVar2 & 0x3000000000000000) == 0x1000000000000000 &&
      (uVar2 & 0x3000000000000000 & uVar4) != 0x3000000000000000) {
    uVar5 = *(undefined8 *)(unaff_x20 + 0x50);
    uVar7 = *(undefined8 *)(unaff_x20 + 0x38);
    uVar6 = *(undefined8 *)(unaff_x20 + 0x40);
    uVar9 = *(undefined8 *)(unaff_x20 + 0x28);
    uVar8 = *(undefined8 *)(unaff_x20 + 0x30);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
    puVar1[8] = uVar3;
    puVar1[9] = uVar9;
    uVar10 = uVar2 & 0xcfffffffffffffff;
    puVar1[10] = uVar8;
    puVar1[0xb] = uVar7;
    puVar1[0xc] = uVar6;
    puVar1[0xd] = uVar4;
    puVar1[0xe] = uVar5;
    puVar1[0xf] = uVar2;
    FUN_10045e614(puVar1 + 8,puVar1 + 0x10);
  }
  else {
    uVar5 = 0;
    uVar3 = 0;
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = 0;
    uVar6 = 0;
    uVar4 = 0;
    uVar10 = 0xc000000000000000;
  }
  *puVar1 = uVar3;
  puVar1[1] = uVar9;
  puVar1[2] = uVar8;
  puVar1[3] = uVar7;
  puVar1[4] = uVar6;
  puVar1[5] = uVar4;
  puVar1[6] = uVar5;
  puVar1[7] = uVar10;
  auVar11._8_8_ = puVar1;
  auVar11._0_8_ = FUN_10044d908;
  return auVar11;
}

