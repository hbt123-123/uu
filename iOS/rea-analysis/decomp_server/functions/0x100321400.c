// rea decompile_all
// name: FUN_100321400
// address: 0x100321400
// body: available
// range: 0x100321400-0x10032164b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_100321400(long param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong param_5,
                   undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined1 auStack_a0 [8];
  ulong local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_80;
  long lStack_78;
  undefined8 local_70;
  ulong uStack_68;
  
  puVar1 = &DAT_100a85fc8;
  local_70 = param_4;
  uStack_68 = param_5;
  FUN_100004bb4(&DAT_100a85fc8,&DAT_10081a5c8);
  puVar5 = auStack_a0 + -(*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_10007f314(param_3,puVar5,&DAT_100a85fc8,&DAT_10081a5c8);
  lVar2 = 0;
  __sScPMa();
  lVar8 = *(long *)(lVar2 + -8);
  puVar3 = puVar5;
  (**(code **)(lVar8 + 0x30))(puVar5,1,lVar2);
  uVar7 = param_5;
  _swift_retain(param_5);
  if ((int)puVar3 == 1) {
    FUN_100040bb4(puVar5,&DAT_100a85fc8,&DAT_10081a5c8);
    uVar7 = 0x1c00;
  }
  else {
    __sScP8rawValues5UInt8Vvg();
    (**(code **)(lVar8 + 8))(puVar5,lVar2);
    uVar7 = uVar7 & 0xff | 0x1c00;
  }
  lVar2 = *(long *)(param_5 + 0x10);
  lVar8 = *(long *)(param_5 + 0x18);
  _swift_unknownObjectRetain(lVar2);
  _swift_release(param_5);
  if (lVar2 == 0) {
    lVar6 = 0;
    lVar8 = 0;
  }
  else {
    lVar6 = lVar2;
    _swift_getObjectType();
    __sScA15unownedExecutorScevgTj();
    _swift_unknownObjectRelease(lVar2);
  }
  if (param_2 == 0) {
    FUN_100040bb4(param_3,&DAT_100a85fc8,&DAT_10081a5c8);
    puVar1 = &DAT_1009b1da0;
    _swift_allocObject(&DAT_1009b1da0,0x28,7);
    *(undefined8 *)(puVar1 + 0x10) = param_6;
    *(undefined8 *)(puVar1 + 0x18) = param_4;
    *(ulong *)(puVar1 + 0x20) = param_5;
    if (lVar8 == 0 && lVar6 == 0) {
      puVar4 = (undefined8 *)0x0;
    }
    else {
      local_90 = 0;
      uStack_88 = 0;
      puVar4 = &local_90;
      local_80 = lVar6;
      lStack_78 = lVar8;
    }
    _swift_task_create(uVar7,puVar4,param_6,&DAT_10081a6b8,puVar1);
  }
  else {
    __sSS11utf8CStrings15ContiguousArrayVys4Int8VGvg(param_1,param_2);
    FUN_10032a744(&local_98,param_1 + 0x20,*(undefined8 *)(param_1 + 0x10),uVar7,lVar6,lVar8,
                  &local_70,param_6);
    _swift_bridgeObjectRelease(param_2);
    _swift_release(param_1);
    FUN_100040bb4(param_3,&DAT_100a85fc8,&DAT_10081a5c8);
    _swift_release(param_5);
    uVar7 = local_98;
  }
  return uVar7;
}

