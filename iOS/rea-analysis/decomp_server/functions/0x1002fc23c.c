// rea decompile_all
// name: FUN_1002fc23c
// address: 0x1002fc23c
// body: available
// range: 0x1002fc23c-0x1002fc777 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_1002fc23c(byte *param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined *param_5)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong self;
  ID IVar8;
  ulong self_00;
  long lVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  undefined1 *puVar13;
  ulong uVar14;
  undefined1 auStack_100 [8];
  code *local_f8;
  undefined *local_f0;
  undefined *puStack_e8;
  undefined8 *local_e0;
  code *local_d8;
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  lVar1 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lVar9 = *(long *)(lVar1 + -8);
  puVar13 = auStack_100 + -(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar10 = *(long *)(lVar2 + -8);
  lVar12 = (long)puVar13 - (*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (2 < *param_1) {
    return;
  }
  *param_1 = 3;
  local_70 = thunk_FUN_1002fbae8;
  local_90 = PTR___NSConcreteStackBlock_100995490;
  local_88 = 0x42000000;
  local_80 = FUN_1000acdb4;
  puStack_78 = &DAT_1009afed8;
  local_68 = param_5;
  pvVar3 = __Block_copy(&local_90);
  _swift_retain(param_5);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar12);
  local_98 = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar4 = &DAT_100a82c10;
  FUN_100005c90(&DAT_100a82c10,PTR___s8Dispatch0A13WorkItemFlagsVMa_100995f40,
                PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_100995f50);
  puVar5 = &DAT_100a82c18;
  FUN_100004bb4(&DAT_100a82c18,&DAT_100819000);
  puVar6 = puVar5;
  FUN_10028abfc();
  local_f0 = puVar6;
  puStack_e8 = puVar5;
  local_e0 = puVar4;
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (puVar13,&local_98,puVar5,puVar6,lVar1,puVar4);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar12,puVar13,pvVar3);
  __Block_release(pvVar3);
  local_d8 = *(code **)(lVar9 + 8);
  (*local_d8)(puVar13,lVar1);
  pcVar11 = *(code **)(lVar10 + 8);
  (*pcVar11)(lVar12,lVar2);
  _swift_release(local_68);
  uVar14 = *(ulong *)(param_1 + 0x150);
  if (uVar14 >> 0x3e == 0) {
    uVar7 = *(ulong *)((uVar14 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar7 = uVar14 & 0xffffffffffffff8;
    if ((uVar14 & 0x8000000000000000) != 0) {
      uVar7 = uVar14;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (uVar7 != 0) {
    self = uVar7 - 1;
    if (SBORROW8(uVar7,1)) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x1002fc758);
      (*pcVar11)();
    }
    local_f8 = pcVar11;
    if ((uVar14 & 0xc000000000000001) == 0) {
      if ((long)self < 0) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x1002fc768);
        (*pcVar11)();
      }
      if (*(ulong *)((uVar14 & 0xffffffffffffff8) + 0x10) <= self) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x1002fc76c);
        (*pcVar11)();
      }
      self = *(ID *)(uVar14 + self * 8 + 0x20);
    }
    else {
      FUN_1002d38f8(self,uVar14);
    }
    IVar8 = _objc_msgSend(self,"state");
    pcVar11 = local_f8;
    if (IVar8 != 3) {
      _objc_msgSend(self,"resume");
      if (uVar14 >> 0x3e == 0) {
        uVar7 = *(ulong *)((uVar14 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar7 = uVar14 & 0xffffffffffffff8;
        if ((uVar14 & 0x8000000000000000) != 0) {
          uVar7 = uVar14;
        }
        __ss18_CocoaArrayWrapperV8endIndexSivg();
      }
      if (uVar7 != 0) {
        self_00 = uVar7 - 1;
        if (SBORROW8(uVar7,1)) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x1002fc770);
          (*pcVar11)();
        }
        if ((uVar14 & 0xc000000000000001) == 0) {
          if ((long)self_00 < 0) {
                    /* WARNING: Does not return */
            pcVar11 = (code *)SoftwareBreakpoint(1,0x1002fc774);
            (*pcVar11)();
          }
          if (*(ulong *)((uVar14 & 0xffffffffffffff8) + 0x10) <= self_00) {
                    /* WARNING: Does not return */
            pcVar11 = (code *)SoftwareBreakpoint(1,0x1002fc778);
            (*pcVar11)();
          }
          self_00 = *(ulong *)(uVar14 + self_00 * 8 + 0x20);
        }
        else {
          FUN_1002d38f8(self_00,uVar14);
        }
        _swift_dynamicCastObjCClass(self_00,&_OBJC_CLASS___NSURLSessionWebSocketTask);
        if (self_00 != 0) {
          if (param_4 >> 0x3c < 0xf) {
            __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(param_3);
          }
          else {
            param_3 = 0;
          }
          _objc_msgSend(self_00,"cancelWithCloseCode:reason:",param_2,param_3);
        }
      }
      puVar5 = &DAT_1009aff10;
      _swift_allocObject(&DAT_1009aff10,0x20,7);
      *(ulong *)(puVar5 + 0x10) = self;
      *(undefined **)(puVar5 + 0x18) = param_5;
      local_70 = FUN_1002bb4c8;
      local_90 = PTR___NSConcreteStackBlock_100995490;
      local_88 = 0x42000000;
      local_80 = FUN_1000acdb4;
      puStack_78 = &DAT_1009aff28;
      local_68 = puVar5;
      pvVar3 = __Block_copy(&local_90);
      _swift_retain(param_5);
      __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar12,self);
      local_98 = PTR___swiftEmptyArrayStorage_100995ea0;
      __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                (puVar13,&local_98,puStack_e8,local_f0,lVar1,local_e0);
      __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                (0,lVar12,puVar13,pvVar3);
      __Block_release(pvVar3);
      (*local_d8)(puVar13,lVar1);
      (*local_f8)(lVar12,lVar2);
      goto LAB_1002fc708;
    }
  }
  local_70 = FUN_1002bb450;
  local_90 = PTR___NSConcreteStackBlock_100995490;
  local_88 = 0x42000000;
  local_80 = FUN_1000acdb4;
  puStack_78 = &DAT_1009aff50;
  local_68 = param_5;
  pvVar3 = __Block_copy(&local_90);
  _swift_retain(param_5);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar12);
  local_98 = PTR___swiftEmptyArrayStorage_100995ea0;
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (puVar13,&local_98,puStack_e8,local_f0,lVar1,local_e0);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar12,puVar13,pvVar3);
  __Block_release(pvVar3);
  (*local_d8)(puVar13,lVar1);
  (*pcVar11)(lVar12,lVar2);
LAB_1002fc708:
  _swift_release(local_68);
  return;
}

