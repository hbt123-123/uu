// rea decompile_all
// name: FUN_1002a7418
// address: 0x1002a7418
// body: available
// range: 0x1002a7418-0x1002a7693 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1002a7418(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined *puVar8;
  long *plVar9;
  undefined1 auVar10 [16];
  long local_a0 [2];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar1 = 0;
  FUN_100277ad0();
  lVar3 = *(long *)(lVar1 + -8);
  lVar5 = (long)local_a0 - (*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  local_a0[0] = lVar5;
  local_a0[1] = lVar1;
  FUN_1002c76a8();
  lVar5 = lVar5 - (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = &DAT_100a82460;
  FUN_100004bb4(&DAT_100a82460,&DAT_1008175c0);
  lVar4 = lVar5 - (*(long *)(*(long *)(puVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  FUN_1002a7694();
  plVar9 = (long *)(lVar4 - (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  plVar7 = *(long **)(unaff_x20 + _TtC9Alamofire15DownloadRequest::mutableDownloadState);
  uVar6 = *(undefined8 *)(plVar7[2] + 0x10);
  _os_unfair_lock_lock(uVar6);
  lVar1 = *(long *)(*plVar7 + 0x60);
  _swift_beginAccess((long)plVar7 + lVar1,auStack_78,0,0);
  FUN_100082394((long)plVar7 + lVar1,plVar9,FUN_1002a7694);
  lVar1 = *plVar9;
  puVar8 = (undefined *)plVar9[1];
  FUN_10010bd10(lVar1,puVar8);
  FUN_1000d27dc(plVar9,FUN_1002a7694);
  _os_unfair_lock_unlock(uVar6);
  if (0xe < (ulong)puVar8 >> 0x3c) {
    plVar7 = *(long **)(unaff_x20 + _TtC9Alamofire7Request::mutableState);
    uVar6 = *(undefined8 *)(plVar7[2] + 0x10);
    _os_unfair_lock_lock(uVar6);
    lVar1 = *(long *)(*plVar7 + 0x60);
    _swift_beginAccess((long)plVar7 + lVar1,auStack_90,0,0);
    FUN_100082394((long)plVar7 + lVar1,lVar5,FUN_1002c76a8);
    FUN_10007f314(lVar5 + *(int *)(lVar2 + 0x5c),lVar4,&DAT_100a82460,&DAT_1008175c0);
    FUN_1000d27dc(lVar5,FUN_1002c76a8);
    _os_unfair_lock_unlock(uVar6);
    lVar2 = lVar4;
    (**(code **)(lVar3 + 0x30))(lVar4,1,local_a0[1]);
    lVar1 = local_a0[0];
    if ((int)lVar2 == 0) {
      FUN_100082394(lVar4,local_a0[0],FUN_100277ad0);
      puVar8 = &DAT_100a82460;
      FUN_100040bb4(lVar4,&DAT_100a82460,&DAT_1008175c0);
      FUN_100279950();
      FUN_1000d27dc(lVar1,FUN_100277ad0);
      lVar1 = lVar4;
    }
    else {
      FUN_100040bb4(lVar4,&DAT_100a82460,&DAT_1008175c0);
      puVar8 = (undefined *)0xf000000000000000;
      lVar1 = 0;
    }
  }
  auVar10._8_8_ = puVar8;
  auVar10._0_8_ = lVar1;
  return auVar10;
}

