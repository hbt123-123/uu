// rea decompile_all
// name: FUN_1003206cc
// address: 0x1003206cc
// body: available
// range: 0x1003206cc-0x10032096f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003206cc(long param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
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
  
  puVar1 = &DAT_100a85fc8;
  FUN_100004bb4(&DAT_100a85fc8,&DAT_10081a5c8);
  puVar6 = auStack_c0 + -(*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_10007f314(param_3,puVar6,&DAT_100a85fc8,&DAT_10081a5c8);
  lVar2 = 0;
  __sScPMa();
  lVar9 = *(long *)(lVar2 + -8);
  puVar3 = puVar6;
  (**(code **)(lVar9 + 0x30))(puVar6,1,lVar2);
  uVar8 = param_5;
  _swift_retain(param_5);
  if ((int)puVar3 == 1) {
    FUN_100040bb4(puVar6,&DAT_100a85fc8,&DAT_10081a5c8);
    uVar8 = 0x1c00;
  }
  else {
    __sScP8rawValues5UInt8Vvg();
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar8 = uVar8 & 0xff | 0x1c00;
  }
  lVar2 = *(long *)(param_5 + 0x10);
  lVar9 = *(long *)(param_5 + 0x18);
  _swift_unknownObjectRetain(lVar2);
  _swift_release(param_5);
  if (lVar2 == 0) {
    lVar7 = 0;
    lVar9 = 0;
  }
  else {
    lVar7 = lVar2;
    _swift_getObjectType();
    __sScA15unownedExecutorScevgTj();
    _swift_unknownObjectRelease(lVar2);
  }
  if (param_2 == 0) {
    FUN_100040bb4(param_3,&DAT_100a85fc8,&DAT_10081a5c8);
    puVar1 = &DAT_1009b2020;
    _swift_allocObject(&DAT_1009b2020,0x20,7);
    *(undefined8 *)(puVar1 + 0x10) = param_4;
    *(ulong *)(puVar1 + 0x18) = param_5;
    puVar4 = &DAT_100a82c68;
    FUN_100004bb4(&DAT_100a82c68,&DAT_100817228);
    if (lVar9 == 0 && lVar7 == 0) {
      puVar5 = (undefined8 *)0x0;
    }
    else {
      local_80 = 0;
      uStack_78 = 0;
      puVar5 = &local_80;
      local_70 = lVar7;
      lStack_68 = lVar9;
    }
    _swift_task_create(uVar8,puVar5,puVar4,&DAT_10081a7a0,puVar1);
  }
  else {
    __sSS11utf8CStrings15ContiguousArrayVys4Int8VGvg(param_1,param_2);
    puVar1 = &DAT_1009b2048;
    _swift_allocObject(&DAT_1009b2048,0x20,7);
    *(undefined8 *)(puVar1 + 0x10) = param_4;
    *(ulong *)(puVar1 + 0x18) = param_5;
    _swift_retain(param_5);
    puVar4 = &DAT_100a82c68;
    FUN_100004bb4(&DAT_100a82c68,&DAT_100817228);
    puStack_b0 = (undefined8 *)0x0;
    if (lVar9 != 0 || lVar7 != 0) {
      local_a0 = 0;
      uStack_98 = 0;
      puStack_b0 = &local_a0;
      local_90 = lVar7;
      lStack_88 = lVar9;
    }
    local_b8 = 7;
    local_a8 = param_1 + 0x20;
    _swift_task_create(uVar8,&local_b8,puVar4,&DAT_10081a7a8,puVar1);
    _swift_release(param_5);
    _swift_release(param_1);
    FUN_100040bb4(param_3,&DAT_100a85fc8,&DAT_10081a5c8);
    _swift_bridgeObjectRelease(param_2);
  }
  return;
}

