// rea decompile_all
// name: FUN_10041cd7c
// address: 0x10041cd7c
// body: available
// range: 0x10041cd7c-0x10041cf1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010041ced4) */

void FUN_10041cd7c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x21;
  code *pcVar11;
  ulong uVar12;
  undefined8 local_80;
  long lStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  lStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uVar12 = *(ulong *)(param_1 + 0x30);
  lVar9 = param_1;
  if ((uVar12 >> 0x3d & 1) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    lVar6 = *(long *)(param_1 + 0x18);
    FUN_10012ac6c(uVar2,lVar6,uVar1,uVar5,uVar12);
    lVar9 = 0;
    FUN_1004338a4(0,0,0,0);
    local_80 = uVar2;
    lStack_78 = lVar6;
    local_70 = uVar1;
    uStack_68 = uVar5;
  }
  pcVar11 = *(code **)(param_4 + 0x198);
  FUN_10042e900();
  (*pcVar11)(&local_80,&DAT_1009be498,lVar9,param_3,param_4);
  uVar5 = uStack_68;
  uVar2 = local_70;
  lVar9 = lStack_78;
  uVar1 = local_80;
  if ((unaff_x21 == 0) && (lStack_78 != 0)) {
    if ((uVar12 & 0x3000000000000000) == 0x3000000000000000) {
      _swift_bridgeObjectRetain(lStack_78);
      FUN_100008184(uVar2,uVar5);
    }
    else {
      pcVar11 = *(code **)(param_4 + 8);
      _swift_bridgeObjectRetain(lStack_78);
      FUN_100008184(uVar2,uVar5);
      (*pcVar11)(param_3,param_4);
    }
    FUN_1004338a4(local_80,lStack_78,local_70,uStack_68);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    uVar8 = *(undefined8 *)(param_1 + 0x28);
    uVar10 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x10) = uVar1;
    *(long *)(param_1 + 0x18) = lVar9;
    *(undefined8 *)(param_1 + 0x20) = uVar2;
    *(undefined8 *)(param_1 + 0x28) = uVar5;
    *(undefined8 *)(param_1 + 0x30) = 0;
    FUN_1000407a8(uVar3,uVar7,uVar4,uVar8,uVar10);
  }
  else {
    FUN_1004338a4(local_80,lStack_78,local_70,uStack_68);
  }
  return;
}

