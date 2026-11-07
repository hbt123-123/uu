// rea decompile_all
// name: FUN_100624794
// address: 0x100624794
// body: available
// range: 0x100624794-0x1006248bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100624794(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined8 auStack_d0 [4];
  undefined1 auStack_b0 [8];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 auStack_80 [16];
  long local_70;
  
  lVar5 = 0;
  local_a8 = param_4;
  local_a0 = param_5;
  local_98 = param_6;
  local_90 = param_7;
  local_88 = param_8;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar7 = *(long *)(lVar5 + -8);
  lVar1 = -(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_b0 + lVar1;
  __s8Dispatch0A13WorkItemFlagsV7barrierACvgZ(puVar6);
  local_70 = param_3 + 0x10;
  __sSo17OS_dispatch_queueC8DispatchE4sync5flags7executexAC0D13WorkItemFlagsV_xyKXEtKlF
            (puVar6,FUN_1006273d4,auStack_80,PTR___sytN_100995e90 + 8);
  (**(code **)(lVar7 + 8))(puVar6,lVar5);
  *(undefined8 *)((long)auStack_d0 + lVar1 + 8) = param_11;
  *(undefined8 *)((long)auStack_d0 + lVar1 + 0x10) = param_12;
  *(undefined8 *)((long)auStack_d0 + lVar1) = param_10;
  uVar4 = local_98;
  uVar3 = local_a0;
  uVar2 = local_a8;
  FUN_100623f94(local_a8,local_a0,local_98,param_2,param_3,local_90,local_88,param_9);
  *(undefined8 *)((long)auStack_d0 + lVar1 + 0x10) = param_12;
  FUN_1006244c8(param_2,param_3,uVar2,uVar3,uVar4,param_9,param_10,param_11);
  return;
}

