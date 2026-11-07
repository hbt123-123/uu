// rea decompile_all
// name: FUN_100623288
// address: 0x100623288
// body: available
// range: 0x100623288-0x10062348f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100623288(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,long param_10,undefined8 param_11)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long alStack_e0 [2];
  long local_d0 [4];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 auStack_80 [16];
  long local_70;
  
  uVar4 = 0xff;
  local_d0[0] = param_10;
  local_b0 = param_9;
  local_d0[2] = param_6;
  local_d0[3] = param_7;
  local_a8 = param_4;
  local_98 = param_8;
  local_90 = param_1;
  local_88 = param_5;
  _swift_getAssociatedTypeWitness
            (0xff,param_10,param_9,PTR___sStTL_100995a48,PTR___s7ElementStTl_100995700);
  uVar5 = 0xff;
  local_a0 = param_11;
  _swift_getAssociatedTypeWitness
            (0xff,param_11,uVar4,0x100904f48,&TargetProtocolRequirement_100904f50);
  lVar6 = 0;
  FUN_100616300(0,uVar5);
  lVar12 = *(long *)(lVar6 + -8);
  puVar9 = (undefined8 *)((long)local_d0 - (*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar7 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar11 = *(long *)(lVar7 + -8);
  lVar10 = (long)puVar9 - (*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  __s8Dispatch0A13WorkItemFlagsV7barrierACvgZ(lVar10);
  local_70 = param_3 + 0x10;
  __sSo17OS_dispatch_queueC8DispatchE4sync5flags7executexAC0D13WorkItemFlagsV_xyKXEtKlF
            (lVar10,FUN_1006278f4,auStack_80,PTR___sytN_100995e90 + 8);
  (**(code **)(lVar11 + 8))(lVar10,lVar7);
  local_d0[1] = lVar12;
  (**(code **)(lVar12 + 0x10))(puVar9,local_90,lVar6);
  puVar8 = puVar9;
  _swift_getEnumCaseMultiPayload(puVar9,lVar6);
  uVar4 = local_a0;
  if ((int)puVar8 == 1) {
    uVar4 = *puVar9;
    FUN_100616260(uVar4);
    _swift_errorRelease(uVar4);
  }
  else {
    *(undefined8 *)(lVar10 + -8) = local_a0;
    lVar7 = local_d0[0];
    *(long *)(lVar10 + -0x10) = local_d0[0];
    uVar3 = local_88;
    uVar2 = local_98;
    uVar1 = local_a8;
    uVar5 = local_b0;
    FUN_100622be8(local_a8,local_88,param_2,param_3,local_d0[2],local_d0[3],local_98,local_b0);
    FUN_100622fcc(param_2,param_3,uVar1,uVar3,uVar2,uVar5,lVar7,uVar4);
    (**(code **)(local_d0[1] + 8))(puVar9,lVar6);
  }
  return;
}

