// rea decompile_all
// name: FUN_1005b6560
// address: 0x1005b6560
// body: available
// range: 0x1005b6560-0x1005b66ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001005b6698) */

void FUN_1005b6560(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  uint uVar8;
  long unaff_x21;
  ulong uVar9;
  code *pcVar10;
  long local_78;
  long lStack_70;
  ulong local_68;
  
  local_68 = 0;
  local_78 = 0;
  lStack_70 = 0;
  uVar9 = param_1[2];
  bVar5 = ((uVar9 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0;
  uVar8 = (uint)*(byte *)(param_1 + 3);
  plVar6 = param_1;
  if ((!bVar5 || uVar8 != 0xff) && ((uint)(uVar9 >> 0x3c) & 3 | (uVar8 & 1) << 2) == 4) {
    lVar1 = *param_1;
    lVar3 = param_1[1];
    FUN_10051feb8(lVar1,lVar3,uVar9,uVar8 & 1);
    plVar6 = (long *)0x0;
    FUN_100483534(0,0,0);
    local_78 = lVar1;
    lStack_70 = lVar3;
    local_68 = uVar9;
  }
  pcVar10 = *(code **)(param_4 + 0x198);
  FUN_100519a60();
  (*pcVar10)(&local_78,&DAT_1009d6d28,plVar6,param_3,param_4);
  uVar9 = local_68;
  lVar3 = lStack_70;
  lVar1 = local_78;
  if ((unaff_x21 == 0) && (local_78 != 0)) {
    if (bVar5 && uVar8 == 0xff) {
      _swift_bridgeObjectRetain();
      FUN_100008184(lVar3,uVar9);
    }
    else {
      pcVar10 = *(code **)(param_4 + 8);
      _swift_bridgeObjectRetain();
      FUN_100008184(lVar3,uVar9);
      (*pcVar10)(param_3,param_4);
    }
    FUN_100483534(local_78,lStack_70,local_68);
    lVar2 = *param_1;
    lVar4 = param_1[1];
    lVar7 = param_1[2];
    *param_1 = lVar1;
    param_1[1] = lVar3;
    param_1[2] = uVar9;
    lVar1 = param_1[3];
    *(undefined1 *)(param_1 + 3) = 1;
    FUN_10051ff3c(lVar2,lVar4,lVar7,(char)lVar1);
  }
  else {
    FUN_100483534(local_78,lStack_70,local_68);
  }
  return;
}

