// rea decompile_all
// name: FUN_100607aa4
// address: 0x100607aa4
// body: available
// range: 0x100607aa4-0x100607c1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100607aa4(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long *unaff_x20;
  undefined1 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_e0 [16];
  undefined8 auStack_d0 [2];
  undefined1 auStack_c0 [16];
  undefined1 auStack_88 [32];
  long local_68;
  
  lVar9 = *unaff_x20;
  lVar2 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar8 = *(long *)(lVar2 + -8);
  lVar1 = -(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_c0 + lVar1;
  local_68 = 0;
  __s8Dispatch0A13WorkItemFlagsV7barrierACvgZ(puVar6);
  puVar4 = PTR___sytN_100995e90;
  __sSo17OS_dispatch_queueC8DispatchE4sync5flags7executexAC0D13WorkItemFlagsV_xyKXEtKlF
            (puVar6,FUN_1006090cc,auStack_c0,PTR___sytN_100995e90 + 8);
  (**(code **)(lVar8 + 8))(puVar6,lVar2);
  lVar2 = local_68;
  if (local_68 != 0) {
    _swift_beginAccess(local_68 + 0x10,auStack_88,0,0);
    uVar7 = *(undefined8 *)(lVar2 + 0x10);
    uVar5 = *(undefined8 *)(lVar9 + 0x78);
    *(undefined8 *)((long)auStack_d0 + lVar1) = uVar5;
    *(undefined8 *)((long)auStack_d0 + lVar1 + 8) = param_1;
    uVar3 = 0x4000001;
    _swift_getFunctionTypeMetadata1(0x4000001,uVar5,puVar4 + 8);
    uVar5 = 0;
    __sSaMa(0,uVar3);
    _swift_retain(lVar2);
    _swift_bridgeObjectRetain(uVar7);
    puVar4 = PTR___sSayxGSTsMc_100995898;
    _swift_getWitnessTable(PTR___sSayxGSTsMc_100995898,uVar5);
    __sSTsE7forEachyyy7ElementQzKXEKF(FUN_1006090e8,auStack_e0 + lVar1,uVar5,puVar4);
    _swift_bridgeObjectRelease(uVar7);
    _swift_release_n(lVar2,2);
  }
  return;
}

