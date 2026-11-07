// rea decompile_all
// name: FUN_1002f3494
// address: 0x1002f3494
// body: available
// range: 0x1002f3494-0x1002f3877 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002f3494(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  undefined1 *puVar7;
  long *plVar8;
  undefined1 auStack_130 [8];
  undefined8 local_128;
  long local_120;
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
  
  puVar1 = &DAT_100a82c30;
  FUN_100004bb4(&DAT_100a82c30,&DAT_1008171f0);
  puVar7 = auStack_130 + -(*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  FUN_1002c76a8();
  lVar4 = _TtC9Alamofire15SessionDelegate::eventMonitor;
  local_120 = (long)puVar7 - (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_beginAccess(unaff_x20 + _TtC9Alamofire15SessionDelegate::eventMonitor,auStack_a8,0,0);
  FUN_10007f314(unaff_x20 + lVar4,auStack_90,&DAT_100a82c40,&DAT_100817200);
  if (local_78 == 0) {
    FUN_100040bb4(auStack_90,&DAT_100a82c40,&DAT_100817200);
  }
  else {
    FUN_1000b142c(auStack_90,&local_d0);
    FUN_100040bb4(auStack_90,&DAT_100a82c40,&DAT_100817200);
    lVar2 = local_b0;
    lVar4 = local_b8;
    FUN_10003f030(&local_d0,local_b8);
    (**(code **)(lVar2 + 0x30))(param_1,param_2,param_3,param_4,lVar4,lVar2);
    FUN_10003f094(&local_d0);
  }
  lVar4 = unaff_x20 + _TtC9Alamofire15SessionDelegate::stateProvider;
  lVar2 = lVar4;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar2 == 0) {
LAB_1002f3714:
    local_e0 = 0;
    uStack_f8 = 0;
    local_100 = 0;
    local_e8 = 0;
    uStack_f0 = 0;
  }
  else {
    lVar5 = *(long *)(lVar4 + 8);
    lVar6 = lVar2;
    _swift_getObjectType();
    lVar3 = param_2;
    (**(code **)(lVar5 + 0x20))(param_2,lVar6,lVar5);
    _swift_unknownObjectRelease(lVar2);
    if (lVar3 == 0) goto LAB_1002f3714;
    plVar8 = *(long **)(lVar3 + _TtC9Alamofire7Request::mutableState);
    local_128 = *(undefined8 *)(plVar8[2] + 0x10);
    _os_unfair_lock_lock();
    lVar6 = *(long *)(*plVar8 + 0x60);
    _swift_beginAccess((long)plVar8 + lVar6,auStack_118,0,0);
    lVar2 = local_120;
    FUN_10028ab0c((long)plVar8 + lVar6,local_120);
    FUN_10007f314(lVar2 + 0x38,&local_100,&DAT_100a83d20,0x1008188a8);
    FUN_1000d27dc(lVar2,FUN_1002c76a8);
    _os_unfair_lock_unlock(local_128);
    _swift_release(lVar3);
    if (local_e8 != 0) {
      FUN_1000a0074(&local_100,&local_d0);
      goto LAB_1002f3770;
    }
  }
  lVar2 = lVar4;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar2 == 0) {
    local_b0 = 0;
    uStack_c8 = 0;
    local_d0 = 0;
    local_b8 = 0;
    uStack_c0 = 0;
  }
  else {
    lVar4 = *(long *)(lVar4 + 8);
    _swift_getObjectType();
    (**(code **)(lVar4 + 0x10))(&local_d0);
    _swift_unknownObjectRelease(lVar2);
  }
  if (local_e8 != 0) {
    FUN_100040bb4(&local_100,&DAT_100a83d20,0x1008188a8);
  }
LAB_1002f3770:
  if (local_b8 == 0) {
    FUN_100040bb4(&local_d0,&DAT_100a83d20,0x1008188a8);
    lVar4 = 0;
    __s10Foundation10URLRequestVMa();
    lVar2 = *(long *)(lVar4 + -8);
    (**(code **)(lVar2 + 0x10))(puVar7,param_4,lVar4);
    (**(code **)(lVar2 + 0x38))(puVar7,0,1,lVar4);
    (*param_5)(puVar7);
    FUN_100040bb4(puVar7,&DAT_100a82c30,&DAT_1008171f0);
  }
  else {
    FUN_1000a0074(&local_d0,auStack_90);
    FUN_10003f030(auStack_90,local_78);
    (**(code **)(lStack_70 + 8))(param_2,param_4,param_3,param_5,param_6,local_78,lStack_70);
    FUN_10003f094(auStack_90);
  }
  return;
}

