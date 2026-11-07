// rea decompile_all
// name: FUN_1004b5168
// address: 0x1004b5168
// body: available
// range: 0x1004b5168-0x1004b53ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001004b5324) */

void FUN_1004b5168(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  undefined8 *puVar6;
  long unaff_x21;
  undefined8 uVar7;
  code *pcVar8;
  undefined1 auStack_178 [104];
  undefined8 local_110;
  long lStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  undefined8 local_a0;
  long lStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  local_80 = 0;
  lStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  cVar5 = *(char *)(param_1 + 0xc);
  puVar6 = param_1;
  if (cVar5 == '\a') {
    uVar1 = param_1[3];
    uVar3 = param_1[4];
    lVar2 = param_1[1];
    uVar4 = param_1[2];
    uVar7 = *param_1;
    uStack_e0 = param_1[6];
    uStack_e8 = param_1[5];
    uStack_d0 = param_1[8];
    local_d8 = param_1[7];
    uStack_c0 = param_1[10];
    local_c8 = param_1[9];
    local_b8 = param_1[0xb];
    local_b0 = 7;
    local_110 = uVar7;
    lStack_108 = lVar2;
    local_100 = uVar4;
    uStack_f8 = uVar1;
    local_f0 = uVar3;
    FUN_1004b8d5c(&local_110,auStack_178);
    puVar6 = (undefined8 *)0x0;
    FUN_1004976dc(0,0,0,0,0);
    local_a0 = uVar7;
    lStack_98 = lVar2;
    local_90 = uVar4;
    uStack_88 = uVar1;
    local_80 = uVar3;
  }
  pcVar8 = *(code **)(param_4 + 0x198);
  FUN_1004ba5a8();
  (*pcVar8)(&local_a0,&DAT_1009c8e18,puVar6,param_3,param_4);
  uVar7 = local_80;
  uVar4 = uStack_88;
  uVar3 = local_90;
  lVar2 = lStack_98;
  uVar1 = local_a0;
  if ((unaff_x21 == 0) && (lStack_98 != 0)) {
    if (cVar5 == -1) {
      _swift_bridgeObjectRetain(lStack_98);
      _swift_bridgeObjectRetain(uVar3);
      FUN_100008184(uVar4,uVar7);
    }
    else {
      pcVar8 = *(code **)(param_4 + 8);
      _swift_bridgeObjectRetain(lStack_98);
      _swift_bridgeObjectRetain(uVar3);
      FUN_100008184(uVar4,uVar7);
      (*pcVar8)(param_3,param_4);
    }
    FUN_1004976dc(local_a0,lStack_98,local_90,uStack_88,local_80);
    local_c8 = param_1[9];
    uStack_d0 = param_1[8];
    local_b8 = param_1[0xb];
    uStack_c0 = param_1[10];
    local_b0 = *(undefined1 *)(param_1 + 0xc);
    lStack_108 = param_1[1];
    local_110 = *param_1;
    uStack_f8 = param_1[3];
    local_100 = param_1[2];
    uStack_e8 = param_1[5];
    local_f0 = param_1[4];
    local_d8 = param_1[7];
    uStack_e0 = param_1[6];
    *param_1 = uVar1;
    param_1[1] = lVar2;
    param_1[2] = uVar3;
    param_1[3] = uVar4;
    param_1[4] = uVar7;
    *(undefined1 *)(param_1 + 0xc) = 7;
    FUN_100040bb4(&local_110,&DAT_100aa1380,&DAT_100830240);
  }
  else {
    FUN_1004976dc(local_a0,lStack_98,local_90,uStack_88,local_80);
  }
  return;
}

