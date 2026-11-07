// rea decompile_all
// name: FUN_1004662ec
// address: 0x1004662ec
// body: available
// range: 0x1004662ec-0x1004664a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100466438) */

void FUN_1004662ec(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x21;
  code *pcVar12;
  long lVar13;
  undefined8 local_90;
  ulong uStack_88;
  long local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  local_70 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  lVar13 = param_1[2];
  puVar6 = param_1;
  if (lVar13 != 0) {
    uVar7 = param_1[3];
    uVar1 = param_1[4];
    uVar10 = *param_1;
    uVar8 = param_1[1];
    _swift_bridgeObjectRetain(lVar13);
    FUN_100008184(uVar7,uVar1);
    puVar6 = (undefined8 *)0x0;
    FUN_100139ca0(0,0,0,0,0);
    uStack_88 = uVar8 & 1;
    local_90 = uVar10;
    local_80 = lVar13;
    uStack_78 = uVar7;
    local_70 = uVar1;
  }
  pcVar12 = *(code **)(param_4 + 0x198);
  FUN_100467108();
  (*pcVar12)(&local_90,&DAT_1009c4d58,puVar6,param_3,param_4);
  uVar5 = local_70;
  uVar4 = uStack_78;
  lVar3 = local_80;
  uVar2 = uStack_88;
  uVar1 = local_90;
  uVar7 = local_90;
  uVar8 = uStack_88;
  lVar9 = local_80;
  uVar10 = uStack_78;
  uVar11 = local_70;
  if ((unaff_x21 == 0) && (local_80 != 0)) {
    if (lVar13 == 0) {
      _swift_bridgeObjectRetain(local_80);
      FUN_100008184(uVar4,uVar5);
    }
    else {
      pcVar12 = *(code **)(param_4 + 8);
      _swift_bridgeObjectRetain(local_80);
      FUN_100008184(uVar4,uVar5);
      (*pcVar12)(param_3,param_4);
    }
    FUN_100139ca0(local_90,uStack_88,local_80,uStack_78,local_70);
    uVar7 = *param_1;
    uVar8 = param_1[1];
    lVar9 = param_1[2];
    uVar10 = param_1[3];
    uVar11 = param_1[4];
    *param_1 = uVar1;
    param_1[1] = uVar2 & 1;
    param_1[2] = lVar3;
    param_1[3] = uVar4;
    param_1[4] = uVar5;
  }
  FUN_100139ca0(uVar7,uVar8,lVar9,uVar10,uVar11);
  return;
}

