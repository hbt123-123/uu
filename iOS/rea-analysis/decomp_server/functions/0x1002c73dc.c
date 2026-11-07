// rea decompile_all
// name: FUN_1002c73dc
// address: 0x1002c73dc
// body: available
// range: 0x1002c73dc-0x1002c751f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002c73dc(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ID IVar5;
  undefined8 uVar6;
  long unaff_x20;
  long *plVar7;
  undefined8 uVar8;
  undefined1 auStack_48 [24];
  
  IVar5 = *(ID *)(unaff_x20 + _TtC9Alamofire7Request::uploadProgress);
  _objc_msgSend(IVar5,"setTotalUnitCount:",0);
  _objc_msgSend(IVar5,"setCompletedUnitCount:",0);
  IVar5 = *(ID *)(unaff_x20 + _TtC9Alamofire7Request::downloadProgress);
  _objc_msgSend(IVar5,"setTotalUnitCount:",0);
  _objc_msgSend(IVar5,"setCompletedUnitCount:",0);
  plVar7 = *(long **)(unaff_x20 + _TtC9Alamofire7Request::mutableState);
  uVar6 = *(undefined8 *)(plVar7[2] + 0x10);
  _os_unfair_lock_lock(uVar6);
  lVar1 = (long)plVar7 + *(long *)(*plVar7 + 0x60);
  _swift_beginAccess(lVar1,auStack_48,0x21,0);
  lVar3 = 0;
  FUN_1002c76a8();
  iVar2 = *(int *)(lVar3 + 0x5c);
  FUN_100040bb4(lVar1 + iVar2,&DAT_100a82460,&DAT_1008175c0);
  lVar4 = 0;
  FUN_100277ad0();
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(lVar1 + iVar2,1,1,lVar4);
  *(undefined1 *)(lVar1 + *(int *)(lVar3 + 0x60)) = 0;
  uVar8 = *(undefined8 *)(lVar1 + 0xe0);
  *(undefined **)(lVar1 + 0xe0) = PTR___swiftEmptyArrayStorage_100995ea0;
  *(undefined1 *)(lVar1 + 0xd8) = 0;
  _swift_endAccess(auStack_48);
  _swift_bridgeObjectRelease(uVar8);
  _os_unfair_lock_unlock(uVar6);
  return;
}

