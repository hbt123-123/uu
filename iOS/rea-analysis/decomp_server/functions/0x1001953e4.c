// rea decompile_all
// name: FUN_1001953e4
// address: 0x1001953e4
// body: available
// range: 0x1001953e4-0x1001956b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1001953e4(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  void *aBlock;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_e0 [8];
  long local_d8;
  long local_d0;
  undefined *local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  code *local_b0;
  undefined *puStack_a8;
  code *local_a0;
  undefined *local_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar2 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar10 + 0x40));
  puVar8 = auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar11 + 0x40));
  lVar9 = (long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  _swift_beginAccess(param_1 + 0x10,auStack_78,0,0);
  lVar4 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar4 != 0) {
    if (SCARRY8(*(long *)(lVar4 + _TtC14UURemoteServer28ClipboardUploadCopyOperation::currentIndex),
                1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1001956b8);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _TtC14UURemoteServer28ClipboardUploadCopyOperation::currentIndex) =
         *(long *)(lVar4 + _TtC14UURemoteServer28ClipboardUploadCopyOperation::currentIndex) + 1;
  }
  FUN_100401b14(0);
  FUN_1003fb45c(FUN_1001956b8,0,0xd0000000000000b0,0x8000000100899320,0xd00000000000001a,
                0x80000001008994d0,0x39,7);
  _swift_beginAccess(param_1 + 0x10,auStack_90,0,0);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    FUN_100194478();
    puVar5 = &DAT_1009a1790;
    _swift_allocObject(&DAT_1009a1790,0x18,7);
    *(undefined8 *)(puVar5 + 0x10) = param_2;
    local_a0 = thunk_FUN_1000a9f7c;
    local_c0 = PTR___NSConcreteStackBlock_100995490;
    local_b8 = 0x42000000;
    local_b0 = FUN_1000acdb4;
    puStack_a8 = &DAT_1009a17a8;
    local_98 = puVar5;
    aBlock = __Block_copy(&local_c0);
    local_d8 = lVar10;
    local_d0 = lVar3;
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar9,param_2);
    local_c8 = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar6 = &DAT_100a75a90;
    FUN_100005c90(&DAT_100a75a90,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
    puVar5 = &DAT_100a75a98;
    FUN_100004bb4(&DAT_100a75a98,&DAT_100809b30);
    puVar7 = &DAT_100a75aa0;
    FUN_10003f840(&DAT_100a75aa0,&DAT_100a75a98,&DAT_100809b30,PTR___sSayxGSTsMc_100995898);
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (puVar8,&local_c8,puVar5,puVar7,lVar2,puVar6);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar9,puVar8,aBlock);
    __Block_release(aBlock);
    (**(code **)(local_d8 + 8))(puVar8,lVar2);
    (**(code **)(lVar11 + 8))(lVar9,local_d0);
    _swift_release(local_98);
  }
  return;
}

