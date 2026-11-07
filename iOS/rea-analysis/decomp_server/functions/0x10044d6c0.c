// rea decompile_all
// name: FUN_10044d6c0
// address: 0x10044d6c0
// body: available
// range: 0x10044d6c0-0x10044d78b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10044d6c0(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined1 auStack_e0 [64];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  ulong uStack_78;
  undefined8 local_70;
  ulong uStack_68;
  
  uVar2 = *(ulong *)(unaff_x20 + 0x48);
  uStack_68 = *(ulong *)(unaff_x20 + 0x58);
  if ((uStack_68 & 0x3000000000000000) == 0x1000000000000000 &&
      (uStack_68 & 0x3000000000000000 & uVar2) != 0x3000000000000000) {
    uVar3 = *(undefined8 *)(unaff_x20 + 0x50);
    uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x40);
    uVar7 = *(undefined8 *)(unaff_x20 + 0x28);
    uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
    uVar8 = uStack_68 & 0xcfffffffffffffff;
    local_a0 = uVar1;
    uStack_98 = uVar7;
    local_90 = uVar6;
    uStack_88 = uVar5;
    local_80 = uVar4;
    uStack_78 = uVar2;
    local_70 = uVar3;
    FUN_10045e614(&local_a0,auStack_e0);
  }
  else {
    uVar3 = 0;
    uVar1 = 0;
    uVar7 = 0;
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = 0;
    uVar2 = 0;
    uVar8 = 0xc000000000000000;
  }
  *param_1 = uVar1;
  param_1[1] = uVar7;
  param_1[2] = uVar6;
  param_1[3] = uVar5;
  param_1[4] = uVar4;
  param_1[5] = uVar2;
  param_1[6] = uVar3;
  param_1[7] = uVar8;
  return;
}

