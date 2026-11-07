// rea decompile_all
// name: FUN_1002d12d0
// address: 0x1002d12d0
// body: available
// range: 0x1002d12d0-0x1002d168f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002d12d0(byte *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong self;
  ID IVar8;
  ulong uVar9;
  undefined1 *puVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  long lVar14;
  code *pcVar15;
  undefined1 auStack_e0 [8];
  undefined *local_d8;
  undefined8 *puStack_d0;
  long local_c8;
  code *local_c0;
  undefined8 local_b8;
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  lVar1 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar11 = *(long *)(lVar1 + -8);
  puVar10 = auStack_e0 + -(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar14 = *(long *)(lVar2 + -8);
  lVar13 = (long)puVar10 - (*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (*param_1 < 2) {
    *param_1 = 2;
    local_b8 = *(undefined8 *)(param_2 + _TtC9Alamofire7Request::underlyingQueue);
    local_70 = thunk_FUN_1002ca380;
    local_90 = PTR___NSConcreteStackBlock_100995490;
    local_88 = 0x42000000;
    local_80 = FUN_1000acdb4;
    puStack_78 = &DAT_1009ae2c8;
    local_68 = (undefined *)param_2;
    pvVar3 = __Block_copy(&local_90);
    _swift_retain(param_2);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar13);
    local_98 = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar4 = &DAT_100a82c10;
    FUN_100005c90(&DAT_100a82c10,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
    puVar5 = &DAT_100a82c18;
    local_c8 = lVar11;
    local_c0 = (code *)param_1;
    FUN_100004bb4(&DAT_100a82c18,&DAT_100819000);
    puVar6 = &DAT_100a82c20;
    FUN_10003f840(&DAT_100a82c20,&DAT_100a82c18,&DAT_100819000,PTR___sSayxGSTsMc_100995898);
    local_d8 = puVar5;
    puStack_d0 = puVar4;
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (puVar10,&local_98,puVar5,puVar6,lVar1,puVar4);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar13,puVar10,pvVar3);
    __Block_release(pvVar3);
    pcVar12 = *(code **)(local_c8 + 8);
    (*pcVar12)(puVar10,lVar1);
    pcVar15 = *(code **)(lVar14 + 8);
    (*pcVar15)(lVar13,lVar2);
    _swift_release(local_68);
    uVar9 = *(ulong *)(local_c0 + 0x150);
    if (uVar9 >> 0x3e == 0) {
      uVar7 = *(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar7 = uVar9 & 0xffffffffffffff8;
      if ((long)uVar9 < 0) {
        uVar7 = uVar9;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (uVar7 != 0) {
      self = uVar7 - 1;
      if (SBORROW8(uVar7,1)) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x1002d166c);
        (*pcVar12)();
      }
      if ((uVar9 & 0xc000000000000001) == 0) {
        if ((long)self < 0) {
                    /* WARNING: Does not return */
          pcVar12 = (code *)SoftwareBreakpoint(1,0x1002d168c);
          (*pcVar12)();
        }
        if (*(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10) <= self) {
                    /* WARNING: Does not return */
          pcVar12 = (code *)SoftwareBreakpoint(1,0x1002d1690);
          (*pcVar12)();
        }
        self = *(ID *)(uVar9 + self * 8 + 0x20);
      }
      else {
        FUN_100169c28(self,uVar9,&PTR__OBJC_CLASS___NSURLSessionTask_100a65a00,&DAT_100a82760);
      }
      IVar8 = _objc_msgSend(self,"state");
      if (IVar8 != 3) {
        _objc_msgSend(self,"suspend");
        puVar5 = &DAT_1009ae300;
        _swift_allocObject(&DAT_1009ae300,0x20,7);
        *(ulong *)(puVar5 + 0x10) = self;
        *(long *)(puVar5 + 0x18) = param_2;
        local_70 = FUN_1002d8ac4;
        local_90 = PTR___NSConcreteStackBlock_100995490;
        local_88 = 0x42000000;
        local_80 = FUN_1000acdb4;
        puStack_78 = &DAT_1009ae318;
        local_c0 = pcVar12;
        local_68 = puVar5;
        pvVar3 = __Block_copy(&local_90);
        _swift_retain(param_2);
        __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar13,self);
        local_98 = PTR___swiftEmptyArrayStorage_100995ea0;
        __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                  (puVar10,&local_98,local_d8,puVar6,lVar1,puStack_d0);
        __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                  (0,lVar13,puVar10,pvVar3);
        __Block_release(pvVar3);
        (*local_c0)(puVar10,lVar1);
        (*pcVar15)(lVar13,lVar2);
        _swift_release(local_68);
      }
    }
  }
  return;
}

