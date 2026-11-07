// rea decompile_all
// name: FUN_1000a1bdc
// address: 0x1000a1bdc
// body: available
// range: 0x1000a1bdc-0x1000a1e33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000a1bdc(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  long extraout_x8;
  undefined1 *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_c0 [8];
  undefined8 local_b8;
  undefined8 *puStack_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_90;
  long lStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  long lStack_68;
  
  puVar1 = &DAT_100a76918;
  FUN_100004bb4(&DAT_100a76918,&DAT_10080d640);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = auStack_c0 + -extraout_x8;
  FUN_1000a1e34(param_3,puVar5);
  lVar2 = 0;
  __sScPMa();
  lVar8 = *(long *)(lVar2 + -8);
  puVar3 = puVar5;
  (**(code **)(lVar8 + 0x30))(puVar5,1,lVar2);
  if ((int)puVar3 == 1) {
    FUN_1000a1e84(puVar5);
    uVar6 = 0x1c00;
    lVar2 = *(long *)(param_5 + 0x10);
  }
  else {
    __sScP8rawValues5UInt8Vvg();
    (**(code **)(lVar8 + 8))(puVar5,lVar2);
    uVar6 = (ulong)puVar3 & 0xff | 0x1c00;
    lVar2 = *(long *)(param_5 + 0x10);
  }
  if (lVar2 == 0) {
    lVar8 = 0;
    lVar7 = 0;
  }
  else {
    lVar7 = *(long *)(param_5 + 0x18);
    lVar8 = lVar2;
    _swift_getObjectType();
    _swift_unknownObjectRetain(lVar2);
    __sScA15unownedExecutorScevgTj();
    _swift_unknownObjectRelease(lVar2);
  }
  if (param_2 == 0) {
    FUN_1000a1e84(param_3);
    puVar1 = &DAT_10099a118;
    _swift_allocObject(&DAT_10099a118,0x20,7);
    *(undefined8 *)(puVar1 + 0x10) = param_4;
    *(long *)(puVar1 + 0x18) = param_5;
    if (lVar7 == 0 && lVar8 == 0) {
      puVar4 = (undefined8 *)0x0;
    }
    else {
      local_80 = 0;
      uStack_78 = 0;
      puVar4 = &local_80;
      local_70 = lVar8;
      lStack_68 = lVar7;
    }
    _swift_task_create(uVar6,puVar4,PTR___sytN_100995e90 + 8,&DAT_10080b3e0,puVar1);
  }
  else {
    __sSS11utf8CStrings15ContiguousArrayVys4Int8VGvg(param_1,param_2);
    puVar1 = &DAT_10099a140;
    _swift_allocObject(&DAT_10099a140,0x20,7);
    *(undefined8 *)(puVar1 + 0x10) = param_4;
    *(long *)(puVar1 + 0x18) = param_5;
    _swift_retain(param_5);
    if (lVar7 == 0 && lVar8 == 0) {
      puStack_b0 = (undefined8 *)0x0;
    }
    else {
      local_a0 = 0;
      uStack_98 = 0;
      puStack_b0 = &local_a0;
      local_90 = lVar8;
      lStack_88 = lVar7;
    }
    local_b8 = 7;
    local_a8 = param_1 + 0x20;
    _swift_task_create(uVar6,&local_b8,PTR___sytN_100995e90 + 8,&DAT_10080b3e8,puVar1);
    _swift_release(param_1);
    FUN_1000a1e84(param_3);
    _swift_bridgeObjectRelease(param_2);
    _swift_release(param_5);
  }
  return;
}

