// rea decompile_all
// name: FUN_1005190c8
// address: 0x1005190c8
// body: available
// range: 0x1005190c8-0x1005191ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_1005190c8(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 auStack_c0 [16];
  undefined8 auStack_b0 [2];
  undefined1 auStack_a0 [16];
  undefined8 local_90;
  long lStack_88;
  undefined1 *local_80;
  undefined8 uStack_78;
  long local_70;
  undefined1 local_51;
  
  lVar2 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar6 = *(long *)(lVar2 + -8);
  lVar1 = -(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = auStack_a0 + lVar1;
  uVar3 = param_1;
  lVar4 = param_2;
  (**(code **)(param_2 + 0x18))();
  local_51 = 0;
  local_80 = &local_51;
  local_90 = uVar3;
  lStack_88 = lVar4;
  uStack_78 = param_1;
  local_70 = param_2;
  if (DAT_100aa2698 != -1) {
    _swift_once(&DAT_100aa2698,FUN_100518a08);
  }
  __s8Dispatch0A13WorkItemFlagsV7barrierACvgZ(puVar5);
  *(code **)((long)auStack_b0 + lVar1) = FUN_1005196d0;
  *(undefined1 **)((long)auStack_b0 + lVar1 + 8) = auStack_a0;
  __sSo17OS_dispatch_queueC8DispatchE4sync5flags7executexAC0D13WorkItemFlagsV_xyKXEtKlF
            (puVar5,FUN_100177e34,auStack_c0 + lVar1,PTR___sytN_100995e90 + 8);
  (**(code **)(lVar6 + 8))(puVar5,lVar2);
  _swift_bridgeObjectRelease(lVar4);
  return local_51;
}

