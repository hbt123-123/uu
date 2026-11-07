// rea decompile_all
// name: FUN_100280c30
// address: 0x100280c30
// body: available
// range: 0x100280c30-0x100281133 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Type propagation algorithm not settling */

void FUN_100280c30(void)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong self;
  ID IVar7;
  undefined *puVar8;
  void *aBlock;
  undefined8 *puVar9;
  uint uVar10;
  ulong uVar11;
  int iVar12;
  undefined8 uVar13;
  long unaff_x20;
  code *pcVar14;
  ID self_00;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  undefined8 uVar19;
  long lVar20;
  undefined8 uVar21;
  long *plVar22;
  undefined *puVar23;
  long local_f0;
  long local_e8;
  long lStack_e0;
  long local_d8;
  long local_d0;
  code *local_c8 [5];
  code *local_a0;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar3 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_d0 = *(long *)(lVar3 + -8);
  lVar16 = (long)&local_f0 - (*(long *)(local_d0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  local_d8 = lVar16;
  __s8Dispatch0A3QoSVMa();
  local_e8 = *(long *)(lVar4 + -8);
  lVar16 = lVar16 - (*(long *)(local_e8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  lStack_e0 = lVar4;
  FUN_1002c76a8();
  uVar11 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar17 = lVar16 - uVar11;
  lVar20 = lVar17 - uVar11;
  lVar5 = *(long *)(unaff_x20 + _TtC9Alamofire11DataRequest::dataMutableState);
  uVar13 = *(undefined8 *)(*(long *)(lVar5 + 0x10) + 0x10);
  _os_unfair_lock_lock(uVar13);
  _swift_beginAccess(lVar5 + 0x18,auStack_78,0,0);
  lVar4 = *(long *)(lVar5 + 0x18);
  uVar11 = *(ulong *)(lVar5 + 0x20);
  FUN_10010bd10(lVar4,uVar11);
  _os_unfair_lock_unlock(uVar13);
  uVar18 = 0;
  if (uVar11 >> 0x3c < 0xf) {
    uVar2 = (uint)(uVar11 >> 0x20);
    uVar10 = uVar2 >> 0x1e;
    if (uVar2 >> 0x1e < 2) {
      if (uVar10 == 0) {
        FUN_100006cc8(lVar4,uVar11);
        uVar18 = uVar11 >> 0x30 & 0xff;
      }
      else {
        FUN_100006cc8(lVar4,uVar11);
        iVar12 = (int)((ulong)lVar4 >> 0x20);
        if (SBORROW4(iVar12,(int)lVar4)) {
                    /* WARNING: Does not return */
          pcVar14 = (code *)SoftwareBreakpoint(1,0x100281134);
          (*pcVar14)();
        }
        uVar18 = (ulong)(iVar12 - (int)lVar4);
      }
    }
    else if (uVar10 == 2) {
      lVar5 = *(long *)(lVar4 + 0x10);
      lVar1 = *(long *)(lVar4 + 0x18);
      FUN_100006cc8(lVar4,uVar11);
      uVar18 = lVar1 - lVar5;
      if (SBORROW8(lVar1,lVar5)) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x100280e80);
        (*pcVar14)();
      }
    }
    else {
      FUN_100006cc8(lVar4,uVar11);
      uVar18 = 0;
    }
  }
  plVar22 = *(long **)(unaff_x20 + _TtC9Alamofire7Request::mutableState);
  uVar13 = *(undefined8 *)(plVar22[2] + 0x10);
  _os_unfair_lock_lock(uVar13);
  lVar4 = *(long *)(*plVar22 + 0x60);
  _swift_beginAccess((long)plVar22 + lVar4,auStack_90,0,0);
  FUN_10028ab0c((long)plVar22 + lVar4,lVar20);
  uVar11 = *(ulong *)(lVar20 + 0x150);
  _swift_bridgeObjectRetain(uVar11);
  FUN_1000d27dc(lVar20,FUN_1002c76a8);
  _os_unfair_lock_unlock(uVar13);
  local_f0 = lVar3;
  if (uVar11 >> 0x3e == 0) {
    uVar6 = *(ulong *)((uVar11 & 0xffffffffffffff8) + 0x10);
    if (uVar6 != 0) goto LAB_100280db4;
LAB_100280ecc:
    _swift_bridgeObjectRelease(uVar11);
  }
  else {
    uVar6 = uVar11 & 0xffffffffffffff8;
    if ((long)uVar11 < 0) {
      uVar6 = uVar11;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    if (uVar6 == 0) goto LAB_100280ecc;
LAB_100280db4:
    self = uVar6 - 1;
    if (SBORROW8(uVar6,1)) {
                    /* WARNING: Does not return */
      pcVar14 = (code *)SoftwareBreakpoint(1,0x10028111c);
      (*pcVar14)();
    }
    if ((uVar11 & 0xc000000000000001) == 0) {
      if ((long)self < 0) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x10028112c);
        (*pcVar14)();
      }
      if (*(ulong *)((uVar11 & 0xffffffffffffff8) + 0x10) <= self) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x100281130);
        (*pcVar14)();
      }
      self = *(ID *)(uVar11 + self * 8 + 0x20);
    }
    else {
      FUN_1002d38f8(self,uVar11);
    }
    _swift_bridgeObjectRelease(uVar11);
    IVar7 = _objc_msgSend(self,"response");
    if (IVar7 != 0) {
      IVar7 = _objc_msgSend(IVar7,"expectedContentLength");
      goto LAB_100280ee0;
    }
  }
  IVar7 = *(ID *)PTR__NSURLSessionTransferSizeUnknown_100995218;
