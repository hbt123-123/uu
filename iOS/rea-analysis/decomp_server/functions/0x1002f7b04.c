// rea decompile_all
// name: FUN_1002f7b04
// address: 0x1002f7b04
// body: available
// range: 0x1002f7b04-0x1002f7e47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002f7b04(undefined8 param_1,long param_2,undefined8 param_3,long param_4,void *param_5)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  undefined1 auStack_120 [8];
  undefined1 auStack_118 [24];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long local_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long local_b8;
  long local_b0;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  long local_78;
  long lStack_70;
  
  lVar1 = 0;
  FUN_1002c76a8();
  lVar1 = -(*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_1009af440;
  _swift_allocObject(&DAT_1009af440,0x18,7);
  *(void **)(puVar2 + 0x10) = param_5;
  lVar8 = _TtC9Alamofire15SessionDelegate::eventMonitor;
  _swift_beginAccess(param_4 + _TtC9Alamofire15SessionDelegate::eventMonitor,auStack_a8,0,0);
  FUN_10007f314(param_4 + lVar8,auStack_90,&DAT_100a82c40,&DAT_100817200);
  if (local_78 == 0) {
    __Block_copy(param_5);
    FUN_100040bb4(auStack_90,&DAT_100a82c40,&DAT_100817200);
  }
  else {
    FUN_1000b142c(auStack_90,&local_d0);
    __Block_copy(param_5);
    FUN_100040bb4(auStack_90,&DAT_100a82c40,&DAT_100817200);
    lVar3 = local_b0;
    lVar8 = local_b8;
    FUN_10003f030(&local_d0,local_b8);
    (**(code **)(lVar3 + 0x60))(param_1,param_2,param_3,lVar8,lVar3);
    FUN_10003f094(&local_d0);
  }
  param_4 = param_4 + _TtC9Alamofire15SessionDelegate::stateProvider;
  lVar8 = param_4;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar8 == 0) {
LAB_1002f7d2c:
    local_e0 = 0;
    uStack_f8 = 0;
    local_100 = 0;
    local_e8 = 0;
    uStack_f0 = 0;
  }
  else {
    lVar5 = *(long *)(param_4 + 8);
    lVar3 = lVar8;
    _swift_getObjectType();
    lVar4 = param_2;
    (**(code **)(lVar5 + 0x20))(param_2,lVar3,lVar5);
    _swift_unknownObjectRelease(lVar8);
    if (lVar4 == 0) goto LAB_1002f7d2c;
    plVar7 = *(long **)(lVar4 + _TtC9Alamofire7Request::mutableState);
    uVar6 = *(undefined8 *)(plVar7[2] + 0x10);
    _os_unfair_lock_lock(uVar6);
    lVar8 = *(long *)(*plVar7 + 0x60);
    _swift_beginAccess((long)plVar7 + lVar8,auStack_118,0,0);
    FUN_10028ab0c((long)plVar7 + lVar8,auStack_120 + lVar1);
    FUN_10007f314((long)&uStack_c0 + lVar1,&local_100,&DAT_100a83d28,0x1008188b0);
    FUN_1000d27dc(auStack_120 + lVar1,FUN_1002c76a8);
    _os_unfair_lock_unlock(uVar6);
    _swift_release(lVar4);
    if (local_e8 != 0) {
      FUN_1000a0074(&local_100,&local_d0);
      goto LAB_1002f7d88;
    }
  }
  lVar1 = param_4;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 == 0) {
    local_b0 = 0;
    uStack_c8 = 0;
    local_d0 = 0;
    local_b8 = 0;
    uStack_c0 = 0;
  }
  else {
    lVar8 = *(long *)(param_4 + 8);
    _swift_getObjectType();
    (**(code **)(lVar8 + 0x18))(&local_d0);
    _swift_unknownObjectRelease(lVar1);
  }
  if (local_e8 != 0) {
    FUN_100040bb4(&local_100,&DAT_100a83d28,0x1008188b0);
  }
LAB_1002f7d88:
  if (local_b8 == 0) {
    FUN_100040bb4(&local_d0,&DAT_100a83d28,0x1008188b0);
    (**(code **)((long)param_5 + 0x10))(param_5,param_3);
  }
  else {
    FUN_1000a0074(&local_d0,auStack_90);
    FUN_10003f030(auStack_90,local_78);
    (**(code **)(lStack_70 + 8))(param_2,param_3,FUN_1002f7fa4,puVar2,local_78,lStack_70);
    FUN_10003f094(auStack_90);
  }
  _swift_release(puVar2);
  return;
}

