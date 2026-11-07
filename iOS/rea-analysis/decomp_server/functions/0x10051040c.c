// rea decompile_all
// name: FUN_10051040c
// address: 0x10051040c
// body: available
// range: 0x10051040c-0x1005105c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10051040c(long *param_1,long *param_2,long param_3,undefined8 param_4,code *param_5,
                  undefined8 param_6,long *param_7)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auStack_e0 [32];
  long local_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long local_a0;
  long lStack_98;
  long *local_90;
  undefined8 local_88;
  undefined8 local_80;
  long *local_78;
  undefined **local_70;
  
  lVar9 = *param_1;
  lVar5 = param_1[2];
  plVar6 = *(long **)(lVar9 + 0x50);
  lVar7 = plVar6[2];
  uVar1 = 0;
  local_90 = param_2;
  __sSaMa(0,lVar7);
  puVar2 = PTR___sSayxGSlsMc_1009958b0;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_1009958b0,uVar1);
  __sSlsE7isEmptySbvg(uVar1,puVar2);
  if ((uVar1 & 1) == 0) {
    uVar8 = *(undefined8 *)(lVar9 + 0x58);
    _swift_getWitnessTable(param_4,plVar6);
    local_78 = *(long **)(param_3 + 8);
    uVar3 = 0;
    local_90 = plVar6;
    local_88 = uVar8;
    local_80 = param_4;
    FUN_100541da4(0,&local_90);
    local_70 = &PTR_PTR_1009d0c40;
    local_90 = param_1;
    local_78 = (long *)uVar3;
    (*param_5)(&local_c0,&local_90,param_2,lVar7,plVar6[3],plVar6[4]);
    local_78 = plVar6;
    _swift_getWitnessTable(param_6,plVar6);
    _swift_allocObject(param_7,0x40,7);
    param_7[3] = lStack_b8;
    param_7[2] = local_c0;
    param_7[5] = lStack_a8;
    param_7[4] = lStack_b0;
    param_7[7] = lStack_98;
    param_7[6] = local_a0;
    _swift_retain(param_1);
    _swift_bridgeObjectRetain(param_2);
  }
  else {
    param_7 = (long *)0x0;
    param_6 = 0;
    local_80 = 0;
    local_78 = (long *)0x0;
    local_88 = 0;
    uVar8 = *(undefined8 *)(lVar9 + 0x58);
  }
  pcVar4 = (code *)auStack_e0;
  local_90 = param_7;
  local_70 = (undefined **)param_6;
  (**(code **)(param_3 + 0x20))(pcVar4,uVar8,param_3);
  FUN_10050fb8c(&local_90,&local_c0);
  FUN_10050f90c(&local_c0,lVar5);
  FUN_100040bb4(&local_90,&DAT_100aaa288,&DAT_100836090);
  (*pcVar4)(auStack_e0,0);
  return;
}

