// rea decompile_all
// name: FUN_1002e94e0
// address: 0x1002e94e0
// body: available
// range: 0x1002e94e0-0x1002e98fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002e94e0(long *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined1 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  undefined1 auStack_f0 [8];
  undefined *local_e8 [3];
  long local_d0;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  long local_90;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long local_68;
  long local_60;
  
  lVar2 = 0;
  FUN_1002c76a8();
  lVar2 = -(*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = auStack_f0 + lVar2;
  plVar6 = *(long **)(param_2 + _TtC9Alamofire7Request::mutableState);
  uVar5 = *(undefined8 *)(plVar6[2] + 0x10);
  _os_unfair_lock_lock(uVar5);
  lVar7 = *(long *)(*plVar6 + 0x60);
  _swift_beginAccess((long)plVar6 + lVar7,auStack_c0,0,0);
  FUN_100082394((long)plVar6 + lVar7,puVar4,FUN_1002c76a8);
  FUN_10007f314(&stack0x00000028 + lVar2,auStack_a8,&DAT_100a83d18,0x1008188a0);
  FUN_1000d27dc(puVar4,FUN_1002c76a8);
  _os_unfair_lock_unlock(uVar5);
  if (local_90 == 0) {
    FUN_100040bb4(auStack_a8,&DAT_100a83d18,0x1008188a0);
  }
  else {
    FUN_1000a0074(auStack_a8,&local_80);
    FUN_10007f314(unaff_x20 + 0x40,local_e8,&DAT_100a83d18,0x1008188a0);
    if (local_d0 != 0) {
      FUN_1000a0074(local_e8,auStack_a8);
      puVar3 = &DAT_100a83318;
      FUN_100004bb4(&DAT_100a83318,&DAT_100817820);
      _swift_allocObject();
      *(undefined8 *)(puVar3 + 0x18) = 4;
      *(undefined8 *)(puVar3 + 0x10) = 2;
      FUN_10003f030(auStack_a8,local_90);
      *(long *)(puVar3 + 0x38) = local_90;
      *(undefined8 *)(puVar3 + 0x40) = *(undefined8 *)(local_88 + 8);
      FUN_1000efc08(puVar3 + 0x20);
      (**(code **)(*(long *)(local_90 + -8) + 0x10))();
      FUN_10003f030(&local_80,local_68);
      *(long *)(puVar3 + 0x60) = local_68;
      *(undefined8 *)(puVar3 + 0x68) = *(undefined8 *)(local_60 + 8);
      FUN_1000efc08(puVar3 + 0x48);
      (**(code **)(*(long *)(local_68 + -8) + 0x10))();
      lVar7 = 0;
      FUN_10034269c();
      lVar2 = lVar7;
      _swift_allocObject();
      puVar1 = PTR___swiftEmptyArrayStorage_100995ea0;
      FUN_100340b88(PTR___swiftEmptyArrayStorage_100995ea0);
      local_e8[0] = puVar3;
      FUN_1002c5a14();
      *(undefined **)(lVar2 + 0x10) = local_e8[0];
      FUN_100340bac(puVar1);
      local_e8[0] = puVar1;
      FUN_1002c59f8();
      *(undefined **)(lVar2 + 0x18) = local_e8[0];
      param_1[3] = lVar7;
      param_1[4] = (long)&PTR_PTR_1009b3660;
      *param_1 = lVar2;
      FUN_10003f094(auStack_a8);
      FUN_10003f094(&local_80);
      return;
    }
    FUN_100040bb4(local_e8,&DAT_100a83d18,0x1008188a0);
    FUN_10003f094(&local_80);
  }
  uVar5 = *(undefined8 *)(plVar6[2] + 0x10);
  _os_unfair_lock_lock(uVar5);
  FUN_100082394((long)plVar6 + lVar7,puVar4,FUN_1002c76a8);
  FUN_10007f314(&stack0x00000028 + lVar2,auStack_a8,&DAT_100a83d18,0x1008188a0);
  FUN_1000d27dc(puVar4,FUN_1002c76a8);
  _os_unfair_lock_unlock(uVar5);
  lVar7 = local_88;
  lVar2 = local_90;
  if (local_90 == 0) {
    FUN_100040bb4(auStack_a8,&DAT_100a83d18,0x1008188a0);
    uStack_78 = 0;
    local_80 = 0;
    local_68 = 0;
    uStack_70 = 0;
    local_60 = 0;
  }
  else {
    FUN_10003f030(auStack_a8,local_90);
    local_68 = lVar2;
    local_60 = *(undefined8 *)(lVar7 + 8);
    FUN_1000efc08(&local_80);
    (**(code **)(*(long *)(lVar2 + -8) + 0x10))();
    FUN_10003f094(auStack_a8);
    if (local_68 != 0) {
      FUN_1000a0074(&local_80,param_1);
      return;
    }
  }
  FUN_10007f314(unaff_x20 + 0x40,auStack_a8,&DAT_100a83d18,0x1008188a0);
  if (local_90 == 0) {
    FUN_100040bb4(auStack_a8,&DAT_100a83d18,0x1008188a0);
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  else {
    FUN_10003f030(auStack_a8,local_90);
    param_1[3] = local_90;
    param_1[4] = *(long *)(local_88 + 8);
    FUN_1000efc08(param_1);
    (**(code **)(*(long *)(local_90 + -8) + 0x10))();
    FUN_10003f094(auStack_a8);
  }
  if (local_68 != 0) {
    FUN_100040bb4(&local_80,&DAT_100a84678,&DAT_100818f78);
  }
  return;
}

