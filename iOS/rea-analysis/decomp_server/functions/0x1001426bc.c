// rea decompile_all
// name: FUN_1001426bc
// address: 0x1001426bc
// body: available
// range: 0x1001426bc-0x100142833 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001426bc(undefined8 param_1,undefined4 param_2)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  code *pcVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long local_50 [3];
  undefined4 local_34;
  
  puVar2 = &DAT_100a766c8;
  FUN_100004bb4(&DAT_100a766c8,&DAT_10080b1d0);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = (long)local_50 - extraout_x8;
  uVar6 = *(undefined8 *)
           (unaff_x20 + _TtC14UURemoteServer29ClipboardFileReceiveCopyModel::allTakProcessData);
  local_34 = param_2;
  _swift_retain(uVar6);
  FUN_1003e37e8(local_50,&local_34);
  _swift_release(uVar6);
  lVar3 = _TtC14UURemoteServer32ClipboardFileReceiveCopyTaskData::emptyFileUrl;
  if (local_50[0] == 0) {
    lVar3 = 0;
    __s10Foundation3URLVMa();
    pcVar5 = *(code **)(*(long *)(lVar3 + -8) + 0x38);
    bVar1 = true;
  }
  else {
    _swift_beginAccess(local_50[0] +
                       _TtC14UURemoteServer32ClipboardFileReceiveCopyTaskData::emptyFileUrl,local_50
                       ,0,0);
    FUN_1000e3888(local_50[0] + lVar3,lVar7);
    _swift_release(local_50[0]);
    lVar3 = 0;
    __s10Foundation3URLVMa();
    lVar8 = *(long *)(lVar3 + -8);
    lVar4 = lVar7;
    (**(code **)(lVar8 + 0x30))(lVar7,1,lVar3);
    bVar1 = (int)lVar4 != 1;
    if (bVar1) {
      (**(code **)(lVar8 + 0x20))(param_1,lVar7,lVar3);
      pcVar5 = *(code **)(lVar8 + 0x38);
    }
    else {
      FUN_100040bb4(lVar7,&DAT_100a766c8,&DAT_10080b1d0);
      pcVar5 = *(code **)(lVar8 + 0x38);
    }
    bVar1 = !bVar1;
  }
  (*pcVar5)(param_1,bVar1,1,lVar3);
  return;
}

