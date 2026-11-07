// rea decompile_all
// name: FUN_1002a7888
// address: 0x1002a7888
// body: available
// range: 0x1002a7888-0x1002a7c5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002a7888(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long unaff_x20;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  long local_e0;
  long local_d8;
  long lStack_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  undefined8 local_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  long local_70;
  long local_68;
  
  puVar3 = &DAT_100a82460;
  local_a8 = param_2;
  FUN_100004bb4(&DAT_100a82460,&DAT_1008175c0);
  lVar7 = (long)&local_e0 - (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  local_c0 = lVar7;
  FUN_100277ad0();
  local_d8 = *(long *)(lVar4 + -8);
  lVar7 = lVar7 - (*(long *)(local_d8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  lStack_d0 = lVar4;
  local_b0 = lVar7;
  __s10Foundation3URLVMa();
  lVar8 = *(long *)(lVar5 + -8);
  lVar7 = lVar7 - (*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100a838c8;
  local_c8 = lVar5;
  local_b8 = lVar7;
  FUN_100004bb4(&DAT_100a838c8,&DAT_100819010);
  lVar7 = lVar7 - (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  FUN_1002c76a8();
  lVar5 = lVar7 - (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  plVar9 = *(long **)(unaff_x20 + _TtC9Alamofire7Request::mutableState);
  uVar10 = *(undefined8 *)(plVar9[2] + 0x10);
  local_e0 = lVar4;
  _os_unfair_lock_lock(uVar10);
  lVar4 = (long)plVar9 + *(long *)(*plVar9 + 0x60);
  _swift_beginAccess(lVar4,auStack_a0,0,0);
  FUN_100082394(lVar4,lVar5,FUN_1002c76a8);
  FUN_10007f314(lVar5 + 0xf0,auStack_88,&DAT_100a82c40,&DAT_100817200);
  FUN_1000d27dc(lVar5,FUN_1002c76a8);
  _os_unfair_lock_unlock(uVar10);
  if (local_70 == 0) {
    FUN_100040bb4(auStack_88,&DAT_100a82c40,&DAT_100817200);
    uVar10 = local_a8;
  }
  else {
    FUN_10003f030(auStack_88,local_70);
    uVar10 = local_a8;
    (**(code **)(local_68 + 0x148))();
    FUN_10003f094(auStack_88);
  }
  FUN_10007f314(uVar10,lVar7,&DAT_100a838c8,&DAT_100819010);
  lVar6 = lVar7;
  _swift_getEnumCaseMultiPayload(lVar7,puVar3);
  lVar2 = local_b0;
  lVar1 = local_b8;
  lVar5 = local_c8;
  if ((int)lVar6 == 1) {
    FUN_10026531c(lVar7,local_b0);
    lVar5 = local_c0;
    FUN_100082394(lVar2,local_c0,FUN_100277ad0);
    (**(code **)(local_d8 + 0x38))(lVar5,0,1,lStack_d0);
    uVar10 = *(undefined8 *)(plVar9[2] + 0x10);
    _os_unfair_lock_lock(uVar10);
    _swift_beginAccess(lVar4,auStack_88,0x21,0);
    FUN_10028fba0(lVar5,lVar4 + *(int *)(local_e0 + 0x5c));
    _swift_endAccess(auStack_88);
    _os_unfair_lock_unlock(uVar10);
    FUN_1000d27dc(lVar2,FUN_100277ad0);
    FUN_100040bb4(lVar5,&DAT_100a82460,&DAT_1008175c0);
  }
  else {
    (**(code **)(lVar8 + 0x20))(local_b8,lVar7,local_c8);
    plVar9 = *(long **)(unaff_x20 + _TtC9Alamofire15DownloadRequest::mutableDownloadState);
    uVar10 = *(undefined8 *)(plVar9[2] + 0x10);
    _os_unfair_lock_lock(uVar10);
    lVar4 = (long)plVar9 + *(long *)(*plVar9 + 0x60);
    _swift_beginAccess(lVar4,auStack_88,0x21,0);
    lVar7 = 0;
    FUN_1002a7694();
    lVar7 = (long)*(int *)(lVar7 + 0x14);
    FUN_100040bb4(lVar4 + lVar7,&DAT_100a83428,&DAT_100817bb0);
    (**(code **)(lVar8 + 0x10))(lVar4 + lVar7,lVar1,lVar5);
    (**(code **)(lVar8 + 0x38))(lVar4 + lVar7,0,1,lVar5);
    _swift_endAccess(auStack_88);
    _os_unfair_lock_unlock(uVar10);
    (**(code **)(lVar8 + 8))(lVar1,lVar5);
  }
  return;
}

