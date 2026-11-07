// rea decompile_all
// name: FUN_10050ffe8
// address: 0x10050ffe8
// body: available
// range: 0x10050ffe8-0x1005101c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10050ffe8(long *param_1,long *param_2,long param_3,undefined8 param_4,code *param_5,
                  undefined8 param_6,long *param_7)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
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
  
  lVar10 = *param_1;
  lVar7 = param_1[2];
  plVar8 = *(long **)(lVar10 + 0x50);
  lVar1 = plVar8[2];
  lVar2 = plVar8[3];
  uVar3 = 0xff;
  local_90 = param_2;
  _swift_getAssociatedTypeWitness(0xff,lVar2,lVar1,0x100900ffc,&TargetProtocolRequirement_10090100c)
  ;
  uVar4 = 0;
  __sSaMa(0,uVar3);
  puVar5 = PTR___sSayxGSlsMc_1009958b0;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_1009958b0,uVar4);
  __sSlsE7isEmptySbvg(uVar4,puVar5);
  if ((uVar4 & 1) == 0) {
    uVar9 = *(undefined8 *)(lVar10 + 0x58);
    _swift_getWitnessTable(param_4,plVar8);
    local_78 = *(long **)(param_3 + 8);
    uVar3 = 0;
    local_90 = plVar8;
    local_88 = uVar9;
    local_80 = param_4;
    FUN_100541da4(0,&local_90);
    local_70 = &PTR_PTR_1009d0c40;
    local_90 = param_1;
    local_78 = (long *)uVar3;
    (*param_5)(&local_c0,&local_90,param_2,lVar1,lVar2);
    local_78 = plVar8;
    _swift_getWitnessTable(param_6,plVar8);
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
    uVar9 = *(undefined8 *)(lVar10 + 0x58);
  }
  pcVar6 = (code *)auStack_e0;
  local_90 = param_7;
  local_70 = (undefined **)param_6;
  (**(code **)(param_3 + 0x20))(pcVar6,uVar9,param_3);
  FUN_10050fb8c(&local_90,&local_c0);
  FUN_10050f90c(&local_c0,lVar7);
  FUN_100040bb4(&local_90,&DAT_100aaa288,&DAT_100836090);
  (*pcVar6)(auStack_e0,0);
  return;
}