LAB_100280ee0:
  self_00 = *(ID *)(unaff_x20 + _TtC9Alamofire7Request::downloadProgress);
  _objc_msgSend(self_00,"setTotalUnitCount:",IVar7);
  _objc_msgSend(self_00,"setCompletedUnitCount:",uVar18);
  uVar19 = *(undefined8 *)(plVar22[2] + 0x10);
  _os_unfair_lock_lock(uVar19);
  FUN_10028ab0c((long)plVar22 + lVar4,lVar17);
  lVar4 = *(long *)(lVar17 + 0x20);
  uVar13 = *(undefined8 *)(lVar17 + 0x28);
  uVar21 = *(undefined8 *)(lVar17 + 0x30);
  if (lVar4 == 0) {
    pcVar14 = (code *)0x0;
    puVar23 = (undefined *)0x0;
    uVar15 = 0;
  }
  else {
    puVar23 = &DAT_1009aa848;
    _swift_allocObject(&DAT_1009aa848,0x20,7);
    *(long *)(puVar23 + 0x10) = lVar4;
    *(undefined8 *)(puVar23 + 0x18) = uVar13;
    pcVar14 = FUN_10028ac4c;
    uVar15 = uVar21;
  }
  FUN_10028ab50(lVar4,uVar13,uVar21);
  FUN_1000d27dc(lVar17,FUN_1002c76a8);
  _os_unfair_lock_unlock(uVar19);
  if (lVar4 != 0) {
    puVar8 = &DAT_1009aa7f8;
    _swift_allocObject(&DAT_1009aa7f8,0x20,7);
    *(code **)(puVar8 + 0x10) = pcVar14;
    *(undefined **)(puVar8 + 0x18) = puVar23;
    FUN_10028abac(FUN_10028aba4,puVar8,uVar15);
    local_a0 = FUN_10028abdc;
    local_c8[1] = (code *)PTR___NSConcreteStackBlock_100995490;
    local_c8[2] = (code *)0x42000000;
    local_c8[3] = FUN_1000acdb4;
    local_c8[4] = (code *)&DAT_1009aa810;
    aBlock = __Block_copy(local_c8 + 1);
    _swift_retain();
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar16);
    local_c8[0] = (code *)PTR___swiftEmptyArrayStorage_100995ea0;
    puVar9 = &DAT_100a82c10;
    FUN_100005c90(&DAT_100a82c10,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
    puVar23 = &DAT_100a82c18;
    FUN_100004bb4(&DAT_100a82c18,&DAT_100819000);
    puVar8 = puVar23;
    FUN_10028abfc();
    lVar3 = local_d8;
    lVar4 = local_f0;
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (local_d8,local_c8,puVar23,puVar8,local_f0,puVar9);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar16,lVar3,aBlock);
    __Block_release(aBlock);
    (**(code **)(local_d0 + 8))(lVar3,lVar4);
    (**(code **)(local_e8 + 8))(lVar16,lStack_e0);
    _swift_release(unaff_x20);
  }
  return;
}

