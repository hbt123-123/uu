// rea decompile_all
// name: FUN_1002f6b94
// address: 0x1002f6b94
// body: available
// range: 0x1002f6b94-0x1002f702f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002f6b94(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,void *param_6)

{
  undefined1 *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_140 [8];
  undefined8 local_138;
  undefined1 *local_130;
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
  
  lVar2 = 0;
  local_128 = param_3;
  FUN_1002c76a8();
  lVar2 = *(long *)(*(long *)(lVar2 + -8) + 0x40);
  puVar3 = &DAT_100a82c30;
  local_130 = auStack_140 + -(lVar2 + 0xfU & 0xfffffffffffffff0);
  FUN_100004bb4(&DAT_100a82c30,&DAT_1008171f0);
  uVar5 = *(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar10 = (long)(auStack_140 + -(lVar2 + 0xfU & 0xfffffffffffffff0)) - uVar5;
  lVar6 = lVar10 - uVar5;
  puVar3 = &DAT_1009af5d0;
  _swift_allocObject(&DAT_1009af5d0,0x18,7);
  *(void **)(puVar3 + 0x10) = param_6;
  lVar2 = _TtC9Alamofire15SessionDelegate::eventMonitor;
  _swift_beginAccess(param_5 + _TtC9Alamofire15SessionDelegate::eventMonitor,auStack_a8,0,0);
  FUN_10007f314(param_5 + lVar2,auStack_90,&DAT_100a82c40,&DAT_100817200);
  local_120 = param_2;
  if (local_78 == 0) {
    __Block_copy(param_6);
    FUN_100040bb4(auStack_90,&DAT_100a82c40,&DAT_100817200);
  }
  else {
    FUN_1000b142c(auStack_90,&local_d0);
    __Block_copy(param_6);
    FUN_100040bb4(auStack_90,&DAT_100a82c40,&DAT_100817200);
    lVar9 = local_b0;
    lVar2 = local_b8;
    FUN_10003f030(&local_d0,local_b8);
    (**(code **)(lVar9 + 0x30))(param_1,param_2,local_128,param_4,lVar2,lVar9);
    FUN_10003f094(&local_d0);
  }
  param_5 = param_5 + _TtC9Alamofire15SessionDelegate::stateProvider;
  lVar2 = param_5;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar2 == 0) {
LAB_1002f6e58:
    local_e0 = 0;
    uStack_f8 = 0;
    local_100 = 0;
    local_e8 = 0;
    uStack_f0 = 0;
  }
  else {
    lVar7 = *(long *)(param_5 + 8);
    lVar9 = lVar2;
    _swift_getObjectType();
    lVar4 = local_120;
    (**(code **)(lVar7 + 0x20))(local_120,lVar9,lVar7);
    _swift_unknownObjectRelease(lVar2);
    if (lVar4 == 0) goto LAB_1002f6e58;
    plVar8 = *(long **)(lVar4 + _TtC9Alamofire7Request::mutableState);
    local_138 = *(undefined8 *)(plVar8[2] + 0x10);
    _os_unfair_lock_lock();
    lVar2 = *(long *)(*plVar8 + 0x60);
    _swift_beginAccess((long)plVar8 + lVar2,auStack_118,0,0);
    puVar1 = local_130;
    FUN_10028ab0c((long)plVar8 + lVar2,local_130);
    FUN_10007f314(puVar1 + 0x38,&local_100,&DAT_100a83d20,0x1008188a8);
    FUN_1000d27dc(puVar1,FUN_1002c76a8);
    _os_unfair_lock_unlock(local_138);
    _swift_release(lVar4);
    if (local_e8 != 0) {
      FUN_1000a0074(&local_100,&local_d0);
      lVar2 = local_120;
      goto LAB_1002f6ecc;
    }
  }
  lVar2 = param_5;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar2 == 0) {
    local_b0 = 0;
    uStack_c8 = 0;
    local_d0 = 0;
    local_b8 = 0;
    uStack_c0 = 0;
  }
  else {
    lVar9 = *(long *)(param_5 + 8);
    _swift_getObjectType();
    (**(code **)(lVar9 + 0x10))(&local_d0);
    _swift_unknownObjectRelease(lVar2);
  }
  lVar2 = local_120;
  if (local_e8 != 0) {
    FUN_100040bb4(&local_100,&DAT_100a83d20,0x1008188a8);
  }
LAB_1002f6ecc:
  if (local_b8 == 0) {
    FUN_100040bb4(&local_d0,&DAT_100a83d20,0x1008188a8);
    lVar4 = 0;
    __s10Foundation10URLRequestVMa();
    lVar7 = *(long *)(lVar4 + -8);
    (**(code **)(lVar7 + 0x10))(lVar6,param_4,lVar4);
    (**(code **)(lVar7 + 0x38))(lVar6,0,1,lVar4);
    FUN_10007f314(lVar6,lVar10,&DAT_100a82c30,&DAT_1008171f0);
    lVar2 = lVar10;
    (**(code **)(lVar7 + 0x30))(lVar10,1,lVar4);
    lVar9 = 0;
    if ((int)lVar2 != 1) {
      __s10Foundation10URLRequestV19_bridgeToObjectiveCSo12NSURLRequestCyF();
      (**(code **)(lVar7 + 8))(lVar10,lVar4);
      lVar9 = lVar2;
    }
    (**(code **)((long)param_6 + 0x10))(param_6,lVar9);
    FUN_100040bb4(lVar6,&DAT_100a82c30,&DAT_1008171f0);
  }
  else {
    FUN_1000a0074(&local_d0,auStack_90);
    FUN_10003f030(auStack_90,local_78);
    (**(code **)(lStack_70 + 8))(lVar2,param_4,local_128,FUN_1002f8010,puVar3,local_78,lStack_70);
    FUN_10003f094(auStack_90);
  }
  _swift_release(puVar3);
  return;
}

