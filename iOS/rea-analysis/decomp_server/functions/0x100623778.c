// rea decompile_all
// name: FUN_100623778
// address: 0x100623778
// body: available
// range: 0x100623778-0x100623927 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100623778(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  void *aBlock;
  undefined *puVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined1 auStack_a0 [16];
  long local_90;
  undefined *local_88;
  undefined8 local_80;
  code *local_78;
  undefined *puStack_70;
  code *local_68;
  undefined *local_60;
  
  lVar2 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar7 = *(long *)(lVar2 + -8);
  puVar6 = auStack_a0 + -(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  __s8Dispatch0A13WorkItemFlagsV7barrierACvgZ(puVar6);
  local_90 = param_3 + 0x10;
  __sSo17OS_dispatch_queueC8DispatchE4sync5flags7executexAC0D13WorkItemFlagsV_xyKXEtKlF
            (puVar6,FUN_1006278f4,auStack_a0,PTR___sytN_100995e90 + 8);
  (**(code **)(lVar7 + 8))(puVar6,lVar2);
  puVar3 = &DAT_1009e0c28;
  _swift_allocObject(&DAT_1009e0c28,0x28,7);
  *(long *)(puVar3 + 0x10) = param_3 + 0x10;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  *(undefined8 *)(puVar3 + 0x20) = param_5;
  puVar4 = &DAT_1009e0c50;
  _swift_allocObject(&DAT_1009e0c50,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_1006274bc;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  local_68 = thunk_FUN_1000f4ed4;
  local_88 = PTR___NSConcreteStackBlock_100995490;
  local_80 = 0x42000000;
  local_78 = FUN_1000fcdcc;
  puStack_70 = &DAT_1009e0c68;
  local_60 = puVar4;
  aBlock = __Block_copy(&local_88);
  puVar5 = local_60;
  _swift_retain(param_4);
  _swift_bridgeObjectRetain(param_5);
  _swift_retain(puVar4);
  _swift_release(puVar5);
  _dispatch_sync(param_2,aBlock);
  __Block_release(aBlock);
  puVar5 = puVar4;
  _swift_isEscapingClosureAtFileLocation(puVar4,"",0x9a,0x118,0x1a,1);
  _swift_release(puVar3);
  _swift_release(puVar4);
  if (((ulong)puVar5 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100623928);
  (*pcVar1)();
}

