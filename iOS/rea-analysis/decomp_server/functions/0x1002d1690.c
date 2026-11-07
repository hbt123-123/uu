// rea decompile_all
// name: FUN_1002d1690
// address: 0x1002d1690
// body: available
// range: 0x1002d1690-0x1002d1a7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002d1690(undefined1 *param_1,byte *param_2,undefined8 param_3)

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
  undefined1 uVar9;
  ulong uVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  code *pcVar16;
  undefined *local_e0;
  undefined8 *puStack_d8;
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  lVar1 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar13 = *(long *)(lVar1 + -8);
  lVar12 = (long)&local_e0 - (*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar15 = *(long *)(lVar2 + -8);
  lVar14 = lVar12 - (*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar9 = 0;
  if ((1 << (ulong)(*param_2 & 0x1f) & 0x1aU) == 0) {
    *param_2 = 1;
    local_70 = thunk_FUN_1002ca018;
    local_90 = PTR___NSConcreteStackBlock_100995490;
    local_88 = 0x42000000;
    local_80 = FUN_1000acdb4;
    puStack_78 = &DAT_1009ae250;
    local_68 = (undefined *)param_3;
    pvVar3 = __Block_copy(&local_90);
    _swift_retain(param_3);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar14);
    local_98 = PTR___swiftEmptyArrayStorage_100995ea0;
    puVar4 = &DAT_100a82c10;
    FUN_100005c90(&DAT_100a82c10,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
    puVar5 = &DAT_100a82c18;
    FUN_100004bb4(&DAT_100a82c18,&DAT_100819000);
    puVar6 = &DAT_100a82c20;
    FUN_10003f840(&DAT_100a82c20,&DAT_100a82c18,&DAT_100819000,PTR___sSayxGSTsMc_100995898);
    local_e0 = puVar5;
    puStack_d8 = puVar4;
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (lVar12,&local_98,puVar5,puVar6,lVar1,puVar4);
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar14,lVar12,pvVar3);
    __Block_release(pvVar3);
    pcVar11 = *(code **)(lVar13 + 8);
    (*pcVar11)(lVar12,lVar1);
    pcVar16 = *(code **)(lVar15 + 8);
    (*pcVar16)(lVar14,lVar2);
    _swift_release(local_68);
    uVar10 = *(ulong *)(param_2 + 0x150);
    if (uVar10 >> 0x3e == 0) {
      uVar7 = *(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar7 = uVar10 & 0xffffffffffffff8;
      if ((long)uVar10 < 0) {
        uVar7 = uVar10;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (uVar7 == 0) {
      uVar9 = 1;
    }
    else {
      self = uVar7 - 1;
      if (SBORROW8(uVar7,1)) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x1002d1a50);
        (*pcVar11)();
      }
      if ((uVar10 & 0xc000000000000001) == 0) {
        if ((long)self < 0) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x1002d1a78);
          (*pcVar11)();
        }
        if (*(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10) <= self) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x1002d1a7c);
          (*pcVar11)();
        }
        self = *(ID *)(uVar10 + self * 8 + 0x20);
      }
      else {
        FUN_100169c28(self,uVar10,&PTR__OBJC_CLASS___NSURLSessionTask_100a65a00,&DAT_100a82760);
      }
      IVar8 = _objc_msgSend(self,"state");
      if (IVar8 != 3) {
        _objc_msgSend(self,"resume");
        puVar5 = &DAT_1009ae288;
        _swift_allocObject(&DAT_1009ae288,0x20,7);
        *(ulong *)(puVar5 + 0x10) = self;
        *(undefined8 *)(puVar5 + 0x18) = param_3;
        local_70 = FUN_1002d8aa0;
        local_90 = PTR___NSConcreteStackBlock_100995490;
        local_88 = 0x42000000;
        local_80 = FUN_1000acdb4;
        puStack_78 = &DAT_1009ae2a0;
        local_68 = puVar5;
        pvVar3 = __Block_copy(&local_90);
        _swift_retain(param_3);
        __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar14,self);
        local_98 = PTR___swiftEmptyArrayStorage_100995ea0;
        __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                  (lVar12,&local_98,local_e0,puVar6,lVar1,puStack_d8);
        __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                  (0,lVar14,lVar12,pvVar3);
        __Block_release(pvVar3);
        (*pcVar11)(lVar12,lVar1);
        (*pcVar16)(lVar14,lVar2);
        _swift_release(local_68);
      }
      uVar9 = 0;
    }
  }
  *param_1 = uVar9;
  return;
}

