// rea decompile_all
// name: FUN_1001b6780
// address: 0x1001b6780
// body: available
// range: 0x1001b6780-0x1001b694b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001b6780(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  void *aBlock;
  long extraout_x8;
  long extraout_x8_00;
  long lVar4;
  long unaff_x20;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined8 uStack_68;
  
  lVar1 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar7 + 0x40));
  lVar5 = (long)&local_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar8 + 0x40));
  lVar6 = lVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar4 = *(long *)(unaff_x20 + 0x48);
  if (lVar4 != 0) {
    *(undefined8 *)(unaff_x20 + 0x48) = 0;
    lVar3 = lVar4;
    _swift_getObjectType(lVar4);
    local_70 = FUN_100008290;
    uStack_68 = 0;
    local_90 = PTR___NSConcreteStackBlock_100995490;
    local_88 = 0x42000000;
    local_80 = FUN_1000acdb4;
    puStack_78 = &DAT_1009a29a0;
    aBlock = __Block_copy(&local_90);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar6,lVar3);
    thunk_FUN_1001e7cc4(lVar5,lVar3);
    __sSo18OS_dispatch_sourceP8DispatchE15setEventHandler3qos5flags7handleryAC0D3QoSV_AC0D13WorkItemFlagsVyyXBSgtF
              (lVar6,lVar5,aBlock,lVar3);
    __Block_release(aBlock);
    (**(code **)(lVar7 + 8))(lVar5,lVar1);
    (**(code **)(lVar8 + 8))(lVar6,lVar2);
    __sSo18OS_dispatch_sourceP8DispatchE6cancelyyF(lVar3);
    FUN_100401b14(0);
    FUN_1003fb48c(FUN_1001b7afc,0,0xd000000000000093,0x800000010089b8d0,0xd00000000000001f,
                  0x800000010089bcd0,0xd6,0);
    _swift_unknownObjectRelease(lVar4);
  }
  return;
}

