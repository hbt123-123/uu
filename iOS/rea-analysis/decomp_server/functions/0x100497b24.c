// rea decompile_all
// name: FUN_100497b24
// address: 0x100497b24
// body: available
// range: 0x100497b24-0x100497c23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100497b24(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *unaff_x20;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  
  puVar1 = (undefined8 *)0x120;
  if (PTR__swift_coroFrameAlloc_100995ec0 == (undefined *)0x0) {
    puVar1 = _malloc(0x120);
  }
  else {
    _swift_coroFrameAlloc(0x120,0x636);
  }
  *param_1 = puVar1;
  puVar1[0x23] = unaff_x20;
  uVar6 = *unaff_x20;
  uVar7 = unaff_x20[1];
  uVar5 = unaff_x20[2];
  uVar8 = unaff_x20[3];
  uVar9 = unaff_x20[5];
  uVar4 = unaff_x20[4];
  uVar2 = unaff_x20[6];
  uVar11 = unaff_x20[8];
  uVar10 = unaff_x20[7];
  uVar3 = unaff_x20[9];
  if ((((uVar4 < 0xffffffff00000000) || (uVar10 >> 0x20 != 0)) ||
      ((uVar3 & 0x3000000000000000) != 0)) &&
     (((uint)(uVar3 >> 0x3b) & 6) == 0 && -1 < (long)uVar10)) {
    *puVar1 = uVar6;
    puVar1[1] = uVar7;
    puVar1[2] = uVar5;
    puVar1[3] = uVar8;
    puVar1[5] = uVar9;
    puVar1[4] = uVar4;
    puVar1[6] = uVar2;
    puVar1[8] = uVar11;
    puVar1[7] = uVar10;
    puVar1[9] = uVar3;
    FUN_10049d5cc();
  }
  else {
    uVar5 = 0;
    uVar6 = 0;
    uVar7 = 0;
    uVar4 = 2;
    uVar8 = 0xc000000000000000;
  }
  puVar1[0x14] = uVar6;
  puVar1[0x15] = uVar7;
  puVar1[0x16] = uVar5;
  puVar1[0x17] = uVar8;
  *(char *)(puVar1 + 0x18) = (char)uVar4;
  auVar12._8_8_ = puVar1 + 0x14;
  auVar12._0_8_ = FUN_100497c24;
  return auVar12;
}

