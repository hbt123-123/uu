// rea decompile_all
// name: FUN_1000851e8
// address: 0x1000851e8
// body: available
// range: 0x1000851e8-0x1000853bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000851e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,long param_12)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  undefined8 auStack_a0 [4];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_64;
  
  lVar6 = 0xff;
  auStack_a0[1] = param_1;
  auStack_a0[2] = param_2;
  auStack_a0[3] = param_5;
  local_80 = param_6;
  local_78 = param_7;
  local_70 = param_3;
  local_64 = param_8;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_12 + 8),param_11,0x1000e2040,
             &TargetProtocolRequirement_1000e2048);
  lVar7 = 0;
  __sSqMa(0,lVar6);
  lVar10 = *(long *)(lVar7 + -8);
  puVar9 = (undefined8 *)((long)auStack_a0 - (*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0))
  ;
  _swift_getAssociatedConformanceWitness
            (param_12,param_11,lVar6,0x1000e2090,&TargetProtocolRequirement_1000e20a0);
  pcVar11 = *(code **)(param_12 + 8);
  _swift_bridgeObjectRetain(param_10);
  (*pcVar11)(puVar9,param_9,param_10,lVar6,param_12);
  lVar12 = *(long *)(lVar6 + -8);
  puVar8 = puVar9;
  (**(code **)(lVar12 + 0x30))(puVar9,1,lVar6);
  if ((int)puVar8 == 1) {
    (**(code **)(lVar10 + 8))(puVar9,lVar7);
    FUN_100054664();
    _swift_allocError(&DAT_1000fa8c8,puVar9,0,0);
    uVar2 = local_80;
    uVar1 = auStack_a0[3];
    *puVar9 = auStack_a0[3];
    puVar9[1] = uVar2;
    uVar4 = local_70;
    uVar3 = local_78;
    puVar9[2] = local_78;
    uVar5 = local_64;
    *(char *)(puVar9 + 3) = (char)local_64;
    puVar9[4] = param_9;
    puVar9[5] = param_10;
    puVar9[6] = auStack_a0[2];
    puVar9[7] = uVar4;
    puVar9[8] = param_4;
    puVar9[9] = 0;
    *(undefined1 *)(puVar9 + 10) = 0xd;
    _swift_willThrow();
    _swift_bridgeObjectRetain(param_10);
    _swift_bridgeObjectRetain(uVar1);
    FUN_100086764(uVar2,uVar3,uVar5);
    _swift_bridgeObjectRetain(uVar4);
    _swift_bridgeObjectRetain(param_4);
  }
  else {
    (**(code **)(lVar12 + 0x20))(auStack_a0[1],puVar9,lVar6);
  }
  return;
}

