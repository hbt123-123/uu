// rea decompile_all
// name: FUN_1002a7c5c
// address: 0x1002a7c5c
// body: available
// range: 0x1002a7c5c-0x1002a7f8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Type propagation algorithm not settling */

void FUN_1002a7c5c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ID IVar6;
  undefined *puVar7;
  void *aBlock;
  undefined8 *puVar8;
  long lVar9;
  ID self;
  long *plVar10;
  long unaff_x20;
  code *pcVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined1 auStack_e0 [8];
  long local_d8;
  undefined1 *local_d0;
  long local_c8;
  long local_c0 [2];
  code *local_b0 [4];
  undefined *puStack_90;
  code *local_88;
  undefined1 auStack_78 [24];
  
  lVar3 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar15 = *(long *)(lVar3 + -8);
  lVar9 = *(long *)(lVar15 + 0x40);
  lVar4 = 0;
  __s8Dispatch0A3QoSVMa();
  local_c0[1] = *(long *)(lVar4 + -8);
  lVar13 = (long)(auStack_e0 + -(lVar9 + 0xfU & 0xfffffffffffffff0)) -
           (*(long *)(local_c0[1] + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  FUN_1002c76a8();
  lVar5 = lVar13 - (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  self = *(ID *)(unaff_x20 + _TtC9Alamofire7Request::downloadProgress);
  _objc_msgSend(self,"setTotalUnitCount:",param_2);
  IVar6 = _objc_msgSend(self,"completedUnitCount");
  if (!SCARRY8(IVar6,param_1)) {
    local_d8 = lVar4;
    local_d0 = auStack_e0 + -(lVar9 + 0xfU & 0xfffffffffffffff0);
    local_c8 = lVar15;
    local_c0[0] = lVar3;
    _objc_msgSend(self,"setCompletedUnitCount:",IVar6 + param_1);
    plVar10 = *(long **)(unaff_x20 + _TtC9Alamofire7Request::mutableState);
    uVar14 = *(undefined8 *)(plVar10[2] + 0x10);
    _os_unfair_lock_lock(uVar14);
    lVar3 = *(long *)(*plVar10 + 0x60);
    _swift_beginAccess((long)plVar10 + lVar3,auStack_78,0,0);
    FUN_100082394((long)plVar10 + lVar3,lVar5,FUN_1002c76a8);
    lVar3 = *(long *)(lVar5 + 0x20);
    uVar1 = *(undefined8 *)(lVar5 + 0x28);
    uVar16 = *(undefined8 *)(lVar5 + 0x30);
    if (lVar3 == 0) {
      pcVar11 = (code *)0x0;
      puVar17 = (undefined *)0x0;
      uVar12 = 0;
    }
    else {
      puVar17 = &DAT_1009ac1f0;
      _swift_allocObject(&DAT_1009ac1f0,0x20,7);
      *(long *)(puVar17 + 0x10) = lVar3;
      *(undefined8 *)(puVar17 + 0x18) = uVar1;
      pcVar11 = FUN_10028ac4c;
      uVar12 = uVar16;
    }
    FUN_10028ab50(lVar3,uVar1,uVar16);
    FUN_1000d27dc(lVar5,FUN_1002c76a8);
    _os_unfair_lock_unlock(uVar14);
    if (lVar3 != 0) {
      puVar7 = &DAT_1009ac1a0;
      _swift_allocObject(&DAT_1009ac1a0,0x20,7);
      *(code **)(puVar7 + 0x10) = pcVar11;
      *(undefined **)(puVar7 + 0x18) = puVar17;
      FUN_10028abac(FUN_10028aba4,puVar7,uVar12);
      local_88 = FUN_1002b5744;
      local_b0[1] = (code *)PTR___NSConcreteStackBlock_100995490;
      local_b0[2] = (code *)0x42000000;
      local_b0[3] = FUN_1000acdb4;
      puStack_90 = &DAT_1009ac1b8;
      aBlock = __Block_copy(local_b0 + 1);
      _swift_retain();
      __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar13);
      local_b0[0] = (code *)PTR___swiftEmptyArrayStorage_100995ea0;
      puVar8 = &DAT_100a82c10;
      FUN_100005c90(&DAT_100a82c10,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                    PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
      puVar17 = &DAT_100a82c18;
      FUN_100004bb4(&DAT_100a82c18,&DAT_100819000);
      puVar7 = puVar17;
      FUN_10028abfc();
      lVar3 = local_c0[0];
      puVar2 = local_d0;
      __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                (local_d0,local_b0,puVar17,puVar7,local_c0[0],puVar8);
      __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                (0,lVar13,puVar2,aBlock);
      __Block_release(aBlock);
      (**(code **)(local_c8 + 8))(puVar2,lVar3);
      (**(code **)(local_c0[1] + 8))(lVar13,local_d8);
      _swift_release(unaff_x20);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar11 = (code *)SoftwareBreakpoint(1,0x1002a7f8c);
  (*pcVar11)();
}

