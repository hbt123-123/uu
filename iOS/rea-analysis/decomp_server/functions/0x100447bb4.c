// rea decompile_all
// name: FUN_100447bb4
// address: 0x100447bb4
// body: available
// range: 0x100447bb4-0x100447d87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_100447bb4(ulong *param_1,ulong *param_2)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auStack_b8 [24];
  ulong local_a0;
  ulong uStack_98;
  ulong local_90;
  ulong local_80;
  ulong uStack_78;
  ulong local_70;
  
  uVar8 = param_1[1];
  uVar6 = *param_1;
  uVar4 = param_1[2];
  uVar9 = param_2[1];
  uVar7 = *param_2;
  uVar5 = param_2[2];
  bVar1 = (uVar5 & 0x3000000000000000) != 0;
  local_a0 = uVar7;
  uStack_98 = uVar9;
  local_90 = uVar5;
  local_80 = uVar6;
  uStack_78 = uVar8;
  local_70 = uVar4;
  if ((uVar6 < 0xffffffff00000000) || ((uVar4 & 0x3000000000000000) != 0)) {
    if ((!bVar1 && 0xfffffffefffffffe < uVar7) && (bVar1 || uVar7 != 0xfffffffeffffffff))
    goto LAB_100447c7c;
    FUN_10007f314(&local_80,auStack_b8,&DAT_100a9fd10,&DAT_10082a190);
    FUN_10007f314(&local_a0,auStack_b8,&DAT_100a9fd10,&DAT_10082a190);
    uVar3 = uVar6;
    FUN_100447820(uVar6,uVar8,uVar4,uVar7,uVar9,uVar5);
    FUN_10020373c(uVar7,uVar9,uVar5);
    FUN_10020373c(uVar6,uVar8,uVar4);
    if ((uVar3 & 1) != 0) goto LAB_100447d58;
  }
  else {
    if ((!bVar1 && 0xfffffffefffffffe < uVar7) && (bVar1 || uVar7 != 0xfffffffeffffffff)) {
      FUN_10007f314(&local_80,auStack_b8,&DAT_100a9fd10,&DAT_10082a190);
      FUN_10007f314(&local_a0,auStack_b8,&DAT_100a9fd10,&DAT_10082a190);
      FUN_10020373c(uVar6,uVar8,uVar4);
LAB_100447d58:
      uVar4 = param_1[3];
      FUN_1000094a4(uVar4,param_1[4],param_2[3],param_2[4]);
      uVar2 = (uint)uVar4;
      goto LAB_100447d64;
    }
LAB_100447c7c:
    FUN_10007f314(&local_80,auStack_b8,&DAT_100a9fd10,&DAT_10082a190);
    FUN_10007f314(&local_a0,auStack_b8,&DAT_100a9fd10,&DAT_10082a190);
    FUN_10020373c(uVar6,uVar8,uVar4);
    FUN_10020373c(uVar7,uVar9,uVar5);
  }
  uVar2 = 0;
LAB_100447d64:
  return uVar2 & 1;
}

