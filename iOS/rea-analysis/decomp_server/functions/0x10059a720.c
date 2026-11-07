// rea decompile_all
// name: thunk_FUN_1005a7294
// address: 0x10059a720
// body: available
// range: 0x10059a720-0x10059a723 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint thunk_FUN_1005a7294(ulong *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined1 auStack_c0 [32];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  uVar5 = param_1[5];
  uVar3 = param_1[4];
  uVar9 = param_1[7];
  uVar7 = param_1[6];
  uVar6 = param_2[5];
  uVar4 = param_2[4];
  uVar10 = param_2[7];
  lVar8 = param_2[6];
  uStack_a0 = uVar4;
  uStack_98 = uVar6;
  lStack_90 = lVar8;
  uStack_88 = uVar10;
  uStack_80 = uVar3;
  uStack_78 = uVar5;
  uStack_70 = uVar7;
  uStack_68 = uVar9;
  if (uVar7 == 0) {
    if (lVar8 != 0) goto LAB_1005a737c;
    FUN_10007f314(&uStack_80,auStack_c0,&DAT_100aad070,&DAT_10083cc18);
    FUN_10007f314(&uStack_a0,auStack_c0,&DAT_100aad070,&DAT_10083cc18);
    FUN_100541944(uVar3,uVar5,0,uVar9);
LAB_1005a7438:
    uVar3 = *param_1;
    FUN_1005707f8(uVar3,*param_2);
    if ((uVar3 & 1) != 0) {
      uVar3 = param_1[1];
      FUN_1000094a4(uVar3,param_1[2],param_2[1],param_2[2]);
      if ((uVar3 & 1) != 0) {
        uVar3 = param_1[3];
        thunk_FUN_100511c8c(uVar3,param_2[3]);
        uVar1 = (uint)uVar3;
        goto LAB_1005a746c;
      }
    }
  }
  else if (lVar8 == 0) {
LAB_1005a737c:
    FUN_10007f314(&uStack_80,auStack_c0,&DAT_100aad070,&DAT_10083cc18);
    FUN_10007f314(&uStack_a0,auStack_c0,&DAT_100aad070,&DAT_10083cc18);
    FUN_100541944(uVar3,uVar5,uVar7,uVar9);
    FUN_100541944(uVar4,uVar6,lVar8,uVar10);
  }
  else {
    FUN_10007f314(&uStack_80,auStack_c0,&DAT_100aad070,&DAT_10083cc18);
    FUN_10007f314(&uStack_a0,auStack_c0,&DAT_100aad070,&DAT_10083cc18);
    uVar2 = uVar3;
    FUN_1005a7724(uVar3,uVar5,uVar7,uVar9,uVar4,uVar6,lVar8,uVar10);
    FUN_100541944(uVar4,uVar6,lVar8,uVar10);
    FUN_100541944(uVar3,uVar5,uVar7,uVar9);
    if ((uVar2 & 1) != 0) goto LAB_1005a7438;
  }
  uVar1 = 0;
LAB_1005a746c:
  return uVar1 & 1;
}

